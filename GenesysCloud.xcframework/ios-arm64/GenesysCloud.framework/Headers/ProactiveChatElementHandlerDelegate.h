
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#ifndef ProactiveChatElementHandlerDelegate_h
#define ProactiveChatElementHandlerDelegate_h

#import <GenesysCloud/StorableChatElement.h>

/************************************************************/
// MARK: - ProactiveChatElementHandlerDelegate
/************************************************************/

@protocol ProactiveChatElementHandlerDelegate <NSObject>
- (void)present:(id<StorableChatElement> _Nonnull)statement;
- (void)post:(id<StorableChatElement> _Nonnull)statement;
@end

#endif /* ProactiveChatElementHandlerDelegate_h */
