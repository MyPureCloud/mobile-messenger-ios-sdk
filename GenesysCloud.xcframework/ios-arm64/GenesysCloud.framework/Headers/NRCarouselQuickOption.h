
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/NRQuickOption.h>

typedef NS_ENUM(NSInteger, CarouselLayout) {
    CarouselLayoutDefault,
    CarouselLayoutDetailed
};

@interface NRCarouselQuickOption : NRQuickOption
@property (nonatomic) CarouselLayout layout;
@property (nonatomic, copy) NSString *bottomText;
@property (nonatomic, copy) NSString *optionDescription;
@property (nonatomic, copy) NSString *imagePath;
@end
