
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChannelPickerDelegate.h>
#import <GenesysCloud/NanorepPersonalInfoHandler.h>
#import <GenesysCloud/NRChannelStrategy.h>


@interface NRChannelPickerDelegate : NSObject<ChannelPickerDelegate>
@property (nonatomic, weak) id<NanorepPersonalInfoHandler> infoHandler;
@property (nonatomic, weak) id<NRChannelPresentorDelegate> presentorDelegate;
@end
