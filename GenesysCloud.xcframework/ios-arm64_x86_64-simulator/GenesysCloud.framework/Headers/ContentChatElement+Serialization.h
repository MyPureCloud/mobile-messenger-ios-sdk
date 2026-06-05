
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/GenesysCloud.h>

/************************************************************/
// MARK: - ContentChatElement Serialization
/************************************************************/

@interface ContentChatElement (Serialization)
- (void)bld_Serialize:(ChatConfiguration *)config;
@end
