
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/IncomingBotTitleConfiguration.h>
#import <GenesysCloud/IncomingBotConfiguration.h>
#import <GenesysCloud/PersistentOptionConfiguration.h>

NS_ASSUME_NONNULL_BEGIN


@interface MultipleSelectionConfiguration : MessageConfiguration

/**
Title Configuration
*/
@property (strong, nonatomic) IncomingBotTitleConfiguration *titleConfiguration;

/**
Persistent Option Configuration
*/
@property (strong, nonatomic) PersistentOptionConfiguration *persistentOptionConfiguration;

@end


NS_ASSUME_NONNULL_END
