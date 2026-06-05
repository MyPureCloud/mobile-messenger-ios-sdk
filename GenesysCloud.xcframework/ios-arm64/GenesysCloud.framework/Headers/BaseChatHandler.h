
// GenesysCloud version number: v1.14.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/ChatHandler.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>
#import <GenesysCloudMessenger/GenesysCloudMessenger-Swift.h>

@class ChatUIViewModel;
@class AttachmentFetcher;

/************************************************************/
// MARK: - BaseChatHandler
/************************************************************/

FOUNDATION_EXPORT NSString * _Nonnull const ConfigKey;
FOUNDATION_EXPORT NSString * _Nonnull const NewSessionKey;
FOUNDATION_EXPORT NSString * _Nonnull const StartChatKey;

@interface BaseChatHandler : NSObject <ChatHandler>
@property (nonatomic, strong) ChatUIViewModel * _Nullable UIViewModel;
@property(nonatomic, strong) id<AttachmentFetcherProtocol> _Nullable attachmentFetcher;
@property (nonatomic, strong) MessengerChatEngine *  _Nullable engine;


- (void)presentStatement:(id<StorableChatElement>_Nullable)statement;
- (void)presentStatements:(NSArray<id<StorableChatElement>> *_Nullable)statements isPrecedingStatements:(BOOL)isPrecedingStatements;
- (void)presentFeedbackStatement:(id<StorableChatElement> _Nonnull)statement;

- (void)updateStatus:(StatementStatus)status element:(id<StorableChatElement>_Nullable)element;
- (void)updateElement:(id<StorableChatElement> _Nonnull)element originalId:(NSString *_Nonnull)elementId;
- (void)updateChatState:(ChatStateEvent *_Nullable)event;
- (void)resetChatUIWithCompletionHandler:(void(^_Nonnull)(void))completionHandler;
- (void)updateFileProfile:(AttachmentProfile *_Nullable)profile;
- (void)didReceiveAttachmentId:(NSString *_Nonnull)attachmentId fileURL:(NSURL *_Nonnull)fileURL fileData:(NSData * _Nonnull)fileData;
- (void)updateAttachmentStatus:(UploadableFileStatus)status;
- (void)didUploadAttachmentWithAttachmentId:(NSString *_Nonnull)attachmentId downloadUrl:(NSString *_Nonnull)downloadUrl;
- (void)didRefreshAttachmentWithAttachmentId:(NSString *_Nonnull)attachmentId downloadUrl:(NSString *_Nonnull)downloadUrl;
- (void)didUpdateUploadProgress:(double)progress;
- (void)didDelayAttachmentWithFileData:(NSData *_Nonnull)fileData fileURL:(NSURL * _Nonnull)fileURL;
- (void)didEnableFileUpload;
- (void)attachmentRefresh:(DownloadableFile *_Nonnull)file;
- (void)subscribeToAttachmentFetcher;
- (void)agentDidType:(NSDictionary<NSString *,id> * _Nullable)params;
@end
