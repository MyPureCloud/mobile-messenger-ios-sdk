
// GenesysCloud version number: v1.14.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ContentChatElement.h>

@interface LocalChatElement : ContentChatElement

- (instancetype)initWithContent:(NSString *)content;
- (instancetype)initWithType:(ChatElementType)type content:(NSString *)content quickReplies:(NSArray *)quickReplies;

/**
 The input type the user used e.g. AutoComplete
 */
@property (nonatomic, copy) NSString *userInputType;
@property (nonatomic, copy) NSString *userTrackingType;
@property (nonatomic, copy) NSString *postback;
@property (nonatomic, copy, readonly) NSArray<NSURLQueryItem *> *queryItems;
@property (nonatomic, copy) NSArray *quickReplies;

@end
