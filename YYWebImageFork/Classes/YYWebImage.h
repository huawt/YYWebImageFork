//
//  YYWebImage.h
//  YYWebImage <https://github.com/ibireme/YYWebImage>
//
//  Created by ibireme on 15/2/23.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

#if __has_include(<YYWebImage/YYWebImage.h>)
FOUNDATION_EXPORT double YYWebImageVersionNumber;
FOUNDATION_EXPORT const unsigned char YYWebImageVersionString[];
#import <YYWebImage/YYImageCache.h>
#import <YYWebImage/YYWebImageOperation.h>
#import <YYWebImage/YYWebImageManager.h>
#import <YYWebImage/UIImage+YYWebImage.h>
#import <YYWebImage/UIImageView+YYWebImage.h>
#import <YYWebImage/UIButton+YYWebImage.h>
#import <YYWebImage/CALayer+YYWebImage.h>
#import <YYWebImage/MKAnnotationView+YYWebImage.h>
#else
#import "YYImageCache.h"
#import "YYWebImageOperation.h"
#import "YYWebImageManager.h"
#import "UIImage+YYWebImage.h"
#import "UIImageView+YYWebImage.h"
#import "UIButton+YYWebImage.h"
#import "CALayer+YYWebImage.h"
#import "MKAnnotationView+YYWebImage.h"
#endif
