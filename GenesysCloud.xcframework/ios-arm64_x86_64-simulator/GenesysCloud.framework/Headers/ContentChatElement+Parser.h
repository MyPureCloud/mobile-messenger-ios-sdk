
// GenesysCloud version number: v1.8.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================


#import <GenesysCloud/GenesysCloud.h>

NS_ASSUME_NONNULL_BEGIN

@interface ContentChatElement (Parser)
- (NSDictionary *)parsePostback:(NSDictionary *)postbackEvent;
@end

NS_ASSUME_NONNULL_END
