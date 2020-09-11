//
//  NSDictionary+YXGDictionary.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (YXGDictionary)

/** 一般模型属性 */
-(void)yxg_createProperty;

/** 网络模型属性 */
-(void)yxg_createNetProperty;

/** 合并两个NSDictionary */
+ (NSDictionary *)dictionaryByMerging:(NSDictionary *)dict1 with:(NSDictionary *)dict2;

/** 并入一个NSDictionary */
- (NSDictionary *)dictionaryByMergingWith:(NSDictionary *)dict;

/** 拼接字典 */
- (NSDictionary *)dictionaryByAddingEntriesFromDictionary:(NSDictionary *)dictionary;

/** 删除某些key值 */
- (NSDictionary *)dictionaryByRemovingEntriesWithKeys:(NSSet *)keys;

@end

NS_ASSUME_NONNULL_END
