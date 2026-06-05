
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatHandler.h>
#import <GenesysCloudCore/Account.h>

@interface NRChatFactory : NSObject
+ (id<ChatHandler>)createChatHandlerForAccount:(Account *)account;
@end
