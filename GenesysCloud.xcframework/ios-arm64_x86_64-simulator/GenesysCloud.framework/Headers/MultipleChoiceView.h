
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

@interface MultipleChoiceView : UIView
@property (nonatomic, copy) NSString *firstOptionText;
@property (nonatomic, copy) NSString *secondOptionText;
@property (nonatomic, copy, readonly) NSString *pickedAnswer;
@property (nonatomic, readonly) int action;
@end
