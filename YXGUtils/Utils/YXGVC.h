//
//  YXGVC.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXGVC : UIViewController

/** 更改iOS状态栏的颜色 */
+ (void)yxg_setStatusBarBackgroundColor:(UIColor *)color;

/** 为控制器添加背景图片 */
+ (void)yxg_addBackgroundImageWithImageName:(NSString *)imageName forViewController:(UIViewController *)viewController;

/** 获取数组中的最大值 */
+ (CGFloat) yxg_maxNumberFromArray:(NSArray *)array;

/** 获取数组中的最小值 */
+ (CGFloat) yxg_minNumberFromArray:(NSArray *)array;

/** 获取数组的和 */
+ (CGFloat) yxg_sumNumberFromArray:(NSArray *)array;

/** 获取数组平均值 */
+ (CGFloat) yxg_averageNumberFromArray:(NSArray *)array;

/** 可用硬件容量 */
+ (CGFloat) yxg_usableHardDriveCapacity;

/** 硬件总容量 */
+ (CGFloat) yxg_allHardDriveCapacity;

@end

NS_ASSUME_NONNULL_END
