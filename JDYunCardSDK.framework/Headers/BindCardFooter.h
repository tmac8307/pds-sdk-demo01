//
//  BindCardFooter.h
//  JDMobileWallet
//
//  Created by xiaoyi li on 16/10/26.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^BindSerBlock)();
typedef void(^NextBlock)();
@interface BindCardFooter : UIView

@property (weak, nonatomic) IBOutlet UIButton *serBtn;
@property (weak, nonatomic) IBOutlet UIButton *nextBtn;



@property (strong, nonatomic) BindSerBlock serBlock;
@property (strong, nonatomic) NextBlock nextBlock;
@end
