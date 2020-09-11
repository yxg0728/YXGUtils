//
//  UIViewController+YXGViewController.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (YXGViewController)

/** 找到当前视图控制器 */
+ (UIViewController *)yxg_currentViewController;

/** 找到当前导航控制器 */
+ (UINavigationController *)yxg_currentNavigatonController;

/** 在当前视图控制器中添加子控制器，将子控制器的视图添加到view中 */
- (void)yxg_addChildController:(UIViewController *)childController intoView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
