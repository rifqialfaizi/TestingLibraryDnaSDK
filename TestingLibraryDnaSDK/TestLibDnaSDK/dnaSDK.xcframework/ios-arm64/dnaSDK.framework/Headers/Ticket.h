//
//  Model.h
//  DataBaseDemo
//
//  Created by TheAppGuruz-New-6 on 22/02/14.
//  Copyright (c) 2014 TheAppGuruz-New-6. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Ticket: NSObject

//satu ticket untuk semua hasil
@property (nonatomic,strong) NSString *_id;
@property (nonatomic,strong) NSString *mobile_ticket;
@property (nonatomic,strong) NSString *status_crm;
@property (nonatomic,strong) NSString *sub_status;
@property (nonatomic,strong) NSString *dna_flag;
@property (nonatomic,strong) NSString *test_id;
@property (nonatomic,strong) NSString *dna_number;
@property (nonatomic,strong) NSString *incident_number;
@property (nonatomic,strong) NSString *incident_start_time;
@property (nonatomic,strong) NSString *incident_in_progress_time;
@property (nonatomic,strong) NSString *incident_pending_time;
@property (nonatomic,strong) NSString *incident_resolved_time;
@property (nonatomic,strong) NSString *incident_closed_time;
@property (nonatomic,strong) NSString *dqa_id;
@property (nonatomic,strong) NSString *category_problem;
@property (nonatomic,strong) NSString *detail_problem;
@property (nonatomic,strong) NSString *detail_lokasi;
@property (nonatomic,strong) NSString *msisdn;
@property (nonatomic,strong) NSString *imei;
@property (nonatomic,strong) NSString *imsi;
@property (nonatomic,strong) NSString *mem_percent;
@property (nonatomic,strong) NSString *bat_level;
@property (nonatomic,strong) NSString *cpu_percent;
@property (nonatomic,strong) NSString *model;
@property (nonatomic,strong) NSString *manufacturer;
@property (nonatomic,strong) NSString *device_dim_os_label;
@property (nonatomic,strong) NSString *sim_mcc;
@property (nonatomic,strong) NSString *sim_mnc;
@property (nonatomic,strong) NSString *rad_mcc;
@property (nonatomic,strong) NSString *rad_mnc;
@property (nonatomic,strong) NSString *rad_bearer_dim_group_label;
@property (nonatomic,strong) NSString *rad_lac;
@property (nonatomic,strong) NSString *rad_ci;
@property (nonatomic,strong) NSString *enodeb_id;
@property (nonatomic,strong) NSString *latitude;
@property (nonatomic,strong) NSString *longitude;
@property (nonatomic,strong) NSString *address;
@property (nonatomic,strong) NSString *achievable_throughput_kbps;
@property (nonatomic,strong) NSString *apn_end;
@property (nonatomic,strong) NSString *buffering_count;
@property (nonatomic,strong) NSString *buf_percentile_th_0_15;
@property (nonatomic,strong) NSString *buf_latency_avg_ms;
@property (nonatomic,strong) NSString *buf_latency_max_ms;
@property (nonatomic,strong) NSString *buf_latency_min_ms;
@property (nonatomic,strong) NSString *buf_th_avg_kbps;
@property (nonatomic,strong) NSString *buf_th_max_kbps;
@property (nonatomic,strong) NSString *buf_th_min_kbps;
@property (nonatomic,strong) NSString *session_time_ms;
@property (nonatomic,strong) NSString *rad_net_state_end;
@property (nonatomic,strong) NSString *rad_data_state_end;
@property (nonatomic,strong) NSString *web_failure_count;
@property (nonatomic,strong) NSString *web_count;
@property (nonatomic,strong) NSString *web_loading_time;
@property (nonatomic,strong) NSString *web_success_count;
@property (nonatomic,strong) NSString *location_dim_label;
@property (nonatomic,strong) NSString *ini_buffering_time;
@property (nonatomic,strong) NSString *failure_rate;
@property (nonatomic,strong) NSString *web_page_loading_time_s;
@property (nonatomic,strong) NSString *th_avg_kbps;
@property (nonatomic,strong) NSString *run_type_id;
@property (nonatomic,strong) NSString *jitter_avg_ms;
@property (nonatomic,strong) NSString *jitter_max_ms;
@property (nonatomic,strong) NSString *rtt_avg_ms;
@property (nonatomic,strong) NSString *rtt_min_ms;
@property (nonatomic,strong) NSString *rtt_max_ms;
@property (nonatomic,strong) NSString *mscore_test;
@property (nonatomic,strong) NSString *rad_data_state_dim_label;
@property (nonatomic,strong) NSString *quality_change_number;
@property (nonatomic,strong) NSString *on_progress_development_cs_based_voice_in_mqa_system;
@property (nonatomic,strong) NSString *rebuffering_percentage;
@property (nonatomic,strong) NSString *rep_latency_avg;
@property (nonatomic,strong) NSString *rep_latency_max;
@property (nonatomic,strong) NSString *rep_latency_min;
@property (nonatomic,strong) NSString *signal_quality_start;
@property (nonatomic,strong) NSString *served_signal_start;
@property (nonatomic,strong) NSString *scenario_id;
@property (nonatomic,strong) NSString *agg_bearer_dim_group_label;
@property (nonatomic,strong) NSString *user_activity_dim_label;
@property (nonatomic,strong) NSString *quality_end_dim_label;
@property (nonatomic,strong) NSString *video_quality_percentile_0_5;
@property (nonatomic,strong) NSString *quality_start_dim_label;
@property (nonatomic,strong) NSString *wifi_state_dim_label;
@property (nonatomic,strong) NSString *notes;
@property (nonatomic,strong) NSString *th_dl_avg_kbps;
@property (nonatomic,strong) NSString *th_dl_min_kbps;
@property (nonatomic,strong) NSString *th_dl_max_kbps;
@property (nonatomic,strong) NSString *th_ul_avg_kbps;
@property (nonatomic,strong) NSString *th_ul_min_kbps;
@property (nonatomic,strong) NSString *th_ul_max_kbps;
@property (nonatomic,strong) NSString *rtt_dl_avg_ms;
@property (nonatomic,strong) NSString *rtt_dl_min_ms;
@property (nonatomic,strong) NSString *rtt_dl_max_ms;
@property (nonatomic,strong) NSString *rtt_ul_avg_ms;
@property (nonatomic,strong) NSString *rtt_ul_min_ms;
@property (nonatomic,strong) NSString *rtt_ul_max_ms;
@property (nonatomic,strong) NSString *rating;
@property (nonatomic,strong) NSString *feedback;
@property (nonatomic,strong) NSString *rebuffering_time;
@property (nonatomic,strong) NSString *problem;
@property (nonatomic,strong) NSString *created_at;
@property (nonatomic,strong) NSString *updated_at;
@property (nonatomic,strong) NSString *is_video;
@property (nonatomic,strong) NSString *is_web;
@property (nonatomic,strong) NSString *is_chat;
@property (nonatomic,strong) NSString *id_recommendation;
@property (nonatomic,strong) NSString *is_sync;
@property (nonatomic,strong) NSString *signal_quality_rf;
@property (nonatomic,strong) NSString *status_dl;
@property (nonatomic,strong) NSString *status_ul;
@property (nonatomic,strong) NSString *status_video;
@property (nonatomic,strong) NSString *status_web;
@property (nonatomic,strong) NSString *msidn_testing;
@property (nonatomic,assign) NSString *is_survey;
@property (nonatomic,assign) int isTicketing;

@end
