//
//  ViewController.m
//  YXGUtils
//
//  Created by zengmuqiang on 2020/8/9.
//  Copyright © 2020 ZMQ. All rights reserved.
//

#import "ViewController.h"
#import "YXGUtils.h"
#import "ManagerTool.h"

@interface ViewController ()

@end

static ManagerTool *_instance;

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    if (kIs_iPhoneX) {
        
    }
    
    [[ManagerTool shareManagerTool] eat];
    NSLog(@"当前系统版本为：%@",kSystemVersion);
}


@end
