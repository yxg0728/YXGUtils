//
//  NSNumber+YXGNumber.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSNumber (YXGNumber)

/** 对应的罗马数字 */
- (NSString *)romanNumeral;

/** 转换为百分比字符串 */
- (NSString*)toDisplayPercentageWithDigit:(NSInteger)digit;

/**
 四舍五入

 @param digit 限制最大位数
 @return 四舍五入后的结果
 */
- (NSNumber*)doRoundWithDigit:(NSUInteger)digit;

/**
 上取整

 @param digit 限制最大位数
 @return 上取整后的结果
 */
- (NSNumber*)doCeilWithDigit:(NSUInteger)digit;

/**
 下取整

 @param digit 限制最大位数
 @return 下取整后的结果
 */
- (NSNumber*)doFloorWithDigit:(NSUInteger)digit;

- (NSString*)toDisplayNumberWithDigit:(NSInteger)digit;

@end

NS_ASSUME_NONNULL_END
