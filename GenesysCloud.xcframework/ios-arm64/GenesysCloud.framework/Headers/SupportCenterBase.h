
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/SupportCenterDataSource.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SupportCenterBase <NSObject>
@property (nonatomic, strong) SupportCenterDataSource *dataHandler;
@property (nonatomic, strong) id<SupportCenterItem> item;
- (void)back;
@end

NS_ASSUME_NONNULL_END
