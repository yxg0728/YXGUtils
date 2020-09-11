//
//  UIColor+YXGColor.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (YXGColor)

/** 16进制数字创建颜色 */
+ (instancetype)yxg_colorWithHex:(uint32_t)hex;

/** 随机色 */
+ (instancetype)yxg_randomColor;

/** RGB颜色 */
+ (instancetype)yxg_colorWithRed:(uint8_t)red green:(uint8_t)green blue:(uint8_t)blue;

/**
 十六进制字符串显示颜色
 
 @param color 十六进制字符串
 @param alpha 透明度
 @return 颜色
 */
+ (UIColor *)yxg_colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

/**
 *  @brief  渐变颜色
 *
 *  @param fromColor  开始颜色
 *  @param toColor    结束颜色
 *  @param height     渐变高度
 *
 *  @return 渐变颜色
 */
+ (UIColor*)yxg_gradientFromColor:(UIColor*)fromColor toColor:(UIColor*)toColor withHeight:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
