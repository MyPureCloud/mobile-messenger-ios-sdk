
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/AutoCompleteConfiguration.h>
#import <GenesysCloud/ChannelConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@interface ReadMoreTitleConfiguration : AutoCompleteConfiguration
@end

@interface ReadMoreViewConfiguration : BasicConfiguration

/// Title Configuration.
@property (nonatomic, strong) ReadMoreTitleConfiguration *title;

/// Channels Configuration.
@property (strong, nonatomic, readonly) ChannelConfiguration *channelsConfig;

@end

NS_ASSUME_NONNULL_END
