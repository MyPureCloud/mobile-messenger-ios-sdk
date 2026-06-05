
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/NRResultPresntationView.h>
#import <GenesysCloud/NRAbstractViews.h>

@class NRNegativeFeedbackViewController;
@protocol NRNegativeFeedbackViewControllerDelegate <NSObject>

- (void)didSubmitNegativeFeedback:(NRNegativeFeedbackViewController *)controller;
- (void)didCancelFeedback:(NRNegativeFeedbackViewController *)controller;
- (void)shouldUpdateChannels:(NRNegativeFeedbackViewController *)controller;

@end

@interface NRNegativeFeedbackViewController : UIViewController
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, weak) id<NRNegativeFeedbackViewControllerDelegate> deleagte;
@property (nonatomic, weak) NRResultPresntationView *presentationView;
@property (nonatomic, copy, readonly) NSString *text;
@property (nonatomic, copy, readonly) NSString *pickedOption;
@property (nonatomic, strong) UIView <NRNegativeFeedback> *popupView;
@end
