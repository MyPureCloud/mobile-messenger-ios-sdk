
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/NRResult.h>

@class NRTableViewCell;
@protocol NRTableViewCellDelegate <NSObject>

- (void)didSelectResult:(NRTableViewCell *)cell;
- (void)didSelectLinkedArticle:(NSString *)articleId;
- (void)cell:(NRTableViewCell *)cell didLike:(BOOL)isPositive;
- (void)cell:(NRTableViewCell *)cell didSelectChannel:(NRChanneling *)channel;

@end

@interface NRTableViewCell : UITableViewCell
@property (nonatomic, strong) NRResult *result;
@property (nonatomic, weak) id<NRTableViewCellDelegate> delegate;
@end
