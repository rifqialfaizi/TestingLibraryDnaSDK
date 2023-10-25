//
//  AuthUtility.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 04/10/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AuthUtility: NSObject

+ (NSString *)encryptDES:(NSString *)value;
+ (NSString *)encodeBase64:(NSString *)value;

@end

NS_ASSUME_NONNULL_END
