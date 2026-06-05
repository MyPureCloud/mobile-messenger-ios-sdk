
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/BoldHandler.h>

@interface BoldHandler (BCSubmitPostChatDelegate)<BCSubmitPostChatDelegate>
- (void)handleForm:(BCForm *)form event:(ChatStateEvent *)event;
- (void)handleUnavailableForm:(BCForm *)unavailableForm dataMsg:(NSString *)message
                       reason:(UnavailableReason)reason;
@end
