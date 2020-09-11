//
//  UIView+YXGView.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^TapActionBlock)(UITapGestureRecognizer *gestureRecoginzer);
typedef void (^LongPressActionBlock)(UILongPressGestureRecognizer *gestureRecoginzer);

@interface UIView (YXGView)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;

/** 截取成图片 */
- (UIImage *)yxg_snapshotImage;

/** 触发点击事件 */
- (void)yxg_addTapActionWithBlock:(TapActionBlock)block;

/** 触发长按事件 */
- (void)yxg_addLongPressActionWithBlock:(LongPressActionBlock)block;

/** 找到指定类名的subView */
- (UIView *)yxg_findSubViewWithClass:(Class)clazz;

/** 找到指定类名的所有subView */
- (NSArray *)yxg_findAllSubViewsWithClass:(Class)clazz;

/** 找到指定类名的superView对象 */
- (UIView *)yxg_findSuperViewWithClass:(Class)clazz;

/** 找到view上的第一响应者 */
- (UIView *)yxg_findFirstResponder;

/** 找到当前view所在的viewcontroler */
- (UIViewController *)yxg_findViewController;

/** 所有子View */
- (NSArray *)yxg_allSubviews;

/** 移除所有子视图 */
- (void)yxg_removeAllSubviews;

@property (assign,nonatomic) IBInspectable NSInteger cornerRadius;
@property (assign,nonatomic) IBInspectable BOOL masksToBounds;
@property (assign,nonatomic) IBInspectable NSInteger borderWidth;
@property (strong,nonatomic) IBInspectable NSString  *borderHexRgb;
@property (strong,nonatomic) IBInspectable UIColor   *borderColor;

+ (instancetype)yxg_loadViewFromNib;
+ (instancetype)yxg_loadViewFromNibWithName:(NSString *)nibName;
+ (instancetype)yxg_loadViewFromNibWithName:(NSString *)nibName owner:(id)owner;
+ (instancetype)yxg_loadViewFromNibWithName:(NSString *)nibName owner:(id)owner bundle:(NSBundle *)bundle;

@end

NS_ASSUME_NONNULL_END
