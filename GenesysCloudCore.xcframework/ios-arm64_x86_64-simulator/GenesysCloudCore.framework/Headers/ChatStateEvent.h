
// GenesysCloudCore version number: v1.7.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/ChatEvent.h>

typedef NS_ENUM(NSInteger, ChatEventType) {
    ChatEventUnknown,
    ChatEventReadmore,
    ChatEventChatPreparing,
    ChatEventChatCreated,
    ChatEventChatReady,
    ChatEventChatStarted,
    ChatEventChatEnding,
    ChatEventChatEnded,
    ChatEventChatDisconnected,
    ChatEventChatReconnecting,
    ChatEventChatReconnected,
    ChatEventChannel,
    ChatEventRefresh,
    ChatEventConfig,
    ChatEventStickyMsgUpdate,
    ChatEventTyping,
    ChatEventEndTyping,
    ChatEventOperatorChanged,
    ChatEventStartQueue,
    ChatEventEndQueue,
    ChatEventAgentAccepted,
    ChatEventFileUploadStateChanged,
    ChatEventFileUploadQueuePosition
};

/**
 An ChatState is an enum of different chat states in chat lifecycle.
 */
typedef NS_ENUM(NSInteger, ChatState) {
    /// Initial state, once the chat creation has started.
    ChatPreparing,
    /// Initial state, once the chat fetched configuration.
    ChatPrepared,
    /// When the chat was successfully started (not yet accepted by agent).
    /// At this point the User can start posting messages on the chat.
    ChatStarted,
    /// User chat was assigned to an agent, and waiting for an agent acceptance.
    ChatPending,
    /// User chat is in the waiting queue, and waiting to be assigned to an agent.
    /// In this event the position in the queue is passed.
    ChatInQueue,
    /// Agent accepted & Live chat started.
    ChatAccepted,
    /// Live Chat ending.
    ChatEnding,
    /// Live Chat ended.
    ChatEnded,
    /// Live Chat unavailable.
    ChatUnavailable,
    /// Chat language was changed
    ChatDidChangeLanguage,
    /// Chat client was disconnected
    ChatDisconnected,
    /// Chat client is reconnecting
    ChatReconnecting
};


@interface ChatStateEvent : ChatEvent

@property (nonatomic) ChatState state;
@property (nonatomic, copy) NSString *dataMsg;

- (instancetype)initWithState:(ChatState)state
                        scope:(StatementScope)scope
                      dataMsg:(NSString *)msg;

- (instancetype)initWithState:(ChatState)state
                        scope:(StatementScope)scope;

@end

