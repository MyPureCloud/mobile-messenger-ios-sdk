
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/TextConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@interface PlaceholderConfiguration : TextConfiguration
@property (nonatomic, copy) NSString *recordText;
@property (nonatomic, copy) NSString *readoutext;
/// Placeholder Text.
@property (nonatomic, copy) NSString *text;
@end

NS_ASSUME_NONNULL_END
 
