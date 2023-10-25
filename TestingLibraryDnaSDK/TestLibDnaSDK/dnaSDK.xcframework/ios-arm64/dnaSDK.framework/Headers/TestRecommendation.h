//
//  DnaRecommendation.h
//  DNA_app
//
//  Created by Novandiansyah on 20/06/22.
//  Copyright © 2022 Gimbal. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, DNARecommendation) {
	refresh = 0,
	changeNetwork = 1,
	checkQuota = 2,
	checkVSIM = 3,
	enableData = 4,
	changeApn = 5
};

NS_ASSUME_NONNULL_BEGIN

@interface TestRecommendation : NSObject

@property (nonatomic) NSInteger _idRecomm;
@property (nonatomic, strong) NSString *recommendation;
@property (nonatomic, strong) NSString *detail;


@end

NS_ASSUME_NONNULL_END
