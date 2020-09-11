//
//  UIButton+YXGButtonLayout.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

//MARK: 图文混排
NS_ASSUME_NONNULL_BEGIN

/* Button 图文样式 */
typedef NS_ENUM(NSInteger, YXGButtonLayoutStyle) {
    YXGButtonLayoutStyleNormal = 0,       // 内容居中-图左文右
    YXGButtonLayoutStyleCenterImageRight, // 内容居中-图右文左
    YXGButtonLayoutStyleCenterImageTop,   // 内容居中-图上文下
    YXGButtonLayoutStyleCenterImageBottom,// 内容居中-图下文上
    YXGButtonLayoutStyleLeftImageLeft,    // 内容居左-图左文右
    YXGButtonLayoutStyleLeftImageRight,   // 内容居左-图右文左
    YXGButtonLayoutStyleRightImageLeft,   // 内容居右-图左文右
    YXGButtonLayoutStyleRightImageRight,  // 内容居右-图右文左
};

@interface UIButton (YXGButtonLayout)

/* Button 图文样式 */
@property (nonatomic, assign) YXGButtonLayoutStyle yxg_ButtonLayoutType;;
/* 图文间距, 默认为0 */
@property(nonatomic,assign) CGFloat yxg_Padding;
/* 图文边界的间距, 默认为5 */
@property(nonatomic,assign) CGFloat yxg_PaddingInset;

@end

NS_ASSUME_NONNULL_END
