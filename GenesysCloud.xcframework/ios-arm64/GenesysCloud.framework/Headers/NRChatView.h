
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/ChatEventHandler.h>
#import <GenesysCloud/ContentChatElement.h>
#import <GenesysCloud/ChatConfiguration.h>

/************************************************************/
// MARK: - NRChatViewDelegate
/************************************************************/

@protocol NRChatViewDelegate <NSObject>
- (void)onReady;
- (void)addText:(NSString *)text isClient:(BOOL)isClient;
- (void)channel:(NSDictionary *)params;
- (void)readMore:(NSDictionary *)params;
- (void)linkedArticle:(NSString *)articleId title:(NSString *)title;
- (void)inlineChoice:(NSDictionary *)params;
- (void)location:(NSDictionary<NSString *, NSString *> *)params;
- (void)openInAppBrowser:(NSURLRequest *)request;
- (void)inAppNavigation:(NSString *)pageId;
- (void)share:(NSDictionary *)params;
- (void)customQuickOption:(NSDictionary *)params;
- (void)fetchPreviousHistory;
- (void)didFailWithError:(NSError *)error;
@end

/************************************************************/
// MARK: - NRChatView
/************************************************************/

@interface NRChatView : UIView
@property (nonatomic, weak) id<NRChatViewDelegate> chatViewDelegate;
@property (nonatomic, strong) id<ChatEventHandler> chatEventHandler;
@property (nonatomic, readonly) BOOL isLoaded;
@property (nonatomic) BOOL isRTL;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, strong) ChatConfiguration *config;
@property (nonatomic) BOOL typing;
@property (nonatomic) BOOL userScrolled;

- (void)loadRequest:(NSURLRequest *)request;
- (void)reload;
- (void)removeMessages;
- (void)updateStickyMessage:(NSDictionary *)data;
- (void)injectMessage:(NSString *)jsString isClient:(BOOL)isClient;
- (void)injectElement:(id<StorableChatElement>)element;
- (void)injectElements:(NSArray<id<StorableChatElement>> *)elements isPrecedingStatements:(BOOL)shouldAddToTop;
- (void)updateStatus:(NSString *)key;
- (void)updateElement:(NSString *)element elementId:(NSString *)elementId;
- (void)updateAvatar;
- (void)resetChatUIWithCompletionHandler:(void(^)(void))completionHandler;
- (void)loadingIndicator:(BOOL)isActive;
@end
