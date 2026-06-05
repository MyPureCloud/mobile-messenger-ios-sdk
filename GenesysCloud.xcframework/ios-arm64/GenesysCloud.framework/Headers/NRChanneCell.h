
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloudBot/GenesysCloudBot.h>
#import <GenesysCloud/ChannelConfiguration.h>

@interface NRChanneCell : UICollectionViewCell
@property (nonatomic, strong) NRChanneling *channel;
@property (strong, nonatomic) ChannelConfiguration *config;
@end
