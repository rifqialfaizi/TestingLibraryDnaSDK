//
//  CheckStepDelegate.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 12/03/23.
//

typedef NS_ENUM(NSInteger, DNACheckStep) {
	download = 0,
	upload = 1,
	video = 2,
	web = 3
};

@protocol CheckStepDelegate <NSObject>

@property (nonatomic, nonnull) void (^onCheckStep)(DNACheckStep step);

@end
