//
//  WalletTool.h
//  JDMobileWallet
//
//  Created by xiaoyi li on 17/3/29.
//  Copyright © 2017年 xiaoyi li. All rights reserved.
//


/**
 *  接口数据解析工具类
 *  从接口返回的数据有基本账户，银行账户，（通卡账户）等等
 *  为WalletController类的搜身
 */

#import <Foundation/Foundation.h>

typedef void(^WalletBaseAccountBlock)(NSDictionary *);
typedef void(^WalletBankAccountBlock)(NSDictionary *);
typedef void(^WalletEntCardAccountBlock)(NSDictionary *);
typedef void(^WalletYunCardAccountBlock)(NSDictionary *);

typedef void(^PersonInfoSuccessBlock)(id responseObject);
typedef void(^PersonInfoFailureBlock)(NSError *error);

@interface WalletTool : NSObject


@property (nonatomic, strong) WalletBaseAccountBlock walletBaseBlock;
@property (nonatomic, strong) WalletBankAccountBlock walletBankBlock;
@property (nonatomic, strong) WalletEntCardAccountBlock walletEntBlock;
@property (nonatomic, strong) WalletYunCardAccountBlock welletYunBlock;

///....后面如果有别的账户类型，在后面添加

+ (void)parseBaseData:(NSMutableArray *)allData
        withBaseBlock:(WalletBaseAccountBlock)baseBlock
       withBannkBlock:(WalletBankAccountBlock)bankBlock
         withEntBlock:(WalletEntCardAccountBlock)entBlock
     withYunCardBlock:(WalletYunCardAccountBlock)yunBlock;

// 解析银行卡信息
+ (NSMutableDictionary *)wrapperBanks:(NSDictionary *)indexDic;

/**
 解析用户绑定的银行卡信息

 @param bankCardList 用户绑定的所有银行卡

 @return 返回格式：**银行 储蓄卡(0012) 的银行卡数组
 */
+ (NSMutableArray *)wrapBankList:(NSMutableArray *)bankCardList;




@end
