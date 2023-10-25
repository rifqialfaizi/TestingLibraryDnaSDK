//
//  DQAService.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 26/08/22.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQCoreLib.h>

NS_ASSUME_NONNULL_BEGIN

@interface DNAGenerator: NSObject <EQDQAIDGenerationDelegate>

@property (nonatomic, strong, nonnull) NSString *coupon;
@property (nonatomic, copy, nullable) void (^completeGetDQAID)(void);

- (instancetype)initWithCoupon:(NSString *_Nullable)coupon;
- (void)getDqaId;

@end

NS_ASSUME_NONNULL_END
