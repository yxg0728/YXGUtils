//
//  UIButton+TouchArea.m
//  test
//
//  Created by zengmuqiang on 2020/10/28.
//  Copyright © 2020 zengmuqiang. All rights reserved.
//

#import "UIButton+TouchArea.h"
#import <objc/runtime.h>

@implementation UIButton (TouchArea)

- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event {
    
    [super pointInside:point withEvent:event];
    //获取bounds
    CGRect bounds = self.bounds;
    if (self.areaScale) {
        CGFloat scale = fabs([self.areaScale doubleValue]);  // 此处取绝对值为扩大按钮热区,scale越大点击范围越大
        CGFloat widthDelta = MAX(scale * bounds.size.width - bounds.size.width, 0);
        CGFloat heightDelta = MAX(scale * bounds.size.height - bounds.size.height, 0);
        //扩大bounds
        bounds = CGRectInset(bounds, -0.5 * widthDelta, -0.5 * heightDelta);
    }
    return CGRectContainsPoint(bounds, point);
}

- (void)setAreaScale:(NSString *)areaScale {
    objc_setAssociatedObject(self, @selector(areaScale), areaScale, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSString *)areaScale {
    return objc_getAssociatedObject(self, @selector(areaScale));
}

@end
