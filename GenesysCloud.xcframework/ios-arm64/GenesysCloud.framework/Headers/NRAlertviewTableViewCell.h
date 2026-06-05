
// GenesysCloud version number: v1.4.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
@class NRAlertviewTableViewCell;
@protocol NRAlertviewTableViewCellDelegate <NSObject>

- (void)didSelectCell:(NRAlertviewTableViewCell *)cell;

@end

@interface NRAlertviewTableViewCell : UITableViewCell
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSNumber *reasonSelected;
@property (nonatomic, weak) id<NRAlertviewTableViewCellDelegate> delegate;
@end
