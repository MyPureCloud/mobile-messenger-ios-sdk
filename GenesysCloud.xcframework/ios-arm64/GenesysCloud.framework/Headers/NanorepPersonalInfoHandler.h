
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/ExtraData.h>
#import <GenesysCloudBot/NRChanneling.h>

@protocol NanorepPersonalInfoHandler <NSObject>

- (void)personalInfoWithExtraData:(NSDictionary *)extraData channel:(NRChanneling *)channel completionHandler:(void(^)(NSDictionary *formData))handler;
- (void)didFetchExtraData:(ExtraData *)formData;
- (void)didSubmitForm;
- (void)didCancelForm;
- (void)didFailSubmitFormWithError:(NSError *)error;
- (BOOL)shouldOverridePhoneChannel:(NRChannelingPhoneNumber *)phoneChannel;
- (void)didSubmitFeedback:(NSDictionary *)info;

@optional

/**
 Enable / Disable Popup confirmation

 @param channel The channel which should be presented.
 @return true for presenting the popup (If method won't be implemented the default will be true)
 */
- (BOOL)shouldPresentConfirmationPopupForChannel:(NRChanneling *)channel;
@end
