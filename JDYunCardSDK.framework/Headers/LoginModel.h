//
//  LoginModel.h
//  JDMobileWallet
//
//  Created by xiaoyi li on 16/12/26.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LoginModel : NSObject
@property (nonatomic,strong) NSString  *customerId;
@property (nonatomic,strong) NSString  *resp_code;
@property (nonatomic,strong) NSString  *resp_msg;

- (NSString *)description;

@end
