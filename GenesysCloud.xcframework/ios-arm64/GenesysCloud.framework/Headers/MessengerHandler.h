
// GenesysCloud version number: v1.14.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/GenesysCloud.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const DeploymentID = @"DeploymentID";
static NSString * const LastIncomingMessageID = @"LastIncomingMessageID";


@interface MessengerHandler : BaseChatHandler <ChatEngineDelegate>
@property (nonatomic, strong) id<ChatDataProducer> chatDataProducer;
@property (nonatomic, strong) NSTimer *agentTypingTimer;

+ (void)setMockEngine:(MessengerChatEngine*)engine;
+ (id<ChatHandler>)createChatHandlerForAccount:(Account *)account
                                 withViewModel:(ChatUIViewModel *)UIViewModel;

//- (void)attachmentRefresh:(DownloadableFile *)file;
- (void)clearConversation;
- (ContentChatElement *)createChatElement:(ChatStatement *)chatStatement isLastStatement:(BOOL)isLastStatement;

@end

NS_ASSUME_NONNULL_END
