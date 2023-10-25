//
//  NSUserDefaults.h
//  DNA_app
//
//  Created by Novandiansyah on 29/06/22.
//  Copyright © 2022 Gimbal. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UserManager : NSObject

@property (nonatomic, strong) NSUserDefaults *prefs;

+ (UserManager *)shared;
- (void)setHpPrefs:(NSString *) noHp;
- (NSString *)getHpPrefs;

- (void)setFirstLogin:(Boolean *) flag;
- (Boolean *)getFirstLogin;


- (void)setDqaIdHash:(NSString *) dqaIdHas;
- (NSString *)getDqaIdHash;


- (void)setMsisdnHash:(NSString *) msisdnHash;
- (NSString *)getMsisdnHash;



@end

NS_ASSUME_NONNULL_END
