//
//  UIButton+YXGButtonLayout.m
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import "UIButton+YXGButtonLayout.h"
#import <objc/runtime.h>

static NSString * const kButtonContentLayoutTypeKey = @"yxg_buttonContentLayoutTypeKey";
static NSString * const kPaddingKey = @"yxg_paddingKey";
static NSString * const kPaddingInsetKey = @"yxg_paddingInsetKey";

@implementation UIButton (YXGButtonLayout)

- (void)setupButtonLayout{
    self.imageView.contentMode = UIViewContentModeScaleAspectFit;
    
    CGFloat image_w = self.imageView.frame.size.width;
    CGFloat image_h = self.imageView.frame.size.height;
    
    CGFloat title_w = self.titleLabel.frame.size.width;
    CGFloat title_h = self.titleLabel.frame.size.height;
    
    if ([UIDevice currentDevice].systemVersion.floatValue >= 8.0){
        // 由于iOS8中titleLabel的size为0，用下面的这种设置
        title_w = self.titleLabel.intrinsicContentSize.width;
        title_h = self.titleLabel.intrinsicContentSize.height;
    }
    
    UIEdgeInsets imageEdge = UIEdgeInsetsZero;
    UIEdgeInsets titleEdge = UIEdgeInsetsZero;
    
    if (self.yxg_PaddingInset == 0){
        self.yxg_PaddingInset = 5;
    }
    
    switch (self.yxg_ButtonLayoutType) {
        case YXGButtonLayoutStyleNormal:{
            titleEdge = UIEdgeInsetsMake(0, self.yxg_Padding, 0, 0);
            imageEdge = UIEdgeInsetsMake(0, 0, 0, self.yxg_Padding);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
        }
            break;
        case YXGButtonLayoutStyleCenterImageRight:{
            titleEdge = UIEdgeInsetsMake(0, -image_w - self.yxg_Padding, 0, image_w);
            imageEdge = UIEdgeInsetsMake(0, title_w + self.yxg_Padding, 0, -title_w);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
        }
            break;
        case YXGButtonLayoutStyleCenterImageTop:{
            titleEdge = UIEdgeInsetsMake(0, -image_w, -image_h - self.yxg_Padding, 0);
            imageEdge = UIEdgeInsetsMake(-title_h - self.yxg_Padding, 0, 0, -title_w);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
        }
            break;
        case YXGButtonLayoutStyleCenterImageBottom:{
            titleEdge = UIEdgeInsetsMake(-image_h - self.yxg_Padding, -image_w, 0, 0);
            imageEdge = UIEdgeInsetsMake(0, 0, -title_h - self.yxg_Padding, -title_w);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
        }
            break;
        case YXGButtonLayoutStyleLeftImageLeft:{
            titleEdge = UIEdgeInsetsMake(0, self.yxg_Padding + self.yxg_PaddingInset, 0, 0);
            imageEdge = UIEdgeInsetsMake(0, self.yxg_PaddingInset, 0, 0);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
        }
            break;
        case YXGButtonLayoutStyleLeftImageRight:{
            titleEdge = UIEdgeInsetsMake(0, -image_w + self.yxg_PaddingInset, 0, 0);
            imageEdge = UIEdgeInsetsMake(0, title_w + self.yxg_Padding + self.yxg_PaddingInset, 0, 0);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
        }
            break;
        case YXGButtonLayoutStyleRightImageLeft:{
            imageEdge = UIEdgeInsetsMake(0, 0, 0, self.yxg_Padding + self.yxg_PaddingInset);
            titleEdge = UIEdgeInsetsMake(0, 0, 0, self.yxg_PaddingInset);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentRight;
        }
            break;
        case YXGButtonLayoutStyleRightImageRight:{
            titleEdge = UIEdgeInsetsMake(0, -self.frame.size.width / 2, 0, image_w + self.yxg_Padding + self.yxg_PaddingInset);
            imageEdge = UIEdgeInsetsMake(0, 0, 0, -title_w + self.yxg_PaddingInset);
            self.contentHorizontalAlignment = UIControlContentHorizontalAlignmentRight;
        }
            break;
        default:break;
    }
    self.imageEdgeInsets = imageEdge;
    self.titleEdgeInsets = titleEdge;
    [self setNeedsDisplay];
}


#pragma mark - SET
- (void)setYxg_ButtonLayoutType:(YXGButtonLayoutStyle)yxg_buttonLayoutType{
    [self willChangeValueForKey:kButtonContentLayoutTypeKey];
    objc_setAssociatedObject(self, &kButtonContentLayoutTypeKey, @(yxg_buttonLayoutType), OBJC_ASSOCIATION_ASSIGN);
    [self didChangeValueForKey:kButtonContentLayoutTypeKey];
    [self setupButtonLayout];
}

- (YXGButtonLayoutStyle)yxg_ButtonLayoutType{
    return [objc_getAssociatedObject(self, &kButtonContentLayoutTypeKey) integerValue];
}

- (void)setYxg_Padding:(CGFloat)yxg_padding{
    [self willChangeValueForKey:kPaddingKey];
    objc_setAssociatedObject(self, &kPaddingKey, @(yxg_padding), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [self didChangeValueForKey:kPaddingKey];

    [self setupButtonLayout];
}

- (CGFloat)yxg_Padding{
    return [objc_getAssociatedObject(self, &kPaddingKey) floatValue];
}

- (void)setYxg_PaddingInset:(CGFloat)yxg_paddingInset{
    [self willChangeValueForKey:kPaddingInsetKey];
    objc_setAssociatedObject(self, &kPaddingInsetKey, @(yxg_paddingInset), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [self didChangeValueForKey:kPaddingInsetKey];
    [self setupButtonLayout];
}

- (CGFloat)yxg_PaddingInset{
    return [objc_getAssociatedObject(self, &kPaddingInsetKey) floatValue];
}

@end
