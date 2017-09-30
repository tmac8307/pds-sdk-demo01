//
//  UIImageView+Card.m
//  JDMobileWallet
//
//  Created by xiaoyi li on 17/5/26.
//  Copyright © 2017年 xiaoyi li. All rights reserved.
//

#import "UIImageView+Card.h"
#import <objc/runtime.h>


static const void *cRectTypeKey = &cRectTypeKey;
static const void *cAccountTypeKey = &cAccountTypeKey;
static const void *cTagKey = &cTagKey;
static const void *cAccountNoKey = &cAccountNoKey;
static const void *cCardNameKey = &cCardNameKey;
static const void *cTotalBalanceKey = &cTotalBalanceKey;
static const void *cLogicNoKey = &cLogicNoKey;

@implementation UIImageView (Card)

@dynamic recType,accountType;


- (NSString *)recType {
    
    return objc_getAssociatedObject(self, cRectTypeKey);
}

- (void)setRecType:(NSString *)recType {
    
    objc_setAssociatedObject(self, cRectTypeKey, recType, OBJC_ASSOCIATION_COPY_NONATOMIC);
    
}


- (NSString *)accountType {
    
    return objc_getAssociatedObject(self, cAccountTypeKey);
}

- (void)setAccountType:(NSString *)accountType {
    
    objc_setAssociatedObject(self, cAccountTypeKey, accountType, OBJC_ASSOCIATION_COPY_NONATOMIC);
    
}


- (NSString *)newTag {
    
    return objc_getAssociatedObject(self, cTagKey);
    
}


- (void)setNewTag:(NSString *)newTag {
    
    objc_setAssociatedObject(self, cTagKey, newTag, OBJC_ASSOCIATION_COPY_NONATOMIC);
    
}

- (NSString *)accountNo {
    
    return objc_getAssociatedObject(self, cAccountNoKey);
    
}

- (void)setAccountNo:(NSString *)accountNo {
    
    objc_setAssociatedObject(self, cAccountNoKey, accountNo, OBJC_ASSOCIATION_COPY_NONATOMIC);
    
}

- (NSString *)cardName {
    
    return objc_getAssociatedObject(self, cCardNameKey);
    
}

- (void)setCardName:(NSString *)cardName {
    
    objc_setAssociatedObject(self, cCardNameKey, cardName, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (NSString *)totalBalance {
    return objc_getAssociatedObject(self, cTotalBalanceKey);
}

- (void)setTotalBalance:(NSString *)totalBalance {
    objc_setAssociatedObject(self, cTotalBalanceKey, totalBalance, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (NSString *)logicalNo {
    return objc_getAssociatedObject(self, cLogicNoKey);
}

- (void)setLogicalNo:(NSString *)logicalNo {
    objc_setAssociatedObject(self, cLogicNoKey, logicalNo, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

@end
