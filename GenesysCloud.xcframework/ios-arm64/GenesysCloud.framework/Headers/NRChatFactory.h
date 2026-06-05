
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatHandler.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>
#import <GenesysCloudMessenger/GenesysCloudMessenger-Swift.h>

@class ChatUIViewModel;

@interface NRChatFactory : NSObject
+ (void)setMockEngine:(MessengerChatEngine*)engine;
+ (id<ChatHandler>)createChatHandlerForAccount:(Account *)account
                                 withViewModel:(ChatUIViewModel *)UIViewModel;
@end
