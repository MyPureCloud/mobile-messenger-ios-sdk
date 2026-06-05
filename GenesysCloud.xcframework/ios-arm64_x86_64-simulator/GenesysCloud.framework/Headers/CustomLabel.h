
// GenesysCloud version number: v1.12.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

@interface CustomLabel : UILabel
@property (nonatomic) CGFloat horizontalInsetValue;
@property (nonatomic) CGFloat verticalInsetValue;

- (UIEdgeInsets)getEdgeInsets;
@end
