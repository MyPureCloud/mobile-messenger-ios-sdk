
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/NRChannelPresentor.h>
#import <GenesysCloudBot/GenesysCloudBot.h>

@interface NRChannelStrategy : NSObject
+ (id<NRChannelPresentor>)fetchChannelPresentorForChannel:(NRChanneling *)channel extraData:(NSDictionary *)extraData;


@end
