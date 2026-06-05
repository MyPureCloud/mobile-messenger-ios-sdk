
// GenesysCloud version number: v1.8.0
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

@end

NS_ASSUME_NONNULL_END
