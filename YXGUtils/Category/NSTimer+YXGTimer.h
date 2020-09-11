//
//  NSTimer+YXGTimer.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^TimerCallback)(NSTimer *timer);

@interface NSTimer (YXGTimer)

/**
 定时事件，自定义是否重复

 @param interval 时间间隔
 @param repeats 是否重复
 @param callback 回调
 @return timer
 */
+ (NSTimer *)yxg_scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                       repeats:(BOOL)repeats
                                      callback:(TimerCallback)callback;

/**
 定时事件，自定义重复次数

 @param interval 时间间隔
 @param count 重复次数
 @param callback 回调
 @return timer
 */
+ (NSTimer *)yxg_scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                         count:(NSInteger)count
                                      callback:(TimerCallback)callback;

/** 暂停timer */
- (void)pauseTimer;

/** 开始timer */
- (void)resumeTimer;

/** 延迟开始timer */
- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval;

@end

NS_ASSUME_NONNULL_END
