
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudBold/GenesysCloudBold.h>
#import <GenesysCloud/PreChatBrand.h>

/************************************************************/
// MARK: - BrandedForm
/************************************************************/

@interface BrandedForm : BCForm

/**
 The Form (PreChat, PostChat..).
 */
@property (nonatomic, strong, readonly) BCForm *form;

/**
 The PreChat Branded Object
 */
@property (nonatomic, strong, readonly) ChatBrand *chatBrand;

/**
 Whole Brandind Dictionary
 */
@property (nonatomic, copy, readonly) NSDictionary *globalBranding;

/**
 BrandedForm Initializer
 
 @param form The `BCForm` object, contains all needed for creating a form.
 @return returns `BrandedForm` with relevant brand.
 */
- (instancetype)initWithForm:(BCForm *)form branding:(NSDictionary *)branding;

@end
