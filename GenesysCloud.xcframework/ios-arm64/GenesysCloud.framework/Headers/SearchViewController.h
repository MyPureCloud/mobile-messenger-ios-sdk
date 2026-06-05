
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloudBot/NRConversationalResponse.h>
#import <GenesysCloud/SearchView.h>
#import <GenesysCloud/AutoCompleteView.h>
#import <GenesysCloudCore/Account.h>
#import <GenesysCloud/TrackingUsageConstants.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AutoCompletePickDelegate <NSObject>
@optional
- (void)didSelectSuggestion:(NSString *)articleId query:(NSString *)query;
- (void)didFailToFetchAnArticleWithError:(NSError *)error;

@end

@interface SearchViewController : UIViewController <SearchViewDelegate>


- (void)reset;
- (void)softReset;

@property (nonatomic, strong) Account *account;
@property (nonatomic, weak) id<SearchViewControllerDelegate> delegate;

// If the app is implementing this protocol it will get the article.
@property (nonatomic, weak) id<AutoCompletePickDelegate> articlePickDelegate;

@property (weak, nonatomic) IBOutlet UILabel *placeholderLabel;

@property (nonatomic, assign) BOOL autoCompleteOnTop;
@property (nonatomic, weak) IBOutlet SearchView *searchView;
@property (nonatomic, strong) SearchViewConfiguration *configuration;
@property (nonatomic, weak) IBOutlet AutoCompleteView *autoCompleteView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *textViewTopConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *textViewBottomConstraint;
@end

NS_ASSUME_NONNULL_END
