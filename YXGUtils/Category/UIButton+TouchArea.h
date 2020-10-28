//
//  UIButton+TouchArea.h
//  test
//
//  Created by zengmuqiang on 2020/10/28.
//  Copyright © 2020 zengmuqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (TouchArea)

/// 扩大按钮热区的比例系数
@property (nonatomic, copy) NSString *areaScale;

@end

NS_ASSUME_NONNULL_END
