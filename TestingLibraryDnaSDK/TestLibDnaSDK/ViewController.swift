//
//  ViewController.swift
//  TestLibDnaSDK
//
//  Created by PT Phincon on 10/10/23.
//

import UIKit
import dnaSDK

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        DNA.shared().launch()
        checkAuth(phoneNumber: "", completionHandler: { status in
            print("Status Auth: \(status)")
            self.checkDNAServices()
        })
    }

    
    //MARK: Check Auth DNA
    func checkAuth(phoneNumber: String, completionHandler: @escaping (String) -> Void) {
        DNA.shared().startAuth(phoneNumber, completionHandler: { status in
            completionHandler(status)
        })
    }
    
    //MARK: Start DNA Services
    func checkDNAServices() {
        DNA.shared().runTest(with: self.view, andVideoContainer: self.view, andTimerInSecond: "60")
        DNA.shared().onCheckStep = { step in
            switch step {
            case .download:
                print("Download")
            case .upload:
                print("Upload")
            case .video:
                print("Video")
            case .web:
                print("Web")
            @unknown default:
                break
            }
        }
        
        DNA.shared().onResultWebTest = { webResult in
            print("masuk result web")
        }
        DNA.shared().onResultVideoTest = { videoResult in
            print("masuk result video")
        }
        DNA.shared().onShooterResultUpload = { uploadResult in
            print("masuk result upload")
        }
        DNA.shared().onShooterResultDownload = { downloadResult in
            print("masuk result download")
        }
        DNA.shared().onFinishTesting = { ticket, testResult, recommendation in
            print("Ticket : \(ticket ?? Ticket())")
            print("TestResult : \(testResult ?? NetworkTestResult())")
            print("Recommendation : \(recommendation ?? [])")
        }
    }

}

