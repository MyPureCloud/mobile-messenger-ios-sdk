
// GenesysCloud version number: v1.6.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloudCore/ChatBarModel.h>
#import <GenesysCloud/ChatBarConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - ChatBarDelegate
/************************************************************/

@protocol ChatBarDelegate <NSObject>

- (void)didClickEndChat;
- (void)didClickUserTranscript;

@end

/************************************************************/
// MARK: - ChatBarViewController
/************************************************************/

@interface ChatBarViewController : UIViewController
@property (nonatomic, strong) ChatBarModel *data;
@property (nonatomic, weak) id<ChatBarDelegate> delegate;
///  Chat Bar Configuration
@property (strong, nonatomic, readonly) ChatBarConfiguration *config;
@end

NS_ASSUME_NONNULL_END
