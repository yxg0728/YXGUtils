//
//  UILabel+YXGLabel.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (YXGLabel)

/** 快速创建Label */
+(instancetype)yxg_labelWithText:(NSString *)text textFont:(int)font textColor:(UIColor *)color frame:(CGRect)frame;

/** 设置字间距 */
- (void)setColumnSpace:(CGFloat)columnSpace;

/** 设置行距 */
- (void)setRowSpace:(CGFloat)rowSpace;

@end

NS_ASSUME_NONNULL_END
