
// GenesysCloud version number: v1.5.0
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

@interface LiveAccount : Account

/************************************************************/
// MARK: - Properties
/************************************************************/

/**
 The extra data of account.
 */
@property (nonatomic, strong) LiveAccountExtraData *extraData;

@end
