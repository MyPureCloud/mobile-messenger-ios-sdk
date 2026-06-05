
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloudBold/BCFormFieldOption.h>

//@protocol BoldFormSelectionDelegate
//- (void)didSelectOption:(BCFormFieldOption *)option;
//@end

@protocol BoldFormSelection
- (UIViewController *)controllerForSelection:(NSArray<BCFormFieldOption *> *)options
                                  completion:(void (^)(BCFormFieldOption *option))selectionHandler;

@end
