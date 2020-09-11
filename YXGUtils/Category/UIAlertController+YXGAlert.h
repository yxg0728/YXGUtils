//
//  UIAlertController+YXGAlert.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, OptionStyle) {
    OptionStyleStyleOK_Cancel = 0,
    OptionStyleStyleOnlyOK
};

@interface UIAlertController (YXGAlert)

/**
 中间弹窗

 @param title 标题
 @param message 消息
 @param optionStyle 弹窗选项样式，两个选择或只有一个
 @param okTitle 右边选项的文字
 @param cancelTitle 左边选项的文字
 @param okBlock 右边选择选中后执行的代码
 @param cancelBlock 左边选项选中后执行的代码
 @return UIAlertController
 */
+ (UIAlertController *)yxg_alertControllerWithTitle:(NSString *)title message:(NSString *)message optionStyle:(OptionStyle)optionStyle OkTitle:(NSString *)okTitle cancelTitle:(NSString *)cancelTitle okBlock:(dispatch_block_t)okBlock cancelBlock:(dispatch_block_t)cancelBlock;


/**
 从下面出现的弹窗
 
 @param title 标题
 @param message 消息
 @param optionStyle 弹窗选项样式，两个选择或只有一个
 @param okTitle 上面选项的文字
 @param cancelTitle 下面选项的文字
 @param okBlock 上面选择选中后执行的代码
 @param cancelBlock 下面选项选中后执行的代码
 @return UIAlertController
 */
+ (UIAlertController *)yxg_sheetAlertControllerWithTitle:(NSString *)title message:(NSString *)message optionStyle:(OptionStyle)optionStyle OkTitle:(NSString *)okTitle cancelTitle:(NSString *)cancelTitle okBlock:(dispatch_block_t)okBlock cancelBlock:(dispatch_block_t)cancelBlock;

@end

NS_ASSUME_NONNULL_END
