//
//  ViewController.m
//  frameworkTest
//
//  Created by admin on 16/10/8.
//  Copyright © 2016年 com.WL. All rights reserved.
//

#import "ViewController.h"
#import "VKSafariDomainBridge.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    [VKSafariDomainBridge VKSetupSafariBridge];
    [[VKSafariDomainBridge VKSingleton]VKGetSafariInfo:^(BOOL success, NSString *info) {
        NSLog(@"%@ status = %@",info,@(success));
    }];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
