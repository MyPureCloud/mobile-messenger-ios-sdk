
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/ProactiveChatElement.h>

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - ProactiveChatElementHandler
/************************************************************/

@interface ProactiveChatElementHandler : NSObject
/// Helps to inject messages into the chat.
/// @param element The chat element to be injected.
- (void)post:(ProactiveChatElement *)element;
@end


NS_ASSUME_NONNULL_END
