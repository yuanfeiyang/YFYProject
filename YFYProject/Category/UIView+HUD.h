//
//  UIView+HUD.h
//  YFYProject
//
//  Created by spare on 16/7/27.
//  Copyright © 2016年 yuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD.h>

@interface UIView (HUD)
//忙提示
- (void)showBusyHUD;
//文字提示
- (void)showWarning:(NSString *)warning;
//隐藏提示
- (void)hideBusyHUD;

@end