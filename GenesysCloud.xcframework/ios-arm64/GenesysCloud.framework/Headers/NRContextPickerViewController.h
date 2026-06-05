
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloudBot/GenesysCloudBot.h>

@class NRContextPickerViewController;
@protocol NRContextPickerViewControllerDelegate <NSObject>

- (void)controller:(NRContextPickerViewController *)controller didPickContext:(NSString *)context response:(NRSearchResponse *)searchResponse;

@end

@interface NRContextPickerViewController : UIViewController
@property (nonatomic) SearchAnswer *answer;
@property (nonatomic, copy) NSArray *contextNames;
@property (nonatomic, weak) id<NRContextPickerViewControllerDelegate> delegate;
@property (nonatomic, copy) NSString *query;
@end
