//
//  FBLPromise+Extension.h
//  KRelease
//
//


#if __has_include(<FBLPromises/FBLPromises.h>)
#import <FBLPromises/FBLPromises.h>
#else
#import "FBLPromises.h"
#endif

@interface FBLPromise (Extension)

@property(nonatomic, readonly) NSHTTPURLResponse *HTTPResponse;
@property(nonatomic, readonly) NSData *HTTPBody;

- (instancetype)initWithResponse:(NSHTTPURLResponse *)response HTTPBody:(NSData *)body;

@end

