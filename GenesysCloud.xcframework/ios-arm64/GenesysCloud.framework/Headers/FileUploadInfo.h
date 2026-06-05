
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

/************************************************************/
// MARK: - FileUploadInfo
/************************************************************/

@interface FileUploadInfo : NSObject
@property (nonatomic, copy)NSString *fileDescription;
@property (nonatomic, strong)NSError *error;
@end

