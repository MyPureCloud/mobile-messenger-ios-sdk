
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/ChannelPickerDelegate.h>
#import <GenesysCloud/ReadMoreViewConfiguration.h>


@class NRResultPresntationView;
@protocol NRResultPresntationViewControllerDelegate <NSObject>

- (void)didDismissResult;
- (void)didDislikeResult:(NRResultPresntationView *)resultView;
- (void)sendFeedback:(int)feedbackType
          resultView:(NRResultPresntationView *)resultView
           completion:(void(^)(NSString *resultId, int type, BOOL success))completion;
- (void)updateChannelsAtResultview:(NRResultPresntationView *)resultView;
- (void)resultView:(NRResultPresntationView *)resultView didSelectLinkedArticle:(NSURLComponents *)components;
- (void)resultView:(NRResultPresntationView *)resultView didClickLink:(NSURLRequest *)request;
@end

@interface NRResultPresntationView : UIView
@property (nonatomic) CGFloat startY;
@property (nonatomic, strong) NRResult *result;
@property (nonatomic, copy) NSArray<NRChanneling *> *channels;
@property (nonatomic, weak) id<NRResultPresntationViewControllerDelegate> delegate;
@property (nonatomic, weak) id<ChannelPickerDelegate> channelPickerDelegate;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) BOOL withAnimation;
@property (nonatomic, copy) NSNumber *likeState;
@property (strong, nonatomic) ReadMoreViewConfiguration *config;

- (void)cancelDislike;
@end
