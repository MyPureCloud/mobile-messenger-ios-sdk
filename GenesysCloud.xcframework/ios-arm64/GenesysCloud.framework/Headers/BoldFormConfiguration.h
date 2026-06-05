
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BoldFormElementConfiguration: NSObject
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, copy) UIColor *textColor;
@end

@interface BoldFormConfiguration : NSObject
@property (nonatomic, readonly) BoldFormElementConfiguration *titleConfig;
@property (nonatomic, readonly) BoldFormElementConfiguration *multiSelectElementConfig;
@property (nonatomic, readonly) BoldFormElementConfiguration *textElementConfig;
@property (nonatomic, readonly) BoldFormElementConfiguration *ratingTitleConfig;
@end

NS_ASSUME_NONNULL_END
