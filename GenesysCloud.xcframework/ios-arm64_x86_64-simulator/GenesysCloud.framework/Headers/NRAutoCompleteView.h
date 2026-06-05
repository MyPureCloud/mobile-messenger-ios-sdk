
// GenesysCloud version number: v1.8.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

@protocol NRAutoCompleteViewDelegate <NSObject>

- (void)searchText:(NSString *)text;

@end

@interface NRAutoCompleteView : UIView
@property (nonatomic, copy) NSArray<NSAttributedString *> *suggestions;
@property (nonatomic, weak) id<NRAutoCompleteViewDelegate> delegate;
@end
