//
//  NSArray+Safe.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/9/11.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Safe)

/**
 取出NSArray 第index个 值 对应 __NSArray0
 
 @param index 索引 index
 @return 返回值
 */
- (id)emptyArray_objectAtIndex:(NSUInteger)index;

/**
 取出NSArray 第index个 值 对应 __NSSingleObjectArrayI
 
 @param index 索引 index
 @return 返回值
 */
- (id)singleObjectArrayI_objectAtIndex:(NSUInteger)index;

/**
 取出NSArray 第index个 值 对应 __NSArrayI
 
 @param index 索引 index
 @return 返回值
 */
- (id)arrayI_objectAtIndex:(NSUInteger)index;

/**
 取出NSArray 第index个 值 对应 __NSArrayM
 
 @param index 索引 index
 @return 返回值
 */
- (id)arrayM_objectAtIndex:(NSUInteger)index;

- (id)emptyArray_objectAtIndexedSubscript:(NSUInteger)index;

- (id)arrayI_objectAtIndexedSubscript:(NSUInteger)index;

- (id)arrayM_objectAtIndexedSubscript:(NSUInteger)index;

- (id)singleObjectArrayI_objectAtIndexedSubscript:(NSUInteger)index;

@end

NS_ASSUME_NONNULL_END
