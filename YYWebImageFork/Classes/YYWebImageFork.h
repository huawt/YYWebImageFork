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

#if __has_include(<YYWebImageFork/YYWebImageFork.h>)
FOUNDATION_EXPORT double YYWebImageVersionNumber;
FOUNDATION_EXPORT const unsigned char YYWebImageVersionString[];
#import <YYWebImageFork/YYImageCache.h>
#import <YYWebImageFork/YYWebImageOperation.h>
#import <YYWebImageFork/YYWebImageManager.h>
#import <YYWebImageFork/UIImage+YYWebImage.h>
#import <YYWebImageFork/UIImageView+YYWebImage.h>
#import <YYWebImageFork/UIButton+YYWebImage.h>
#import <YYWebImageFork/CALayer+YYWebImage.h>
#import <YYWebImageFork/MKAnnotationView+YYWebImage.h>
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
