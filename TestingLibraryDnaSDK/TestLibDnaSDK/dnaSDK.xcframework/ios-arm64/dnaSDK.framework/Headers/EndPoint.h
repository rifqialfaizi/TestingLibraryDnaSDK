//
//  EndPoint.h
//  dna
//
//  Created by Kuncoro Galih Gemilang on 28/08/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HTTPMethod) {
	connect = 1,
	delete = 2,
	get = 3,
	head = 4,
	options = 5,
	patch = 6,
	post = 7,
	put = 8,
	query = 9,
	trace = 10
};

NS_ASSUME_NONNULL_BEGIN

@interface EndPoint: NSObject

@property (strong, nonatomic, nonnull) NSURL *url;
@property (strong, nonatomic, nonnull) NSString *method;
@property (strong, nonatomic, nullable) NSDictionary *headers;
@property (strong, nonatomic, nullable) NSDictionary *parameters;

- (instancetype)initWithUrl:(NSURL *)url
				  andMethod:(HTTPMethod)method
				 andHeaders:(NSDictionary *_Nullable)headers
			  andParameters:(NSDictionary *_Nullable)parameters;

@end

NS_ASSUME_NONNULL_END
