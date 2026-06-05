
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <GenesysCloudBot/SupportCenterItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface SupportCenterLabel: NSObject <SupportCenterItem>
@property (nonatomic) NSDictionary *icons;
@property (nonatomic, copy) NSString *color;
@property (nonatomic) BOOL isSupportCenterLabel;
@property (nonatomic, copy) NSString *metaDesc;
@property (nonatomic, copy) NSString *metaTitle;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *textColor;
@property (nonatomic, copy) NSDictionary *faqs;
@end

NS_ASSUME_NONNULL_END
