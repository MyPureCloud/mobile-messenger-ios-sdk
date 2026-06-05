
// GenesysCloud version number: v1.8.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/BaseViewController.h>
@protocol BrowserViewControllerDelgate
- (void)didSelectLinkedArticle:(NSArray<NSURLQueryItem *> *)components;
@end

@interface BrowserViewController : BaseViewController
@property (nonatomic, copy) NSURLRequest *request;
@property (nonatomic, weak) id<BrowserViewControllerDelgate> delegate;
@end
