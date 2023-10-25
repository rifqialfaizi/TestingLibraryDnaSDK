//
//  Auth.h
//  DNA_app
//
//  Created by Novandiansyah on 26/06/22.
//  Copyright © 2022 Gimbal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQCoreLib.h>
#import <dnaSDK/UserManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface DNAAuth: NSObject

@property (nonatomic,strong) NSString *fcmToken;
@property (nonatomic, strong, nonnull) UserManager *userManager;

+ (DNAAuth *)shared;

- (void)getFcmToken;
- (void)checkAuthWith:(NSString *)dqaId
		  phoneNumber:(NSString *)userPhone
		 agentVersion:(NSString *)version
		   completion:(void (^)(NSString * _Nullable dqaIdHash, NSString * _Nullable msisdnHash, NSString * _Nullable bearerToken))completionHandler;

@end

NS_ASSUME_NONNULL_END
