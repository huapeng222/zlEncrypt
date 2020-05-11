//
//  ZLViewController.m
//  zlEncrypt
//
//  Created by 化召鹏 on 05/11/2020.
//  Copyright (c) 2020 化召鹏. All rights reserved.
//

#import "ZLViewController.h"
#import <zlEncrypt/ZLEncrypt.h>

@interface ZLViewController ()

@end

@implementation ZLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    NSLog(@"加密:%@",[ZLEncrypt encryptAESData:@"123" app_key:@"123456"]);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
