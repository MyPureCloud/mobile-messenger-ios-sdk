
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatElement.h>

@interface PreChatInfo : NSObject
@property (nonatomic, assign) BOOL loading;
@property (nonatomic, readwrite) NSArray<id<ChatElement>> *elements;
@property (nonatomic, copy) NSString *chatTranscript;
@property (nonatomic, copy) NSDictionary *extraInfo;
@end
