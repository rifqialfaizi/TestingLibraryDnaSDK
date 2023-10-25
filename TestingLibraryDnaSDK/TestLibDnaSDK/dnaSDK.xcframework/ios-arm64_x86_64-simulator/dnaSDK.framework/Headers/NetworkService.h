//
//  NetworkService.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 28/08/22.
//

#import <Foundation/Foundation.h>
#import <dnaSDK/EndPoint.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetworkService: NSObject 

+ (void)requestWithEndPoint:(EndPoint *)endPoint
				 completion:(void (^_Nullable)(NSDictionary *))completionHandler;
					
@end
					
NS_ASSUME_NONNULL_END
