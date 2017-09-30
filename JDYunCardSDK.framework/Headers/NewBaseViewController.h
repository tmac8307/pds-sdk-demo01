//
//  BaseViewController.h
//  EWP
//
//  Created by gpay on 15/8/21.
//  Copyright (c) 2015年 Epaylinks. All rights reserved.
//

/**
 *  通用基础类
 */
#import <UIKit/UIKit.h>
#import "Reachability.h"

typedef NS_ENUM(NSInteger, RightBarItemType){
    RightBarItemTypeTitle,
    RightBarItemTypeImage
};

@interface NewBaseViewController : UIViewController

// 是否使用网络状态提示
@property (nonatomic)           BOOL isShowNetWork;
// 获取网络连接状态
@property (nonatomic)           BOOL isNetWorkConnect;
// 控制器相关的数据源
@property (nonatomic, strong)   NSMutableDictionary *baseMutableDictionary;
// 右侧显示文字或按钮
@property (nonatomic)           RightBarItemType rightItemType;
// 导航栏
@property (nonatomic, strong)   UINavigationBar *navBar;

/**
 防止cell重复点击的标记
 */
@property (nonatomic) BOOL isSelect;


// 初始化
- (id)init;
// 推荐方法：初始化同时将baseMutableDictionary进行初始化
- (id)initWithDictionary:(NSDictionary *)dic;
- (id)initWithNibName:(NSString *)nibNameOrNil
               bundle:(NSBundle *)nibBundleOrNil
          andDicionty:(NSDictionary *)dic;

//自定义导航栏
- (void)addNavBar:(NSString*)title;

// 设置导航栏标题
- (void)setNavBarTitle:(NSString *)newTitle;

//创建返回按钮
- (void)createLeftButtonItemWithImageName:(NSString *)imageName;

//创建右侧按钮
- (void)createRightBarButtonItemWithTitle:(NSString *)rightTitle
                            withImageName:(NSString *)imageName;

- (void)repeatDelay;

@end
