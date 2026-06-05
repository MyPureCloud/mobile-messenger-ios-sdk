
// GenesysCloud version number: v1.7.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AlertSelection) {
    AlertSelectionCancel,
    AlertSelectionIncorrectAnswer,
    AlertSelectionWrongInformation,
    AlertSelectionIrrelevant
};

@interface NRAlertViewController : UIViewController
@property (nonatomic, copy) void(^completion)(AlertSelection selection);
@property (nonatomic, copy) NSDictionary *localeDict;
@end
