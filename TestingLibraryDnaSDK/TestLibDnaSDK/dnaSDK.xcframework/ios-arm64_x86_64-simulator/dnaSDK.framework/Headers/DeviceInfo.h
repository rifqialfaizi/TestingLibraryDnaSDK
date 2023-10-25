//
//  DeviceInfo.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 28/08/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceInfo: NSObject

@property (nonatomic,strong) NSString *isToggleDataEnable;
@property (nonatomic,strong) NSString *isAirplaneModeOn;
@property (nonatomic,strong) NSString *CellInfo;
@property (nonatomic,strong) NSString *machineName;
@property (nonatomic,strong) NSString *OSVersion;
@property (nonatomic,strong) NSString *Apn;
@property (nonatomic,strong) NSString *OSSDK;
@property (nonatomic,strong) NSString *OSName;
@property (nonatomic,strong) NSString *DeviceName;
@property (nonatomic,strong) NSString *PreferredNetwork;
@property (nonatomic,strong) NSString *DeviceModel;
@property (nonatomic,strong) NSString *Manufacture;
@property (nonatomic,strong) NSString *VersionCode;
@property (nonatomic,strong) NSString *DeviceID;
@property (nonatomic,strong) NSString *ConnectionTypeName;
@property (nonatomic,strong) NSString *Imei;
@property (nonatomic,strong) NSString *WifiSSIDName;
@property (nonatomic,strong) NSString *SimSlot;
@property (nonatomic,strong) NSString *DataSimOperator;
@property (nonatomic,strong) NSString *DataSimMSISDN;
@property (nonatomic,strong) NSString *DataSimMNC;
@property (nonatomic,strong) NSString *MCC;
@property (nonatomic,strong) NSString *ConnectionTypeNameShort;

+ (DeviceInfo *_Nonnull)shared;

- (void)getApnWithDeviceToken:(NSData *)deviceToken;

@end

NS_ASSUME_NONNULL_END


