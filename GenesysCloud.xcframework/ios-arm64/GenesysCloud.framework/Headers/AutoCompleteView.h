
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/SearchViewConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AutoCompleteViewDelegate <NSObject>

- (void)didPickSuggestion:(NSDictionary<NSString *,id<NSCopying>> *)suggestion;
- (void)updateHeight:(CGFloat)diff isUpdate:(BOOL)isUpdate; //TODO: Check this is working when we implement autocomplete

@end

@interface AutoCompleteView : UITableView
@property (nonatomic, copy)  NSArray<NSDictionary<NSString *,id<NSCopying>> *> * _Nullable suggestions;
@property (nonatomic, weak) id<AutoCompleteViewDelegate> _Nullable autoCompleteDelegate;
@property (nonatomic, strong) AutoCompleteConfiguration *configuration;
@end

NS_ASSUME_NONNULL_END
