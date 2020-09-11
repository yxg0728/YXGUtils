//
//  UIBarButtonItem+YXGBarButtonItem.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIBarButtonItem (YXGBarButtonItem)

/** 快速创建导航栏按钮 */
+(instancetype _Nullable )yxg_barButtonItemWithTitle:(NSString *_Nullable)title imageName:(NSString *_Nullable)imageName target:(nullable id)target action:(nonnull SEL)action fontSize:(CGFloat)fontSize titleNormalColor:(UIColor *_Nullable)normalColor titleHighlightedColor:(UIColor *_Nullable)highlightedColor;

/**
 *  快速创建一个 UIBarButtonItem
 *
 *  @param image     普通状态下的图片
 *  @param highImage 高亮状态下的图片
 *  @param title     名字
 *  @param target    目标
 *  @param action    操作
 */
+ (instancetype)yxg_ItemWithImage:(NSString *)image HighImage:(NSString *)highImage Title:(NSString *)title TitleColor:(UIColor *)titleColor Target:(id)target Action:(SEL)action;

+ (instancetype)leftItemWithImage:(NSString*)image higthImage:(NSString*)hightImage title:(NSString*)title target:(id)target action:(SEL)action;

@end

NS_ASSUME_NONNULL_END
