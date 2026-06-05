
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/TextConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@interface AutoCompleteConfiguration : TextConfiguration
@property (nonatomic, assign, getter = isEnabled) BOOL enabled;
@end

NS_ASSUME_NONNULL_END
