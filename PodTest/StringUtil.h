//
//  StringUtil.h
//  PodTest
//
//  Created by liuyang04 on 2021/10/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StringUtil : NSObject

/// 转化成字符串
/// @param number 需要转换的数字
+ (NSString *)toString: (NSInteger)number;

@end

NS_ASSUME_NONNULL_END
