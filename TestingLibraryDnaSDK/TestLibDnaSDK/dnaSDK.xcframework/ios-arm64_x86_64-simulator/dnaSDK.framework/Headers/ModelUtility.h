//
//  Util.h
//  DataBaseDemo
//
//  Created by TheAppGuruz-New-6 on 22/02/14.
//  Copyright (c) 2014 TheAppGuruz-New-6. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ModelUtility: NSObject

+ (NSDictionary *)propertiesOfObject:(id)object;
+ (NSDictionary *)propertiesOfClass:(Class)class;
+ (NSDictionary *)propertiesOfSubclass:(Class)class;
+ (NSString *)getFilePath:(NSString *)fileName;
+ (void)copyFile:(NSString *)file;

@end
