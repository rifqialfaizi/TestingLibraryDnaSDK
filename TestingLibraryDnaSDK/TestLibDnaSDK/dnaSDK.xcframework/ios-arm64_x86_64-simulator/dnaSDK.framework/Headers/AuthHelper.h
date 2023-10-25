//
//  JWTBuilder.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 01/09/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SecurityMechanism) {
	base64 = 0,
	jwt = 1
};

NS_ASSUME_NONNULL_BEGIN

@interface AuthHelper: NSObject

+ (NSString *)createCredentialWith:(NSString *)dqaId
					   phoneNumber:(NSString *)userPhone
						 mechanism:(SecurityMechanism)securityMechanism;

@end

NS_ASSUME_NONNULL_END
