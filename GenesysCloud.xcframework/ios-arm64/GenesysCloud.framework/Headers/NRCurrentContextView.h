
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>

@protocol NRCurrentContextViewDelegate <NSObject>

- (void)clearContext:(NSString *)context;

@end

@interface NRCurrentContextView : UIView
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, copy) NSString *concatedContext;
@property (nonatomic, weak) IBOutlet id<NRCurrentContextViewDelegate> delegate;
- (IBAction)clearContext:(UIButton *)sender;
@end
