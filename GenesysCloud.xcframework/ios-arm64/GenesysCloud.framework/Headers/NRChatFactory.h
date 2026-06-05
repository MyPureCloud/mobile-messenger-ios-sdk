
// GenesysCloud version number: v1.7.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatHandler.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>

@class ChatUIViewModel;

@interface NRChatFactory : NSObject
+ (id<ChatHandler>)createChatHandlerForAccount:(Account *)account
                                 withViewModel:(ChatUIViewModel *)UIViewModel;
@end
