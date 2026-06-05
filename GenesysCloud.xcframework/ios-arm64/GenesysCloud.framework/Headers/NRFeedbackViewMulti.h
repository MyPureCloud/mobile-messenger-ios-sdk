
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/NRBaseNegativeFeedbckView.h>
#import <GenesysCloud/MultipleChoiceView.h>

@interface NRFeedbackViewMulti : NRBaseNegativeFeedbckView
@property (strong, nonatomic) MultipleChoiceView *multipleChoiceView;
@end
