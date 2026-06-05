
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/LiveAccount.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AccountProvider <NSObject>

@optional
- (AccountExtraData *)extraDataForApiKey:(NSString *)apiKey;
@property (nonatomic, readonly) AccountExtraData *accountExtraData;
@end

NS_ASSUME_NONNULL_END
