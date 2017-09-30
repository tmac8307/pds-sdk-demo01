//
//  JDCommonConstant.h
//  JDYunCardSDK
//
//  Created by xiaoyi li on 16/9/21.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

/**
 * 常量相关定义
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JDCommonConstant : NSObject

#define JD_YUN_CARD_SDK_VER  @"1.0.0";
// 服务器地址
#define SERVER_URL  @"http://121.8.250.85:9930/api/service"
#define CERT_REQUEST  @"-----BEGIN CERTIFICATE REQUEST-----MIIB2DCCAUECAQAwgYAxCzAJBgNVBAYTAmNuMRIwEAYDVQQIEwlHdWFuZ0RvbmcxEjAQBgNVBAcTCUd1YW5nemhvdTEMMAoGA1UEChMDcGNpMQ0wCwYDVQQLEwRkYXRhMQswCQYDVQQDEwJwZDEfMB0GCSqGSIb3DQEJARYQbGl4aWFveWlAMTYzLmNvbTCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAsY6qfSwkLjJLRlYRIcQ3KYGVPUckg3fIZd2pr0CI3GHaAuQt0wQ1QBa+bYdttZ89p0JslkfaNYWfDM6g0fnY1dBzmvtJaZ4MDlUWh0ydgunKojVIIfQyM1uRvTwJMPJWRx2ofo/xkFv+I57dGaHJsrsXF99r9TJS355OBCkbgWsCAwEAAaAXMBUGCSqGSIb3DQEJBzEIEwYxMjM0NTYwDQYJKoZIhvcNAQEFBQADgYEATHrftpOWe188mBOyItYZhOF5Zruk719M+5XBuqWc9Rjb7bVY11e2KmS/GmOPUeL7g3cxGC43fBiTGCgIn+sd2TZ2ZZJ+BM+2mZbMvYGwkSW4Q0WPEDSNrXiZzDmiU1trHczmaYyC/rVHyIFDGZye/izlNi769CLi7Q2I1/ya4x4=-----END CERTIFICATE REQUEST-----"
#define CERT_REQUEST_HEADER  @"-----BEGIN CERTIFICATE REQUEST-----"
#define CERT_REQUEST_FOOTER  @"-----END CERTIFICATE REQUEST-----"

#define EPYLocalizableString(key) [[LocalizableTool bundle] localizedStringForKey:key value:nil table:@"Localizable"]
#define kObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

#define WS(weakSelf) __weak __typeof(&*self)weakSelf = self;
#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height
#define imageNamed(name) [UIImage imageNamed:name]
#define systemFontWithSize(size) [UIFont systemFontOfSize:size]
#define IsIos10 ([[[UIDevice currentDevice] systemVersion] floatValue]>=10.0)
#define IsIos9 ([[[UIDevice currentDevice] systemVersion] floatValue]>=9.0)
#define IsIos8 ([[[UIDevice currentDevice] systemVersion] floatValue]>=8.0)
#define IsIos7 ([[[UIDevice currentDevice] systemVersion] floatValue]>=7.0)
#define IsIos6 ([[[UIDevice currentDevice] systemVersion] floatValue]>=6.0)
#define StatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define RGBA(R,G,B,A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A/100.0]
#define SysFontWithSize(size) [UIFont systemFontOfSize:size]
#define BlodFontWithSize(size)  [UIFont boldSystemFontOfSize:size];
#define systemColor [UIColor colorWithRed:22/255.0f green:22/255.0f blue:22/255.0f alpha:1.0f]//系统配色
#define kUIOffSet (IsIos7? 64 : 0)

#define VIEW_3_5_INCH ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(640,960),[[UIScreen mainScreen] currentMode].size):NO)
#define VIEW_4_INCH ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(640,1136),[[UIScreen mainScreen] currentMode].size):NO)
#define VIEW_6_INCH ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(750,1334),[[UIScreen mainScreen] currentMode].size):NO)
#define  VIEW_6_PLUS_INCH ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(1242,2208),[[UIScreen mainScreen] currentMode].size):NO)
#define  VIEW_6_PLUS_INCH_FANGDA ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(1125,2001),[[UIScreen mainScreen] currentMode].size):NO)
#define VIEW_X_INCH ([UIScreen instancesRespondToSelector:@selector(currentMode)]?CGSizeEqualToSize(CGSizeMake(1125,2436),[[UIScreen mainScreen] currentMode].size):NO)

#define VIEW_6_Y_OFFSET (VIEW_6_INCH ? 187 : 0)
#define VIEW_6_PLUS_Y_OFFSET (VIEW_6_PLUS_INCH ? 256 : 0)
#define VIEW_6_X_OFFSET (VIEW_6_INCH ? 55 : 0)
#define VIEW_6_PLUS_X_OFFSET (VIEW_6_PLUS_INCH ? 94 : 0)
#define VIEW_6_PLUS_FANGDA_X_OFFSET (VIEW_6_PLUS_INCH ? 94 : 55)
#define VIEW_6_PLUS_FANGDA_Y_OFFSET (VIEW_6_PLUS_INCH ? 256 : 187)
#define VIEW_6_OR_PLUS_X (VIEW_6_INCH ? VIEW_6_X_OFFSET : (VIEW_6_PLUS_INCH_FANGDA ? VIEW_6_PLUS_FANGDA_X_OFFSET : VIEW_6_PLUS_X_OFFSET))
#define VIEW_6_OR_PLUS_Y (VIEW_6_INCH ? VIEW_6_Y_OFFSET : (VIEW_6_PLUS_INCH_FANGDA ? VIEW_6_PLUS_FANGDA_Y_OFFSET :VIEW_6_PLUS_Y_OFFSET))
#define VIEW_X_Y_OFFSET (VIEW_X_INCH ? 332 : 0)
#define VIEW_X_X_OFFSET (VIEW_X_INCH ? 55 : 0)



#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)
#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))
#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IPHONE_X (IS_IPHONE && SCREEN_MAX_LENGTH == 812.0)

typedef enum : NSUInteger {
    DEPOENM,
    TESTENM,
    PRODENM,
    VALIDATENM
} JDMobleWalletENM;

@end
