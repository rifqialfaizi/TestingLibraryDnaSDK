//
//  EQTicketUserStorage.h
//  EQualOne
//
//  Created by David Rodrigues on 23/10/2020.
//  Copyright © 2020 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <EQCoreLib/EQTicketUser.h>

NS_ASSUME_NONNULL_BEGIN

@interface EQTicketUserStorage : NSObject

- (void)saveTicketUser:(EQTicketUser * _Nonnull)ticketUser;
- (EQTicketUser * _Nullable)ticketUser;

@end

NS_ASSUME_NONNULL_END
