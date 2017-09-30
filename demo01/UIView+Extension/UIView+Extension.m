//
//  UIView+Extension.m
//  SDRefreshView
//
//
//  Created by EWP on 15-9-6.
//  Copyright (c) 2015年 EPay. All rights reserved.
//


#import "UIView+Extension.h"

@implementation UIView (Extension)

- (CGFloat)sd_height
{
    return self.frame.size.height;
}

- (void)setSd_height:(CGFloat)sd_height
{
    CGRect temp = self.frame;
    temp.size.height = sd_height;
    self.frame = temp;
}

- (CGFloat)sd_width
{
    return self.frame.size.width;
}

- (void)setSd_width:(CGFloat)sd_width
{
    CGRect temp = self.frame;
    temp.size.width = sd_width;
    self.frame = temp;
}


- (CGFloat)sd_y
{
    return self.frame.origin.y;
}

- (void)setSd_y:(CGFloat)sd_y
{
    CGRect temp = self.frame;
    temp.origin.y = sd_y;
    self.frame = temp;
}

- (CGFloat)sd_x
{
    return self.frame.origin.x;
}

- (void)setSd_x:(CGFloat)sd_x
{
    CGRect temp = self.frame;
    temp.origin.x = sd_x;
    self.frame = temp;
}

-(void)setCenterX:(CGFloat)centerX{
    CGPoint center = self.center;
    center.x = centerX;
    self.center = center;
}
-(void)setCenterY:(CGFloat)centerY{
    CGPoint center = self.center;
    center.y = centerY;
    self.center = center;
}

-(CGFloat)centerY{
    return self.center.y;
}
-(CGFloat)centerX{
    return self.center.x;
}

@end
