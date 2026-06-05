
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/NRQuickOption.h>
#import <GenesysCloud/StorableChatElement.h>
#import <GenesysCloud/ApplicationHandler.h>
#import <GenesysCloud/BoldForm.h>
#import <GenesysCloud/BLDError.h>
#import <GenesysCloud/FileUploadInfo.h>

@protocol ChatControllerDelegate <ApplicationHandler>

@optional

/************************************************************/
// MARK: - Functions
/************************************************************/

- (void)shouldPresentChatViewController:(UINavigationController *)viewController;
- (void)statement:(id<StorableChatElement>)statement didFailWithError:(NSError *)error;
- (void)didClickApplicationQuickOption:(NRQuickOption *)quickOption;
- (BOOL)shouldPresentWelcomeMessage;
- (BOOL)shouldHandleFormPresentation:(UIViewController *)formController;
- (void)updateCustomAttributes:(NSDictionary<NSString *, NSString *> *)customAttributes;

/**
 Updates when chat state was changed (chat lifecycle).
 */
- (void)didUpdateState:(ChatStateEvent *)event;

- (void)didClickToCall:(NSString *)phoneNumber;

/**
 Triggred when form should be presented.
 
 @param form The form data object.
 @param completionHandler The handler with custome view controller to be presented.
 */
- (void)shouldPresentForm:(BrandedForm *)form handler:(void (^)(UIViewController<BoldForm> *vc))completionHandler;

/*
Notifies about upload file button click.

@param fileSelectionCallback The callback to be called once file was selected.
*/
- (void)didClickUploadFile;

- (void)didFailWithError:(GCError *)error;

- (void)reconnectChat;

@end
