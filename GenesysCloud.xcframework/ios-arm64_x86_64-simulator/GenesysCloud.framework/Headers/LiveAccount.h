
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloudCore/GenesysCloudCore.h>
#import <GenesysCloudBold/LiveAccountExtraData.h>

/************************************************************/
// MARK: - LiveAccount
/************************************************************/

@interface LiveAccount : NSObject

/************************************************************/
// MARK: - Properties
/************************************************************/

/**
 The extra data of account.
 */
@property (nonatomic, strong) LiveAccountExtraData *extraData;
@property (nonatomic, strong) NSString *apiKey;
@property (nonatomic, strong) NSString *info;
@end
