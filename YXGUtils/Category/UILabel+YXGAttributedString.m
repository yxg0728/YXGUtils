//
//  UILabel+YXGAttributedString.m
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import "UILabel+YXGAttributedString.h"


@implementation UILabel (YXGAttributedString)

- (void)yxg_AttributedStringTextLineSpace:(CGFloat)space{
    NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc] initWithString:self.text];
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    [paragraphStyle setLineSpacing:space];//调整行间距
    [attributedString addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, [self.text length])];
    self.attributedText = attributedString;
    [self sizeToFit];
}

- (void)yxg_AttributedStringTextFont:(UIFont *)font Range:(NSRange)range{
    [self yxg_AttributedStringTextAttributes:@{NSFontAttributeName:font} Range:range];
}

- (void)yxg_AttributedStringTextColor:(UIColor *)color Range:(NSRange)range{
    [self yxg_AttributedStringTextAttributes:@{NSForegroundColorAttributeName:color} Range:range];
}

- (void)yxg_AttributedStringTextFont:(UIFont *)font TextColor:(UIColor *)color Range:(NSRange)range{
    [self yxg_AttributedStringTextAttributes:@{NSFontAttributeName:font,
                                              NSForegroundColorAttributeName:color,
                                              } Range:range];
}

- (void)yxg_AttributedStringTextAttributes:(NSDictionary *)attributes Range:(NSRange)range{
    NSMutableAttributedString *mutableAttributedString = [[NSMutableAttributedString alloc] initWithAttributedString:self.attributedText];
    for (NSString *name in attributes){
        [mutableAttributedString addAttribute:name value:[attributes objectForKey:name] range:range];
    }
    self.attributedText = mutableAttributedString;
}

- (void)yxg_AttributedStringTextFont:(UIFont *)font  Loc:(NSInteger)loc Len:(NSInteger)len{
    NSRange range = NSMakeRange(loc, len);
    [self yxg_AttributedStringTextAttributes:@{NSFontAttributeName:font} Range:range];
}

- (void)yxg_AttributedStringTextColor:(UIColor *)color  Loc:(NSInteger)loc Len:(NSInteger)len{
    NSRange range = NSMakeRange(loc, len);
    [self yxg_AttributedStringTextAttributes:@{NSForegroundColorAttributeName:color} Range:range];
}

- (void)yxg_AttributedStringTextFont:(UIFont *)font TextColor:(UIColor *)color Loc:(NSInteger)loc Len:(NSInteger)len{
    NSRange range = NSMakeRange(loc, len);
    [self yxg_AttributedStringTextAttributes:@{NSFontAttributeName:font,
                                              NSForegroundColorAttributeName:color,
                                              } Range:range];
}

- (void)yxg_AttributedStringTextAttributes:(NSDictionary *)attributes Loc:(NSInteger)loc Len:(NSInteger)len{
    NSRange range = NSMakeRange(loc, len);
    NSMutableAttributedString *mutableAttributedString = [[NSMutableAttributedString alloc] initWithAttributedString:self.attributedText];
    for (NSString *name in attributes){
        [mutableAttributedString addAttribute:name value:[attributes objectForKey:name] range:range];
    }
    self.attributedText = mutableAttributedString;
}

@end
