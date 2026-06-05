
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloudBot/GenesysCloudBot.h>

@interface NRGroupTableViewCell : UITableViewCell
@property (nonatomic) NRFAQGroup *group;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) UIImage *icon;
@end
