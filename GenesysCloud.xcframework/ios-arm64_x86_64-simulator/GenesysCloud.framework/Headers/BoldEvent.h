
// GenesysCloud version number: v1.7.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/FileUploadInfo.h>

NS_ASSUME_NONNULL_BEGIN


@interface BoldEvent: NSObject

+ (BoldEvent *)fileUploaded:(FileUploadInfo *)data;
@end



NS_ASSUME_NONNULL_END
