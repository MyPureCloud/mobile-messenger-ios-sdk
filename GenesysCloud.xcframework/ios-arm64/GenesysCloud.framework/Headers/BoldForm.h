
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/BrandedForm.h>
#import <GenesysCloud/BoldFormSelection.h>

/************************************************************/
// MARK: - BoldFormDelegate Protocol
/************************************************************/

@protocol BoldFormDelegate
- (void)submitForm:(BrandedForm *)form;
- (void)didChangeLanguage:(NSString *)languageCode;
- (void)didFailToChangeLanguageWithError:(NSError *)error;
@end

/************************************************************/
// MARK: - BoldForm Protocol
/************************************************************/

@protocol BoldForm

/**
 The form data.
 */
@property (nonatomic, strong) BrandedForm *form;
@property (nonatomic, strong) id<BoldFormDelegate> delegate;
@optional

/**
 The selection object, if not set will be `DefaultBoldFormSelection`
 */
@property (nonatomic, strong) id<BoldFormSelection> boldFormSelection;

/**
 The handler for form fields selection (pre/post chat)
 */
@property (nonatomic, copy) void (^formHandler)(NSDictionary *);

@end
