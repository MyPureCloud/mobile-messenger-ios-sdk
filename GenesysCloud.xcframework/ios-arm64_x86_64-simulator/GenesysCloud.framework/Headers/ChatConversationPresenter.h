
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2022 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/ChatConfiguration.h>
#import <GenesysCloud/ChatEventHandler.h>
#import <GenesysCloud/StorableChatElement.h>

@protocol ChatConversationPresenter
- (void)setup:(ChatConfiguration *)config;
- (void)setChatEventHandler:(id<ChatEventHandler>)handler;
- (void)setIsRTL:(BOOL)isRTL;
- (void)setIsTyping:(BOOL)isTyping;
- (void)updateAvatar;
- (void)addElement:(id<StorableChatElement>)element;
- (void)addElements:(NSArray<id<StorableChatElement>> *)elements isPrecedingStatements:(BOOL)isPrecedingStatements;
- (void)resetChatUIWithCompletionHandler:(void(^)(void))completionHandler;
- (void)updateElementStatus:(id<StorableChatElement>)element;
- (void)updateElement:(id<StorableChatElement>)element originalId:(NSString *)elementId;
- (void)updateStickyElement:(NSDictionary *)params;
- (void)updateContentSize;
- (void)clearChat;
- (void)loadingIndicator:(BOOL)isActive;
@end
