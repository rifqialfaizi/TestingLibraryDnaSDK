//
//  DNAAgent.h
//  DNAAgent
//
//  Created by Kuncoro Galih Gemilang on 24/08/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <dnaSDK/Ticket.h>
#import <dnaSDK/ResultTestDelegate.h>
#import <dnaSDK/CheckStepDelegate.h>
#import <dnaSDK/TestRecommendation.h>

//! Project version number for dna.
FOUNDATION_EXPORT double dnaVersionNumber;

//! Project version string for dna.
FOUNDATION_EXPORT const unsigned char dnaVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <dnaSDK/PublicHeader.h>
NS_SWIFT_NAME(DNA)

typedef NS_ENUM(NSInteger, DNAStatus) {
    DNAStatusIdle = 0,
    DNAStatusRunning = 1,
    DNAStatusDQAIDMissing = 2,
    DNAStatusDQAIDOk = 3
};

typedef NS_ENUM(NSInteger, DNAClusterStatus) {
	Unknown = 0,
	Master = 1,
	Slave = 2
};

@interface DNA: NSObject <ResultTestDelegate, CheckStepDelegate>

@property (nonatomic) DNAStatus status;
@property (nonatomic) DNAClusterStatus clusterStatus;

@property (nonatomic, copy, nullable) void (^onShooterResultDownload)(Ticket * _Nullable downloadResult);
@property (nonatomic, copy, nullable) void (^onShooterResultUpload)(Ticket * _Nullable uploadResult);
@property (nonatomic, copy, nullable) void (^onResultWebTest)(Ticket * _Nullable webResult);
@property (nonatomic, copy, nullable) void (^onResultVideoTest)(Ticket * _Nullable videoResult);
@property (nonatomic, copy, nullable) void (^onFinishTesting)(Ticket * _Nullable ticket, NetworkTestResult * _Nullable networkResult, NSArray<TestRecommendation *> *_Nullable recommendations);
@property (nonatomic, nonnull) void (^onCheckStep)(DNACheckStep step);

// This is the singleton object of the agent to initiate and execute the available methods.
+ (DNA *_Nonnull)shared;

/**
 *	Call this method to setup the agent on app delegate
 *
 *  @param options  The parameter comes from UIApplicationDelegate application:didFinishLaunchingWithOptions:
 */
- (void)setupDNAWithOptions:(NSDictionary *_Nullable)options;

/**
 *  This method should be called from UIApplication delegate to transfer completion handler to EQKernel
 *
 *  @param application       UIApplication
 *  @param completionHandler completion handler block needed to alert OS when download is finished
 */
- (void)performBackgroundFetch:(UIApplication *_Nonnull)application
performFetchWithCompletionHandler:(void (^_Nonnull)(UIBackgroundFetchResult))completionHandler;

- (void)launchDNA;

/**
 *	Start the agent. To  support any of the background modes, you must call the this method in your AppDelegate.
 *	Otherwise, the SDK will not be able to start in background and execute the tasks it must run.
 */
- (void)startDNA;

// Stop the agent
- (void)stopDNA;

/**
 *	Release the agent. This method should be called when the application is exited or killed, or if you want to free up the mobile device resources outside of testing periods.
 *	Before calling this,  make sure the agent is not running. Otherwise, an error will be thrown. After a call to this method, the agent will not start again before you setup the agent.
 */
- (void)releaseDNA;

/**
 *	Use this to check to check status of the agent. If the DQA ID is missing or expired, the agent will not be able to start.
 */
- (DNAStatus)getStatus;

/**
 *  Get device information which required for authentication
 *
 *  @param deviceToken   token get from remote server notification. Perform this method on app delegate
 */

- (void)getDeviceInfoWithDeviceToken:(NSData *_Nonnull)deviceToken;

/**
 * 	Get credentials which required to perform all of DNA services
 */
- (void)startAuth:(NSString *_Nonnull)phoneNumber completionHandler:(void (^_Nonnull)(NSString *_Nonnull))authStatus;

- (void)applyConfiguration;

/**
 * 	Check network quality
 */
- (void)runTestWith:(UIView *_Nonnull)webContainer andVideoContainer:(UIView *_Nonnull)videoContainer andTimerInSecond:(NSString *_Nonnull)timeOut;
- (void)stopTest;

/**
 * 	Get all tickets from server and save it to local database
 */
- (void)getTicketServer:(void (^_Nonnull)(NSArray<Ticket *> *_Nullable))completionHandler;

/**
 *     Get all available problem details that can be submitted from CRM
 */
- (void)getProblemDetailList:(void (^_Nonnull)(NSArray<NSString *> *_Nonnull))completionHandler;


/**
 *     Get category problem from API
 */
- (void)getCategories:(void (^_Nonnull)(NSArray<NSString *> *_Nonnull))completionHandler;


/**
 * 	Check incident status for given coordinate
 */
- (void)getIncidentStatusWith: (double)longitude
					 latitude: (double)latitude
			completionHandler: (void (^_Nonnull)(bool))status;

/**
 * 	Get active complaint tickets
 */
- (NSArray<Ticket *> *_Nonnull)getActiveTicket;

/**
 * 	Get tickets which already handled
 */
- (NSArray<Ticket *> *_Nonnull)getCompletedTicket;

/**
 *  Get detail of the ticket with specific ID
 *
 *  @param ticketId      ID of the ticket which detail to be retrieved
 */
- (Ticket *_Nonnull)getDetailTicketWith:(NSString *_Nonnull)ticketId;

/**
 *  Submit ticket to server
 *
 *  @param ticket     ticket to be sent
 */
- (void)sendTicket:(Ticket *_Nonnull)ticket completionHandler: (void (^_Nullable)(NSDictionary *_Nullable))completionHandling;

/**
 *  Get current location of the user
 */
- (void)accessLocation:(void (^_Nullable)(NSDictionary *_Nullable))completionHandler;

/**
 *	Open settings page on iOS
 */
- (void)openSettingsPage;

/**
 *	Open dial to call Telkomsel dial number
 */
- (void)openDial;

/**
 * 	Get information of sim slot
 */
- (NSString *_Nonnull)getSimSlot;

/**
 *	Get information of cellular operator name
 */
- (NSString *_Nonnull)getDataSimOperator;

@end

