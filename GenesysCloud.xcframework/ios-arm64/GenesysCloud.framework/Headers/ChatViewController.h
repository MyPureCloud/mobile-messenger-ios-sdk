
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/ChatHandler.h>
#import <GenesysCloud/ChatElementDelegate.h>
#import <GenesysCloud/LocalChatElement.h>
#import <GenesysCloud/SpeechReconitionDelegate.h>
#import <GenesysCloud/ChatConfiguration.h>
#import <GenesysCloud/ViewConfiguration.h>

/************************************************************/
// MARK: - ChatViewController
/************************************************************/

@interface ChatViewController : UIViewController<ChatHandlerDelegate>

@property (nonatomic, strong) id<ViewConfiguration> viewConfiguration;

/**
 `ChatHandler` used as Bot/ Handover handler
 */
@property (nonatomic, strong) id<ChatHandler> chatHandler;

/**
 `ChatEventHandler` object used to handle events on chat.
 */
@property (nonatomic, strong) id<ChatEventHandler> chatEventHandler;

/**
 `SpeechReconitionDelegate` object used to manage speech recognition status.
 */
@property (nonatomic, weak) id<SpeechReconitionDelegate> speechReconitionDelegate;

/**
 `ChatConfiguration` object used to manage speech recognition status.
 */
@property (nonatomic, strong) ChatConfiguration *config;

@end
