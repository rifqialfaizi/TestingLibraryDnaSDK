//
//  DNAConfig.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 26/08/22.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQCoreLib.h>

NS_ASSUME_NONNULL_BEGIN

@interface DNAManager: NSObject <EQUpdateConfigDelegate>

@property (nonatomic, strong, nullable) id<EQAgentInformationManager> agentInformationManager;
@property (nonatomic, strong, nullable) id<EQBackgroundManager> backgroundManager;

- (void)initManager;
- (void)retrieveDqaId:(void (^)(NSString * _Nullable dqaId))completionHandler;
- (NSString *)getDqaId;
- (NSString *)getAgentVersion;
- (void)updateConfig;

@end

NS_ASSUME_NONNULL_END
