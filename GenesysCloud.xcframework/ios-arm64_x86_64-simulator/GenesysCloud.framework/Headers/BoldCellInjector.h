
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/BoldCellData.h>

/************************************************************/
// MARK: - BoldCellInjector
/************************************************************/

@protocol BoldCellInjector
@property (nonatomic, copy, readonly) NSString *cellType;
@property (nonatomic, strong, readonly) BoldCellData *cellData;
@property (nonatomic, readonly) BOOL isValid;
- (instancetype)initWithData:(BCFormField *)cellData;
- (BOOL)validateContent:(NSString *)text;
@end
