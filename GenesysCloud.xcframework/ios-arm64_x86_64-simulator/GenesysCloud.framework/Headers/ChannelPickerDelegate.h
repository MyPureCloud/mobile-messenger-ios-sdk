
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import<Foundation/Foundation.h>
#import <GenesysCloud/NRResult.h>

@protocol ChannnelPresentDelegate<NSObject>
- (void)presentChannelController:(UIViewController *)controller;
@end

@protocol ChannelPickerDelegate<NSObject>
- (void)didSelectChannel:(NRChanneling *)channel view:(UIView *)channelView forResult:(NRResult *)result;
@property (nonatomic, weak) id<ChannnelPresentDelegate> channnelPresentDelegate;
@end
