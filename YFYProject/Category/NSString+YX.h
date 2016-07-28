//
//  NSString+YX.h
//  YFYProject
//
//  Created by spare on 16/7/27.
//  Copyright © 2016年 yuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSString (YX)
@property (nonatomic, readonly) NSURL *yx_URL;

@property (nonatomic, readonly) NSURL *yx_fileURL;

@property (nonatomic, readonly) UIImage *yx_image;

@property (nonatomic, readonly) UIImageView *yx_imageView;
/** 字符串转二维码图片 */
@property (nonatomic, readonly) UIImage *yx_creatQRCode;
@end
