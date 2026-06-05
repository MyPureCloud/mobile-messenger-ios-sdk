
// GenesysCloudCore version number: v1.11.2
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BCAccountConstants : NSObject

/** A dictionary to hold account's extra data*/
extern NSString *const BCFormFieldExtraData;

/** A dictionary to hold account's custom attributes*/
extern NSString *const BCFormFieldCustomAttributes;

/** Language of the visitor (e.g., en-US). If the window does not support the language, it will fallback to the default language of the window. String value required. @since Version 1.0 */
extern NSString *const BCFormFieldLanguage;

@end

NS_ASSUME_NONNULL_END
