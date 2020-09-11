//
//  UIView+YXGRectCorner.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (YXGRectCorner)

/** 圆角半径 默认 5 */
@property(nonatomic,assign)CGFloat yxg_Radius;
/** 圆角方位 */
@property(nonatomic,assign)UIRectCorner yxg_RectCorner;

/**
 返回渐变layer
 @ param colors     渐变的颜色
 @ param locations  渐变颜色的分割点
 @ param startPoint 渐变颜色的方向起点,范围在（0,0）与（1,1）之间,如(0,0)(1,0)代表水平方向渐变,(0,0)(0,1)代表竖直方向渐变
 @ param endPoint   渐变颜色的方向终点
 */
- (CAGradientLayer *)yxg_GradientLayerWithColors:(NSArray *)colors Frame:(CGRect)frm Locations:(NSArray *)locations StartPoint:(CGPoint)startPoint EndPoint:(CGPoint)endPoint;

/**
 生成渐变背景色
 @ param colors     渐变的颜色
 @ param locations  渐变颜色的分割点
 @ param startPoint 渐变颜色的方向起点,范围在（0，0）与（1,1）之间,如(0,0)(1,0)代表水平方向渐变,(0,0)(0,1)代表竖直方向渐变
 @ param endPoint   渐变颜色的方向终点
 */
- (void)yxg_GradientBgColorWithColors:(NSArray *)colors Locations:(NSArray *)locations StartPoint:(CGPoint)startPoint EndPoint:(CGPoint)endPoint;

/**
 设置某一条边的边框
 @param top    顶部
 @param left   左侧
 @param bottom 底部
 @param right  右侧
 @param color  边框颜色
 @param width  边框宽度
 */
- (void)yxg_BorderTop:(BOOL)top Left:(BOOL)left Bottom:(BOOL)bottom Right:(BOOL)right BorderColor:(UIColor *)color BorderWidth:(CGFloat)width;

/** 虚线边框
 @param lineColor 线条颜色
 @param lineWidth 线宽
 @param spaceAry  线条之间间隔数组
 */
- (void)yxg_DashedLineColor:(UIColor *)lineColor lineWidth:(CGFloat)lineWidth spaceAry:(NSArray<NSNumber *> *)spaceAry;

@end

NS_ASSUME_NONNULL_END
