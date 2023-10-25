//
//  EQTicketUser.h
//  EQCoreLib
//
//  Created by David Rodrigues on 23/10/2020.
//  Copyright © 2020 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EQTicketUser : NSObject

@property (strong, nonatomic, readonly, nonnull) NSString *firstName;
@property (strong, nonatomic, readonly, nonnull) NSString *lastName;
@property (strong, nonatomic, readonly, nonnull) NSString *mail;

- (instancetype)initWithFirstName:(NSString * _Nonnull)firstName lastName:(NSString * _Nonnull)lastName mail:(NSString * _Nonnull)mail;

@end

NS_ASSUME_NONNULL_END
