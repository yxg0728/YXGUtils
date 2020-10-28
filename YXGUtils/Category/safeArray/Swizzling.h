//
//  Swizzling.h
//  YXGUtils
//
//  Created by zengmuqiang on 2020/9/11.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#ifndef Swizzling_h
#define Swizzling_h

#include <objc/runtime.h>

static inline void swizzling_exchangeMethod(Class srcClass, SEL originalSelector, SEL exchangeSelector) {

    Method originalMethod = class_getInstanceMethod(srcClass, originalSelector);
    Method exchangeMethod = class_getInstanceMethod(srcClass, exchangeSelector);
    if (!srcClass || !originalMethod || !exchangeMethod) return;
    
    BOOL addMethod = class_addMethod(srcClass, originalSelector, method_getImplementation(exchangeMethod), method_getTypeEncoding(exchangeMethod));
    if (addMethod) {
        class_replaceMethod(srcClass, exchangeSelector, method_getImplementation(originalMethod), method_getTypeEncoding(originalMethod));
    } else {
        method_exchangeImplementations(originalMethod, exchangeMethod);
    }
}

#endif /* Swizzling_h */
