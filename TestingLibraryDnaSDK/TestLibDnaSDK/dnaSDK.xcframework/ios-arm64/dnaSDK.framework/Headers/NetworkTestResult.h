//
//  NetworkTestResult.h
//  DNA_app
//
//  Created by Novandiansyah on 20/06/22.
//  Copyright © 2022 Gimbal. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NetworkTestResult : NSObject

@property (nonatomic, strong) NSString *_id;
@property (nonatomic, strong) NSString *is_sync;
@property (nonatomic) bool normal_test_result_state;
@property (nonatomic, strong) NSString *summary;
@property (nonatomic, strong) NSString *technology;
@property (nonatomic, strong) NSString *apn;
@property (nonatomic) bool browsing_status;
@property (nonatomic) bool chat_status;
@property (nonatomic, strong) NSString *video_quality;
@property (nonatomic, strong) NSString *ping;
@property (nonatomic, strong) NSString *download;
@property (nonatomic, strong) NSString *upload;
@property (nonatomic, strong) NSString *web_page_loading;
@property (nonatomic, strong) NSString *buffer_init;
@property (nonatomic, strong) NSString *signal_quality;
@property (nonatomic, strong) NSString *signal_quality_desc;
@property (nonatomic, strong) NSString *signal_strength;
@property (nonatomic, strong) NSString *signal_strength_desc;
@property (nonatomic, strong) NSString *rsrq;
@property (nonatomic, strong) NSString *lac;
@property (nonatomic, strong) NSString *cid;
@property (nonatomic) bool show_recommendation;
@property (nonatomic, strong) NSString *recommendation_id;
@property (nonatomic, strong) NSString *create_at;
@property (nonatomic, strong) NSString *update_at;

@end

NS_ASSUME_NONNULL_END
