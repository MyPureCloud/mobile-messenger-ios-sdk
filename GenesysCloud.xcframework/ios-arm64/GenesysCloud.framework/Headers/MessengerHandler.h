
// GenesysCloud version number: v1.7.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/GenesysCloud.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const DeploymentID = @"DeploymentID";
static NSString * const LastIncomingMessageID = @"LastIncomingMessageID";


@interface MessengerHandler : BaseChatHandler
@property (nonatomic, strong) id<ChatDataProducer> chatDataProducer;

@end

NS_ASSUME_NONNULL_END
