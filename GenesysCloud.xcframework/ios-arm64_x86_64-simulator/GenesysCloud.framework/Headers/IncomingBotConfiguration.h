
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/QuickOptionConfiguration.h>
#import <GenesysCloud/MessageConfiguration.h>
//#import "CarouselConfiguration.h"
#import <GenesysCloudBot/FeedbackConfiguration.h>

/************************************************************/
// MARK: - IncomingBotConfiguration
/************************************************************/

@interface IncomingBotConfiguration : IncomingMessageConfiguration
/**
Quick Option Configuration
*/
@property (strong, nonatomic, readonly) QuickOptionConfiguration *quickOptionConfig;

/**
Instant Feedback Configuration
*/
@property (nonatomic, strong) InstantFeedbackConfiguration *instantFeedbackConfig;

/**
 Carousel Configuration
 */
//@property (strong, nonatomic, readonly) CarouselConfiguration *carouselConfig;
@end
