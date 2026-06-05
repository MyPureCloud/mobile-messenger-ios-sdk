
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/BoldCellInjector.h>

/************************************************************/
// MARK: - CellInjectorFactory
/************************************************************/

@interface CellInjectorFactory : NSObject
+ (id<BoldCellInjector>)createInjector:(BCFormField *)cellData;
@end
