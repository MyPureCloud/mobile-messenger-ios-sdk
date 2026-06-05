
// GenesysCloud version number: v1.4.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LabelDelegate <NSObject>
- (void)loadData;
- (void)reloadAtIndex:(NSInteger)index;
@end

NS_ASSUME_NONNULL_END
