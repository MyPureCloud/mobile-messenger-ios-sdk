
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudBot/SupportCenterItem.h>
#import <GenesysCloud/LabelDelegate.h>
#import <GenesysCloudBot/BotAccount.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SupportCenterDataSource : NSObject

- (instancetype)initWithAccount:(BotAccount *)account;

@property (nonatomic, strong) id<SupportCenterItem> item;
@property (nonatomic, strong) id<LabelDelegate> delegate;
@property (nonatomic, readonly) NSInteger size;
- (id<SupportCenterItem>)itemAtIndex:(NSInteger)index;
- (UIImage *)fetchIconForIndex:(NSInteger)index;
- (void)updateCurrentSelection;
- (void)back;
@end

NS_ASSUME_NONNULL_END
