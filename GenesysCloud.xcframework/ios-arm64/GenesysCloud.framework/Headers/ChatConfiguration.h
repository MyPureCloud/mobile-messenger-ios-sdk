
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/IncomingBotConfiguration.h>
#import <GenesysCloud/MultipleSelectionConfiguration.h>
#import <GenesysCloud/IncomingLiveConfiguration.h>
#import <GenesysCloud/OutgoingConfiguration.h>
#import <GenesysCloud/SystemMessageConfiguration.h>
#import <GenesysCloud/InfoViewConfiguration.h>
#import <GenesysCloud/SearchViewConfiguration.h>
#import <GenesysCloud/ReadMoreViewConfiguration.h>
#import <GenesysCloud/ChatBarConfiguration.h>
#import <GenesysCloud/BoldFormConfiguration.h>
#import <GenesysCloudAccessibility/VoiceToVoiceConfiguration.h>
#import <GenesysCloud/ChatViewConfiguration.h>

/************************************************************/
// MARK: - ChatConfiguration
/************************************************************/

@interface ChatConfiguration : NSObject

/**
 Chat View Configuration
 */
@property(strong, nonatomic, readonly) ChatViewConfiguration *chatViewConfig;

/**
 Incoming Bot Configuration
 */
@property(strong, nonatomic) IncomingBotConfiguration *incomingBotConfig;

/**
 Multiple Selection Bot Configuration
 */
@property(strong, nonatomic) MultipleSelectionConfiguration *multipleSelectionConfiguration;

/**
 Incoming Live Configuration
 */
@property(strong, nonatomic, readonly) IncomingLiveConfiguration *incomingLiveConfig;

/**
 Outgoing Configuration
 */
@property(strong, nonatomic, readonly) OutgoingConfiguration *outgoingConfig;

/**
 System Message Configuration
 */
@property(strong, nonatomic, readonly) SystemMessageConfiguration *systemMessageConfig;

/**
 Queue View Configuration
 */
@property(strong, nonatomic, readonly) InfoViewConfiguration *queueViewConfig;

/**
Search View Configuration
*/
@property(strong, nonatomic, readonly) SearchViewConfiguration *searchViewConfig;

/**
Read More View Configuration
*/
@property(strong, nonatomic, readonly) ReadMoreViewConfiguration *readMoreViewConfig;

/**
Chat Bar Configuration
*/
@property(strong, nonatomic, readonly) ChatBarConfiguration *chatBarConfiguration;

/**
VoiceToVoiceConfiguration
*/
@property(strong, nonatomic, readonly) VoiceToVoiceConfiguration *voiceToVoiceConfiguration;

/**
Bold Live Form Configuration
*/
@property(strong, nonatomic, readonly) BoldFormConfiguration *formConfiguration;
@end
