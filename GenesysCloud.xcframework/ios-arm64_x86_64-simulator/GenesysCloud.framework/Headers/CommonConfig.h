
// GenesysCloud version number: v1.14.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/ConfigStructures.h>
#import <GenesysCloud/UIColor+Utility.h>

NS_ASSUME_NONNULL_BEGIN

@interface CommonConfig : NSObject <TextConfig, BackgroundConfig>

/**
 Chat View Background Color
 */
@property (copy, nonatomic) UIColor * _Nullable backgroundColor;

/**
 Chat View Background Image
 */
@property (strong, nonatomic) UIImage * _Nullable backgroundImage;

/**
 Chat Text Color
 */
@property (copy, nonatomic) UIColor * _Nullable textColor;

/**
 Chat Text Timestamp Color
 */
@property (copy, nonatomic) UIColor * _Nullable timestampColor;

@end

NS_ASSUME_NONNULL_END
