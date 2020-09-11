//
//  UIView+YXGGestureBlock.m
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import "UIView+YXGGestureBlock.h"

#import <objc/runtime.h>

static const char *YXGGestureBlockKey;

@implementation UIView (YXGGestureBlock)

- (UIGestureRecognizer *)yxg_AddGestureRecognizer:(YXGGestureType)type block:(YXGGestureRecognizerBlock)block{
    self.userInteractionEnabled = YES; /// 开启可交互
    if (block) {
        NSDictionary *dic = @{@"0":@"UITapGestureRecognizer",
                              @"1":@"UILongPressGestureRecognizer",
                              @"2":@"UISwipeGestureRecognizer",
                              @"3":@"UIPanGestureRecognizer",
                              @"4":@"UIRotationGestureRecognizer",
                              @"5":@"UIPinchGestureRecognizer"};
        NSString *string = dic[@(type).stringValue];
        UIGestureRecognizer *gesture = [[NSClassFromString(string) alloc] initWithTarget:self action:@selector(gestureAction:)];
        [self addGestureRecognizer:gesture];
        NSMutableDictionary *blockDic = objc_getAssociatedObject(self, YXGGestureBlockKey);
        if (!blockDic) {
            blockDic = @{}.mutableCopy;
            objc_setAssociatedObject(self, YXGGestureBlockKey, blockDic, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        [blockDic setObject:block forKey:string];
        return gesture;
    }
    return nil;
}

- (void)gestureAction:(UIGestureRecognizer *)gesture{
    NSMutableDictionary *blockDic = objc_getAssociatedObject(gesture.view, YXGGestureBlockKey);
    YXGGestureRecognizerBlock block = blockDic[NSStringFromClass([gesture class])];
    !block?:block(gesture.view, gesture);
}

/// 单击手势
- (UIGestureRecognizer *)yxg_AddTapGestureRecognizerBlock:(YXGGestureRecognizerBlock)block{
    return [self yxg_AddGestureRecognizer:YXGGestureTypeTap block:^(UIView * _Nonnull view, UIGestureRecognizer * _Nonnull gesture) {
        !block?:block(view,gesture);
    }];
}

@end
