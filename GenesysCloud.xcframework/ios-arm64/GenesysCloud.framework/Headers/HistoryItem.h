
// GenesysCloud version number: v1.7.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/ContentChatElement.h>

@interface HistoryItem : ContentChatElement

- (instancetype)initWithType:(ChatElementType)type content:(NSString*)content;

@end
