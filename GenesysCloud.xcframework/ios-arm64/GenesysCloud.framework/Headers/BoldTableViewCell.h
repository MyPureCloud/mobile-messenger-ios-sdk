
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/BoldCellInjector.h>
#import <GenesysCloud/CustomFont.h>
#import <GenesysCloud/BoldFormConfiguration.h>

@protocol BoldTableViewCell

@property (nonatomic, copy, readonly) NSString *cellID;
@property (nonatomic, copy) NSArray *array;
@property(nonatomic, copy) BoldFormConfiguration *config;
- (void)inject:(id<BoldCellInjector>)injector;

@end
