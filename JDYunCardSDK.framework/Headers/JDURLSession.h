//
//  JDURLSession.h
//  JDYunCardSDK
//
//  Created by xiaoyi li on 16/9/22.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

/**
 *  核心数据请求的接口类，供第三方客户调用
 *  这个类不包含任何第三方网络请求库
 *  用户可以放心使用，不会跟自己项目的第三方库冲突
 */

#import <Foundation/Foundation.h>
#import "JDAPI.h"
#import "JDCommonConstant.h"
#import "APIConstant.h"
#import "Base64.h"
#import "zipAndUnzip.h"

// 云卡用户注册回调
typedef void(^JDYunCardSDKRegisterBlock)(NSDictionary *dic);

// 云卡开卡申请回调
typedef void(^JDYunCardSDKOpenAccountBlock)(NSDictionary *dic);

// 云卡信息下载回调
typedef void(^JDYunCardSDKDownloadBlock)(NSDictionary *dic);

// 云卡信息列表查询回调
typedef void(^JDYunCardSDKQueryListBlock)(NSDictionary *dic);

// 查询云卡详情回调
typedef void(^JDYunCardSDKQueryInfoBlock)(NSDictionary *dic);

// 云卡注销回调
typedef void(^JDYunCardWrittenOffBlock)(NSDictionary *dic);

// 云卡充值回调
typedef void(^JDYunCardRechargeBlock)(NSDictionary *dic);

// 云卡交易扣费
typedef void(^JDYunCardTransConsumeBlock)(NSDictionary *dic);

// 消费记录查询回调
typedef void(^JDYunCardTransRecordBlock)(NSDictionary *dic);


// CA证书下发回调
typedef void(^JDYunCardSDKCADownloadBlock)(NSDictionary *dic);

// 后台图片获取回调
typedef void(^JDYunCardSDKPicDownloadBlock)(NSDictionary *dic);

// 云卡产品列表下载回调
typedef void(^JDYunCardSDKTypeDownloadBlock)(NSDictionary *dic);

/**
 获取云码信息

 @param dic 回调的云码信息字典
 */
typedef void(^JDYunCardSDKQRCodeDataBlock)(NSDictionary *dic);


/**
 云码生成

 @param terTimeStampe 回调云码字符串
 */
typedef void(^JDYunCardSDKQRCodeStrBlock)(NSString *terTimeStampe);




@interface JDURLSession : NSObject<NSURLSessionDelegate>

/**
 单例

 @return 返回网络请求单例
 */

+ (JDURLSession *)Manager;

/*************************************************云卡账户类接口*************************************************/
#pragma mark -- 云卡用户注册

/**
 云卡用户注册

 @param userParams    用户级别的参数
 @param registerBlock 云卡用户注册后的回调
 */

- (void)YunCardUserRegister:(NSDictionary *)userParams registerBlock:(JDYunCardSDKRegisterBlock)registerBlock;

#pragma mark -- 云卡开卡申请

/**
 云卡开卡申请

 @param userParams    用户级别的参数
 @param openAccountBlock 云卡开卡申请的回调
 */

- (void)YunCardOpenAccount:(NSDictionary *)userParams openAccountBlock:(JDYunCardSDKOpenAccountBlock)openAccountBlock;


#pragma mark -- 云卡信息(文件)下载

/**
 云卡信息(文件)下载

 @param userParams    用户级别的参数
 @param downloadBlock 云卡信息下载回调
 */

- (void)YunCardDownload:(NSDictionary *)userParams downloadBlock:(JDYunCardSDKDownloadBlock)downloadBlock;

#pragma mark -- 查询云卡（信息）列表

/**
 查询云卡（信息）列表

 @param userParams     用户级别的参数
 @param queryListBlock 云卡信息列表查询回调
 */

- (void)YunCardQueryList:(NSDictionary *)userParams queryListBlock:(JDYunCardSDKQueryListBlock)queryListBlock;


#pragma mark -- 查询云卡详情

/**
 查询云卡详情

 @param userParams     用户级别的参数
 @param queryInfoBlock 查询云卡详情回调
 */

- (void)YunCardQueryInfo:(NSDictionary *)userParams queryInfoBlock:(JDYunCardSDKQueryInfoBlock)queryInfoBlock;


#pragma mark -- 云卡注销

/**
 云卡注销

 @param userParams      用户级别的参数
 @param writtenOffBlock 云卡注销的回调
 */

- (void)YunCardWrittenOff:(NSDictionary *)userParams writenOffBlock:(JDYunCardWrittenOffBlock)writtenOffBlock;



/*************************************************交易类接口*************************************************/
#pragma mark -- 云卡充值
/**
 云卡充值

 @param userParams    用户级别的参数
 @param rechargeBlock 云卡充值后的回调
 */
- (void)YunCardAccountReharge:(NSDictionary *)userParams rechargeBlock:(JDYunCardRechargeBlock)rechargeBlock;

#pragma mark -- 云卡交易扣费

/**
 云卡交易扣费
 
 @param userParams        用户级别的参数
 @param transConsumeBlock 云卡交易扣费回调
 */
- (void)YunCardTransConsume:(NSDictionary *)userParams transConsumeBlock:(JDYunCardTransConsumeBlock)transConsumeBlock;

#pragma mark -- 消费记录查询

/**
 消费记录查询

 @param userParams       用户级别的参数
 @param transRecordBlock 交易记录查询回调
 */
- (void)YunCardTransRecord:(NSDictionary *)userParams transRecordBlock:(JDYunCardTransRecordBlock)transRecordBlock;


/*************************************************公共类接口*************************************************/

#pragma mark -- CA证书下发
/**
 CA证书下发

 @param userParams    用户级别的参数，此接口用户只须上送user_id
 @param downloadBlock CA证书下发回调
 */

- (void)YunCardCADownload:(NSDictionary *)userParams CADownloadBlock:(JDYunCardSDKCADownloadBlock)downloadBlock;

#pragma mark -- 后台图片获取

/**
 后台图片获取

 @param userParams       用户级别的参数
 @param picDownloadBlock 后台图片获取回调
 */

- (void)YunCardPicDownload:(NSDictionary *)userParams picDownloadBlock:(JDYunCardSDKPicDownloadBlock)picDownloadBlock;

#pragma mark -- 云卡产品列表下载

/**
 云卡产品列表下载

 @param userParams 用户级别的参数
 @param typeBlock  云卡产品列表下载回调
 */

- (void)YunCardTypeDownload:(NSDictionary *)userParams typeDownloadBlock:(JDYunCardSDKTypeDownloadBlock)typeBlock;


/**
 获取云码信息

 @param userParams       用户参数
 @param qrcodeDataBlock 二维码回调数据
 */
- (void)getQRCodeData:(NSDictionary *)userParams JDYunCardSDKQRCodeDataBlock:(JDYunCardSDKQRCodeDataBlock)qrcodeDataBlock;



/**
 云码生成

 @param acctTimeStamp  第三方时间戳
 @param userBalance    用户余额
 @param payType        支付方式
 @param qrcodeStrBlock 二维码回调数据
 */
- (void)getQRCodeStr:(NSString *)acctTimeStamp
         userBalance:(NSString *)userBalance
             payType:(NSString *)payType
      QRCodeStrBlock:(JDYunCardSDKQRCodeStrBlock)qrcodeStrBlock;


@end
