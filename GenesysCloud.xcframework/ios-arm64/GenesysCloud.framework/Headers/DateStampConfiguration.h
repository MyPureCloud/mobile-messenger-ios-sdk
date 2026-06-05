
// GenesysCloud version number: v1.11.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/CommonConfig.h>

NS_ASSUME_NONNULL_BEGIN

@interface DateStampConfiguration : NSObject <TextConfig>
@property (nonatomic, copy) NSDateFormatter *formatter;
@end

NS_ASSUME_NONNULL_END
