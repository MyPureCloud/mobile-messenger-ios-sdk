
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudBold/BCFormField.h>
#import <UIKit/UITextInputTraits.h>

@interface BoldCellData : NSObject
@property (nonatomic, strong, readonly) BCFormField *data;
@property (nonatomic, readonly) UIKeyboardType keyboardType;
- (instancetype)initWithData:(BCFormField *)data;
- (instancetype)initWithData:(BCFormField *)data keyboardType:(UIKeyboardType)type;
@end
