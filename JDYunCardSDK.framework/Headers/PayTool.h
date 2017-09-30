//
//  PayTool.h
//  JDMobileWallet
//
//  Created by xiaoyi li on 17/6/22.
//  Copyright © 2017年 xiaoyi li. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^SuccessBlock)(id responseObj);

typedef void(^FailureBlock)(NSError *error);


@interface PayTool : NSObject



/**
 显示成功

 @param inView 显示所在的view
 @param msg    成功的消息
 */
+ (void)showSuccessInView:(UIView *)inView
                          withMsg:(NSString *)msg;

/**
 显示失败

 @param inView 显示所在的view
 @param msg    失败的消息
 */
+ (void)showFailureInView:(UIView *)inView message:(NSString *)msg;


@end
