//
//  JDAPI.h
//  MetroInterfaceDemo
//
//  Created by xiaoyi li on 16/8/25.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

/**
 使用方法：

 1、设置api_name
 2、调用 init方法创建管理器
 3、调用方通过字典的方式列出应用级的参数
 4、调用allParamStr:interface:接口返回所有请求的字符串
 */

#import <Foundation/Foundation.h>

@interface JDAPI : NSObject

@property (nonatomic, strong)   NSString *api_name;

/**
 获取系统级别参数

 @param apiName api的名称
 @param token   是否传token

 @return 系统参数字典
 */

- (NSDictionary *)getSystemParams:(NSString *)apiName withToken:(BOOL)token;


/**
 生成签名

 @param dic 待签名的字典，包含了系统参数和应用参数

 @return 签名后的字符串
 */

- (NSString *) getSign:(NSMutableDictionary *)dic;


/**
 SHA256加密
 
 @param plainText 待加密的字符串
 
 @return 加密后的字符串
 */
- (NSString *)SHA256Encryt:(NSString *)plainText;

/**
 将最终的参数字典拆分成字符串

 @param dit 参数字典

 @return 请求的字符串参数 用 key=value,key=value... 形式出现
 */

- (NSString *)stringPairsFromDictionary:(NSDictionary *)dit;

/**
 参数排序

 @param dic 待排序的字典

 @return 排序后的字符串
 */
- (NSString *) stringOrder:(NSMutableDictionary *)dic;

@end
