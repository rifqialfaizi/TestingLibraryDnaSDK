//
//  ThresholdServiceRecomm.h
//  dna
//
//  Created by Muhamad Alfy on 06/07/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThresholdServiceRecommendation : NSObject

@property (nonatomic, strong) NSString *serviceMin;
@property (nonatomic, strong) NSString *serviceMax;
@property (nonatomic, strong) NSString *serviceType;
@property (nonatomic, strong) NSString *serviceParam;
@end

NS_ASSUME_NONNULL_END
