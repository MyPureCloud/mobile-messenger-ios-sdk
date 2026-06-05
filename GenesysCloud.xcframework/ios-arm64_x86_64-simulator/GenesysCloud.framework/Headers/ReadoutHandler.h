
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudBot/ReadoutMessage.h>

@protocol ReadoutHandler <NSObject>
- (id <ReadoutMessage>)shouldReplaceReadoutMessage:(id <ReadoutMessage>)readoutMessage;
@end
