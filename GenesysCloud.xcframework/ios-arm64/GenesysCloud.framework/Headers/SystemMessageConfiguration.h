
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/MessageConfiguration.h>

@interface SystemMessageConfiguration : FullCornersItemConfiguration
@property (nonatomic, weak) id<MessageConfigurationDateHandler> dateHandler;

@end
