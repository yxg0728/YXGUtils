//
//  UIButton+YXGButton.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^TouchedButtonBlock)(void);

@interface UIButton (YXGButton)

/** 快速创建按钮 */
+(instancetype)yxg_buttonWithTitle:(NSString *)title backColor:(UIColor *)backColor backImageName:(NSString *)backImageName titleColor:(UIColor *)color fontSize:(int)fontSize frame:(CGRect)frame cornerRadius:(CGFloat)cornerRadius;

/**
 多久之后开始执行

 @param timeout 多少秒
 @param waitBlock 倒计时
 @param finishBlock 倒计时结束时回调
 */
- (void)startTime:(NSInteger)timeout waitBlock:(void(^)(NSInteger remainTime))waitBlock finishBlock:(void(^)(void))finishBlock;

/** 触发按钮点击事件 */
- (void)yxg_addActionHandler:(TouchedButtonBlock)touchHandler;

/** 显示菊花 */
- (void)yxg_showIndicator;

/** 隐藏菊花 */
- (void)yxg_hideIndicator;

/** 改变按钮的响应区域,上左下右分别增加或减小多少 正数为增加 负数为减小 */
@property (nonatomic, assign) UIEdgeInsets clickEdgeInsets;

/** 角标 */
@property (strong, nonatomic) UILabel *badge;

/** 角标的值 */
@property (nonatomic) NSString *badgeValue;

/** 角标背景颜色 */
@property (nonatomic) UIColor *badgeBGColor;

/** 角标文字颜色 */
@property (nonatomic) UIColor *badgeTextColor;

/** 角标文字的字体 */
@property (nonatomic) UIFont *badgeFont;

/** 角标边距 */
@property (nonatomic) CGFloat badgePadding;

/** 角标最小的大小 */
@property (nonatomic) CGFloat badgeMinSize;

/** 角标x坐标 */
@property (nonatomic) CGFloat badgeOriginX;

/** 角标y坐标 */
@property (nonatomic) CGFloat badgeOriginY;

/** 如果是数字0的话就隐藏角标不显示 */
@property BOOL shouldHideBadgeAtZero;

/** 显示角标是否要缩放动画 */
@property BOOL shouldAnimateBadge;

@end

NS_ASSUME_NONNULL_END
