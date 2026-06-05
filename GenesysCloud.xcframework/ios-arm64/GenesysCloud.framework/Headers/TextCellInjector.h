
// GenesysCloud version number: v1.4.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/BoldCellInjector.h>
#import <GenesysCloudBold/NSString+BCValidation.h>

@interface TextCellInjector : NSObject <BoldCellInjector>
@property (nonatomic, readonly) UIKeyboardType keyboardType;
@property (nonatomic) BOOL isValid;
@end
