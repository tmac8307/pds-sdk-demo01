//
//  ViewController.m
//  demo01
//
//  Created by xiaoyi li on 2017/9/30.
//  Copyright © 2017年 xiaoyi li. All rights reserved.
//

#import "ViewController.h"
#import <JDYunCardSDK/JDYunCardSDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
}
- (IBAction)btn01Click:(id)sender {
    DriveCodeMain *driveMain = [[DriveCodeMain alloc] init];
    driveMain.telNo = @"15692021559";
    [self.navigationController pushViewController:driveMain animated:YES];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
