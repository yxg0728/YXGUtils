//
//  UIView+YXGGestureBlock.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^YXGGestureRecognizerBlock)(UIView *view, UIGestureRecognizer *gesture);
typedef NS_ENUM(NSUInteger, YXGGestureType) {
    YXGGestureTypeTap,          // 点击
    YXGGestureTypeLongPress,    // 长按
    YXGGestureTypeSwipe,        // 轻扫
    YXGGestureTypePan,          // 移动
    YXGGestureTypeRotate,       // 旋转
    YXGGestureTypePinch,        // 缩放
};

@interface UIView (YXGGestureBlock)

- (UIGestureRecognizer *)yxg_AddGestureRecognizer:(YXGGestureType)type block:(YXGGestureRecognizerBlock)block;

/// 单击手势
- (UIGestureRecognizer *)yxg_AddTapGestureRecognizerBlock:(YXGGestureRecognizerBlock)block;

@end

NS_ASSUME_NONNULL_END
