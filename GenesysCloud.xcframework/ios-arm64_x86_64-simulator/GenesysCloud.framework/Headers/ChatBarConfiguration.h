
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/InfoViewConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

/************************************************************/
// MARK: - ChatBarConfiguration
/************************************************************/

@interface ChatBarConfiguration : InfoViewConfiguration
@property (strong, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *agentName;
@property (copy, nonatomic) NSString *endChatBtnTitle;
@property (copy, nonatomic) UIColor *endChatBtnTextColor;
@property (strong, nonatomic) UIImage * _Nullable userTranscriptBtnImage;
@property (assign, nonatomic) BOOL endChatButtonEnabled;
@property (assign, nonatomic) BOOL enabled;
@end

NS_ASSUME_NONNULL_END
