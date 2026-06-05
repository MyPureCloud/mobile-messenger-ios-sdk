
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/BoldTableViewCell.h>

@interface SelectTableViewCell : UITableViewCell <BoldTableViewCell>
@property (weak, nonatomic) IBOutlet UILabel *label;
@end
