//
//  StringUtil.m
//  PodTest
//
//  Created by liuyang04 on 2021/10/8.
//

#import "StringUtil.h"

@implementation StringUtil

+ (NSString *)toString: (NSInteger)number {
    NSLog(@"需要转换的数字：%ld", (long)number);
    return [NSString stringWithFormat:@"%ld", (long)number];
}

@end
