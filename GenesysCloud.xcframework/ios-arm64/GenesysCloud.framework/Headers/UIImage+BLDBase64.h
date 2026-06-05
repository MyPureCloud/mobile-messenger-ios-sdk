
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

@interface UIImage (BLDBase64)
@property (nonatomic, readonly, copy) NSString *bld_Base64;
+ (void)bld_LoadFromURL:(NSURL*)url
           callback:(void (^)(UIImage *image))callback;
@end
