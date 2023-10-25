//
//  Category.h
//  dna
//
//  Created by Muhamad Alfy on 20/07/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Category : NSObject

@property (nonatomic) NSInteger _idCat;
@property (nonatomic, strong) NSString *category;
@property (nonatomic, strong) NSString *label;

@end

NS_ASSUME_NONNULL_END
