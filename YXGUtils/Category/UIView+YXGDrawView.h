//
//  UIView+YXGDrawView.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (YXGDrawView)

/// 画直线
- (void)yxg_DrawLineWithPoint:(CGPoint)fPoint
                      toPoint:(CGPoint)tPoint
                    lineColor:(UIColor *)color
                    lineWidth:(CGFloat)width;

/// 画虚线
- (void)yxg_DrawDashLineWithPoint:(CGPoint)fPoint
                          toPoint:(CGPoint)tPoint
                        lineColor:(UIColor *)color
                        lineWidth:(CGFloat)width
                        lineSpace:(CGFloat)space
                         lineType:(NSInteger)type;

/// 画五角星
- (void)yxg_DrawPentagramWithCenter:(CGPoint)center
                        radius:(CGFloat)radius
                         color:(UIColor *)color
                          rate:(CGFloat)rate;

// 根据宽高画六边形
- (void)yxg_DrawSexangleWithWidth:(CGFloat)width
                    LineWidth:(CGFloat)lineWidth
                  StrokeColor:(UIColor *)color
                    FillColor:(UIColor *)fcolor;

// 根据宽高画八边形   px:放大px点个坐标  py:放大py点个坐标
- (void)yxg_DrawOctagonWithWidth:(CGFloat)width
                      Height:(CGFloat)height
                   LineWidth:(CGFloat)lineWidth
                 StrokeColor:(UIColor *)color
                   FillColor:(UIColor *)fcolor
                          Px:(CGFloat)px
                          Py:(CGFloat)py;

@end

NS_ASSUME_NONNULL_END
