
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/DateStampConfiguration.h>
#import <GenesysCloud/UIColor+BLDUtility.h>
#import <GenesysCloud/MessageConfiguration.h>

/************************************************************/
// MARK: - ChatViewConfiguration
/************************************************************/

@interface ChatViewConfiguration : NSObject<BackgroundConfig, MessageConfigurationDateHandler>


/**
 Chat Element Date Stamp Font
 */
@property (strong, nonatomic) DateStampConfiguration * dateStamp;
@property (strong, nonatomic) DateStampConfiguration * timeStamp;
/**
 Chat hyperlink Color
 */
@property (copy, nonatomic) UIColor * hyperlinkColor;

@property (nonatomic) CGSize avatarSize;
@end
