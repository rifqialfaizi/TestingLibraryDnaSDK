//
//  ResultTestDelegate.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 16/10/22.
//

#import <dnaSDK/Ticket.h>
#import <dnaSDK/TestRecommendation.h>
#import <dnaSDK/NetworkTestResult.h>

@protocol ResultTestDelegate <NSObject>

@property (nonatomic, copy, nullable) void (^onShooterResultDownload)(Ticket * _Nullable downloadResult);
@property (nonatomic, copy, nullable) void (^onShooterResultUpload)(Ticket *_Nullable uploadResult);
@property (nonatomic, copy, nullable) void (^onResultWebTest)(Ticket *_Nullable webResult);
@property (nonatomic, copy, nullable) void (^onResultVideoTest)(Ticket *_Nullable videoResult);
@property (nonatomic, copy, nullable) void (^onFinishTesting)(Ticket * _Nullable ticket, NetworkTestResult * _Nullable networkResult, NSArray<TestRecommendation *> *_Nullable recommendations);

@end
