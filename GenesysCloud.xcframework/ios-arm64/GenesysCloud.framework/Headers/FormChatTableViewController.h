
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/BoldForm.h>
#import <GenesysCloud/BoldFormConfiguration.h>

/************************************************************/
// MARK: - FormChatTableViewController
/************************************************************/

@interface FormChatTableViewController : UITableViewController <BoldForm, BCChangeLanguageDelegate>
@property (nonatomic, strong) BoldFormConfiguration *configuration;
@end
