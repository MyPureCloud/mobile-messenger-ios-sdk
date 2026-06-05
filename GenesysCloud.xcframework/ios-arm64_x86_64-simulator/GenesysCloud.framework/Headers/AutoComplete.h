
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudCore/GenesysCloudCore-Swift.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AutoCompleteControllerDelegate <NSObject>

- (void)shouldPresentAutoCompleteViewController:(UIViewController *)controller;
- (void)controller:(UIViewController *)controller updateHeight:(CGFloat)height;
- (void)didPickSuggestion:(NSDictionary *)suggestion;

@end

@protocol AutoComplete <NSObject>
@property (nonatomic, readonly) Account *account;
@end

NS_ASSUME_NONNULL_END
