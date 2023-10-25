//
//  DNAService.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 28/08/22.
//

#import <Foundation/Foundation.h>
#import <dnaSDK/EndPoint.h>

typedef NS_ENUM(NSInteger, ServiceType) {
	GetTicket = 0,
	Auth = 1,
	NetworkTesting = 2,
	Recommendation = 3,
	LocalTicket = 4,
	CheckIncident = 5,
    ProblemDetail = 6,
    ThresholdServiceRecomm = 7,
	Category = 8
};

NS_ASSUME_NONNULL_BEGIN

@interface DNAService: NSObject

- (void)performService:(ServiceType)service
			   headers:(NSDictionary *_Nullable)headersKeyPair
			parameters:(NSDictionary *_Nullable)paramsKeyPair
			completion:(void (^_Nullable)(NSDictionary *))completionHandler;

@end

NS_ASSUME_NONNULL_END
