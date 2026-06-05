
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/NRAbstractViews.h>
#import <GenesysCloud/NSBundle+BLDUIBundle.h>

@interface NRBaseNegativeFeedbckView : UIView <NRNegativeFeedback>
@property (nonatomic, weak) IBOutlet UIView *textHolder;
@property (weak, nonatomic) IBOutlet UILabel *title;
@property (weak, nonatomic) IBOutlet UIButton *closeButton;
@property (weak, nonatomic) IBOutlet UIButton *submitButton;

- (IBAction)close:(UIButton *)sender;
- (IBAction)submit:(UIButton *)sender;

- (void)addTextView:(UIView *)view;
@end
