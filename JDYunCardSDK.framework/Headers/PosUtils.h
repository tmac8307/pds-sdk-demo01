//
//  PosUtils.h
//  EPLMPos
//
//  Created by gpay on 16/4/8.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//


/**
 *  基础工具类
 */

#import <Foundation/Foundation.h>

@interface PosUtils : NSObject

/**
 *  字符串转换成十六进制字符串
 */

+ (NSString *)hexStringFromString:(NSString *)string;


/**
 *  十六进制字符串转换成普通字符串
 */

+ (NSString *)stringFromHexString:(NSString *)hexString;

/**
 *  十六进制字符串转成NSData (十六进制转字节可以先调用此方法，然后调用data2Byte)
 */

+ (NSData *)convertHexStrToData:(NSString *)str;

/**
 *  NSData转十六进制
 */
+ (NSString *)hexStringFromData:(NSData *)data;

/**
 *  整型转换成十六进制字符串，比如：170->aa
 *
 *  @param intValue 待转换的整型数据
 *
 *  @return 返回十六进制字符串
 */

+ (NSString *)integerToHexString:(uint16_t)intValue;

/**
 *  判断字符串是否为空
 */

+ (BOOL)isEmptyString:(NSString *)aString;

/**
 *  十六进制字符串转二进制字符串
 */

+ (NSString *)hexString2binaryString:(NSString *)str;

/**
 *  二进制字符串转十六进制字符串
 */

+ (NSString *)binaryString2HexString:(NSString *)str;


/**
 *  NSData转Byte
 */
+ (Byte *)data2Byte:(NSData *)data;

/**
 *  Byte转NSData
 */
+ (NSData *)byte2Data:(Byte *)byte;
+ (NSString *)byte2hexString:(NSData *)byteData;

/**
 *  获取当前时间
 */

+ (NSString *)getCurrentTimeWithFormatter:(NSString *)formatter;


/**
 *  字节数组转十六进制数
 */

//+ (NSString *)byte2hexString:(Byte *)byte;

/**
 *  从字节数组的指定位置取16进制字符串 如0x33 0xD2 0x00 0x46 偏移1长度2 可取出 "d200"
 */

+ (NSString *)getByte2hexString:(int)start len:(int)len buf:(Byte *)buffer;

+ (NSString *)getByte2hexString:(int)start len:(int)len dataBuf:(NSData *)dataBuffer;

/**
 *  从字节数组的指定位置取asc码字串，不需转换
 */

+ (NSString *)getStringFromByteArray:(int)start len:(int)len buf:(Byte *)buffer;



/**
 *  十六进制字符串转ASCII
 */
+ (NSString *)hexToAsc:(NSString *)hex;

/**
 *  ASCII码转十六进制
 */
+ (NSString *)AscToHex:(NSString *)asc;


/**
 对两个等长的字符串做异或操作

 @param pan  第一个字符串
 @param panv 第二个字符串

 @return 异或操作后的字符串
 */
+ (NSString *)xOr:(NSString *)pan withStr2:(NSString *)panv;

/**
 字符转整形

 @param tempChar 字符

 @return 转换后的整形
 */
+ (int)charToInt:(char)tempChar;


/**
 分散算法

 @param str 分散因子

 @return 分散后的字符串
 */
+ (NSString *)despersal:(NSString *)str;


@end
