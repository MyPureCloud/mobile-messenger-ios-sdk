
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/MessageConfiguration.h>

/************************************************************/
// MARK: - OutgoingConfiguration
/************************************************************/

@interface OutgoingConfiguration : MessageConfiguration
@property (nonatomic, strong) UIImage *sentSuccessfullyIcon;
@property (nonatomic, strong) UIImage *sentFailureIcon;
@property (nonatomic, strong) UIImage *pendingIcon;
@end
