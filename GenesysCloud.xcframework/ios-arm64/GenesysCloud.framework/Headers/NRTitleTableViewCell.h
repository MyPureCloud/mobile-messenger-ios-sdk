
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/NRTableViewCell.h>
#import <GenesysCloudBot/SupportCenterItem.h>

@class NRTitleTableViewCell;
@protocol NRTitleTableViewCellDelegate  <NSObject>

- (void)updatedDynamicHeight:(NRTitleTableViewCell *)cell;
- (void)didClickArrow:(NRTitleTableViewCell *)cell;

@end

@interface NRTitleTableViewCell : UITableViewCell
@property (nonatomic, strong) NRResult *result;
@property (nonatomic, strong) id<SupportCenterItem> item;
@property (nonatomic, copy) NSString *text;
@property (weak, nonatomic) IBOutlet UIView *resultView;
@property (copy, nonatomic) UIImage *icon;
@property (nonatomic) NRAnimationType animationType;
@property (nonatomic, weak) id<NRTitleTableViewCellDelegate> delegate;
@end
