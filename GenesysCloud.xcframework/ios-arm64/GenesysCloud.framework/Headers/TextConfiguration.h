
// GenesysCloud version number: v1.14.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BasicConfiguration : NSObject
/// View Background Color.
@property (nonatomic, copy) UIColor * _Nullable backgroundColor;
/// Text Color.
@property (nonatomic, copy) UIColor * _Nullable textColor;
@end

@interface TextConfiguration : BasicConfiguration
@end

NS_ASSUME_NONNULL_END
