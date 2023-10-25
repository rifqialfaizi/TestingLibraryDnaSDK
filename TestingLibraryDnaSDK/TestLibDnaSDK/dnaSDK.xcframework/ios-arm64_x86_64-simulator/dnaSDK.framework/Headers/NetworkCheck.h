//
//  NetworkCheck.h
//  DNA_app
//
//  Created by Novandiansyah on 29/06/22.
//  Copyright © 2022 Gimbal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <dnaSDK/Ticket.h>
#import <dnaSDK/UserManager.h>
#import <dnaSDK/ModelManager.h>
#import <EQCoreLib/EQCoreLib.h>
#import <dnaSDK/ResultTestDelegate.h>
#import <dnaSDK/CheckStepDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetworkCheck: NSObject

@property (nonatomic, strong, nullable) id<ResultTestDelegate> resultDelegate;
@property (nonatomic, strong, nullable) id<CheckStepDelegate> stepDelegate;
@property (strong, nonatomic, nonnull) EQScenarioConfiguration *scenarioConfiguration;

@property (nonatomic,strong) NSTimer *timer;
@property (nonatomic, assign) NSInteger currSeconds;


- (void) countdownTimerStart:(NSInteger *)timeInSecond;
- (void) countDown;
- (instancetype)initWith:(NSString *)dqaIdHash
			  msisdnHash:(NSString *)msisdnHash
			 bearerToken:(NSString *)token;

- (void)startTestWith:(UIView *_Nonnull)webContainer andVideoContainer:(UIView *_Nonnull)videoContainer andTimerSecond:(NSInteger *)countDownTimer;
- (void)finishTest;

- (NSString *)getCurrentDate;
- (void)sendTicketTesting:(Ticket *)ticket;

- (void)getThresholdServiceRecomm:completion:(void (^)(NSString * _Nullable dqaIdHash, NSString * _Nullable msisdnHash, NSString * _Nullable bearerToken))completionHandler;

@end

NS_ASSUME_NONNULL_END
