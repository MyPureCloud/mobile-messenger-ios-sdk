
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatControllerDelegate.h>
#import <GenesysCloud/NREntitiesProvider.h>
#import <GenesysCloud/ChatElementDelegate.h>
#import <GenesysCloudCore/ContinuityProvider.h>
#import <GenesysCloud/ChatHandler.h>
#import <GenesysCloud/SpeechReconitionDelegate.h>
#import <GenesysCloud/ChatConfiguration.h>
#import <GenesysCloud/BoldEvent.h>
#import <GenesysCloud/ViewConfiguration.h>
#import <GenesysCloud/AccountProvider.h>
#import <GenesysCloud/AvailabilityResult.h>
#import <GenesysCloud/HandOver.h>
#import <GenesysCloud/ProactiveChatElementHandler.h>

/************************************************************/
// MARK: - ChatController
/************************************************************/

@interface ChatController : NSObject

/************************************************************/
// MARK: - Properties
/************************************************************/

@property (nonatomic, strong) id<ViewConfiguration> _Nullable viewConfigurationSource;

/**
 The Entities Provider Handles Users Private Information.
 */
@property (nonatomic, weak) id<NREntitiesProvider> _Nullable entitiesProvider;

/**
 The History Provider For Controlling Chat History.
 */
@property (nonatomic, weak) id<ChatElementDelegate> _Nullable chatElementDelegate;

/**
 The Account Provider For fetching Account parameters.
 */
@property (nonatomic, weak) id<AccountProvider> _Nullable accountProvider;

/**
 The Continuity Provider For Stor/ Fetch of Chat Continuity Credentials.
 */
@property (nonatomic, weak) id<ContinuityProvider> _Nullable continuityProvider;

/**
 The Live Chat Handler (Not Bold, 3rd party lib)
 */
@property (nonatomic, strong) HandOver * _Nullable handOver;

/**
 The Chat View Configuration.
 */
@property (nonatomic, strong) ChatConfiguration * _Nonnull viewConfiguration;

/**
 File upload feature indicator.
 */
@property (nonatomic, readonly) BOOL isFileTransferEnabled;

/**
Hendles chat element injection.
*/
@property (nonatomic, strong, readonly) ProactiveChatElementHandler * _Nonnull proactiveChatElementHandler;

/************************************************************/
// MARK: - Delegates
/************************************************************/

/**
 Chat Controller Delegate
 */
@property (nonatomic, weak) id<ChatControllerDelegate> _Nullable delegate;

/**
 Speech Reconition Delegate
 */
@property (nonatomic, weak) id<SpeechReconitionDelegate> _Nullable speechReconitionDelegate;

/**
 Readout Handler
 */
@property (nonatomic, weak) id<ReadoutHandler> _Nullable readoutHandler;

/************************************************************/
// MARK: - Initializer
/************************************************************/

- (instancetype _Nonnull )initWithAccount:(Account *_Nonnull)account;

/************************************************************/
// MARK: - Functions
/************************************************************/

/**
 Helps to resend elements that faild.

 @param elements The Element to Resend.
 */
- (void)repostStatements:(NSArray<StorableChatElement> *_Nullable)elements;

/**
 Restores chat view controller.
 Should be implimented with history.
 */
- (void)restoreChatViewController;

/**
 Handle bold events.
 */
- (void)handleEvent:(BoldEvent *_Nonnull)event;

/**
 Ends current chat handler.
 */
- (void)endChat:(BOOL)forceClose;

/**
 Reconnect current chat handler.
 */
- (void)reconnectChat;

/**
 Teminates the chat controller and all active chats.
 */
- (void)terminate;

/**
 File Uploader.
 */
- (void)uploadFile:(UploadRequest *_Nonnull)request
          progress:(void (^_Nonnull)(float progress))progress
        completion:(void(^_Nonnull)(FileUploadInfo * _Nonnull fileInfo))completion;

/**
clear cache

@param day days, for example 7 days, will automatically clear all caches after 7 days, this method can be called directly in application:didFinishLaunchingWithOptions
*/
+ (void)clearCacheWithInvalidDays:(NSInteger)day;

/**
 The availability of the chat.
 */
+ (void)checkAvailability:(Account *_Nonnull)account
               completion:(void(^_Nonnull)(AvailabilityResult * _Nonnull result))completion;

/**
 The list of departments under account.
 */
+ (void)fetchDepartments:(Account *_Nonnull)account
              completion:(void(^_Nonnull)(DepartmentResult * _Nonnull result))completion;

/**
Updating custom attributes
*/
- (void)updateCustomAttributes:(NSDictionary<NSString *, NSString *> *_Nonnull)customAttributes;

@end
