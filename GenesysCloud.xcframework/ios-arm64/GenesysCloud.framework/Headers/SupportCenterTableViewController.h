
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/SupportCenterBase.h>
#import <GenesysCloud/LabelDelegate.h>
#import <GenesysCloud/SupportCenterDataSource.h>
#import <GenesysCloud/NRResult.h>


NS_ASSUME_NONNULL_BEGIN

@protocol SupportCenterDelegate<NSObject>
- (void)didSelectResult:(NRQueryResult *)result;
- (void)clear;
- (void)updatePage:(NSUInteger)page;
@end

@interface SupportCenterTableViewController : UITableViewController <SupportCenterBase, LabelDelegate>
@property (nonatomic, weak) id<SupportCenterDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
