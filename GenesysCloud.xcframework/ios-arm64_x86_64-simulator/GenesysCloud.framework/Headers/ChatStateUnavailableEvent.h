
// GenesysCloud version number: v1.7.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/ChatStateEvent.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>

@interface ChatStateUnavailableEvent : ChatStateEvent

@property (nonatomic) UnavailableReason reason;
@property (nonatomic, assign) BOOL isFollowedByForm;

- (instancetype)initWithState:(ChatState)state
                        scope:(StatementScope)scope
                      dataMsg:(NSString *)msg
                       reason:(UnavailableReason)reason
                followedByForm:(BOOL)isFollowedByForm;

@end
