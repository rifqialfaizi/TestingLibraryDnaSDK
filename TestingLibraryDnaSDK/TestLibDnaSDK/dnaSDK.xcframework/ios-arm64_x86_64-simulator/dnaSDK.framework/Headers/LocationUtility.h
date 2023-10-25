//
//  LocationUtility.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 09/10/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LocationUtility: NSObject 

- (void)getLocation:(void (^_Nullable)(NSDictionary *))completionHandler;

@end

NS_ASSUME_NONNULL_END
