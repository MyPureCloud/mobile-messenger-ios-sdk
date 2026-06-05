
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloudBot/GenesysCloudBot.h>
#import <GenesysCloud/NRResultsView.h>
#import <GenesysCloud/ChannelPickerDelegate.h>
#import <GenesysCloud/BaseViewController.h>

@interface NRNoAnswerViewController : BaseViewController
@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic) NRResult *result;
@property (nonatomic, copy) NSArray<NRFAQGroup *> *groups;
@property (weak, nonatomic) IBOutlet NRResultsView *resultsView;
@property (weak, nonatomic) id<NRResultsViewDelegate> resultsViewDelegate;
@property (weak, nonatomic) id<ChannelPickerDelegate> delegate;
@end
