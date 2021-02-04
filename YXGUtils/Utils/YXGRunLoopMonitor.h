//
//  YXGRunLoopMonitor.h
//  YXGUtils
//
//  Created by zengmuqiang on 2021/2/4.
//  Copyright © 2021 ZMQ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
// 监测卡顿
@interface YXGRunLoopMonitor : NSObject

+ (instancetype)sharedMonitor;

- (void)beginMointor;

@end

NS_ASSUME_NONNULL_END
