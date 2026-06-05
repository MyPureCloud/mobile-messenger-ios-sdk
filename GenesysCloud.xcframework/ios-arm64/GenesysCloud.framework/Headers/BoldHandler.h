
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/BaseChatHandler.h>
#import <GenesysCloudBold/GenesysCloudBold.h>
#import <GenesysCloud/BLDError.h>
#import <GenesysCloud/LiveAccount.h>
#import <GenesysCloud/RemoteChatElement.h>

static NSString * _Nonnull const VisitorID = @"VisitorID";
static NSString * _Nonnull const ChatID = @"ChatID";

/************************************************************/
// MARK: - BoldHandler
/************************************************************/

@interface BoldHandler : BaseChatHandler

/************************************************************/
// MARK: - Properties
/************************************************************/

@property (nonatomic, strong) id<BCCancelable> _Nullable createChatCancelable;
@property (nonatomic, strong) id<BCChatSession> _Nullable chatSession;

/************************************************************/
// MARK: - Functions
/************************************************************/

- (void)presentMsg:(NSString *_Nonnull)msg designType:(NSString *_Nonnull)designType;
- (void)presentSystemMsg:(RemoteChatElement *_Nonnull)element;
- (void)addChatDelegation;
- (void)handleError:(BLDError *_Nullable)error;
- (instancetype _Nullable)initWithAccount:(LiveAccount *_Nonnull)account;
- (void)handleChatFinishedWithMessage:(NSString *_Nullable)msg;
- (void)showUserTranscriptForm;

@end
