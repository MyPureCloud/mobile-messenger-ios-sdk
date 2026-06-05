
// GenesysCloud version number: v1.5.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/SearchViewControllerDelegate.h>
#import <GenesysCloud/SearchViewConfiguration.h>
#import <GenesysCloud/SearchViewPresentationState.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SearchViewDelegate <NSObject>

- (void)didTypeText:(NSString *)text;
- (void)updateHeight:(CGFloat)updateHeight isUpdate:(BOOL)isUpdate;
- (void)didClickUploadFile;
- (void)shouldStartRecording;
- (void)shouldStopRecording;
- (void)shouldStopReadout;
- (void)didSubmitText:(NSString *)text;
- (void)isTyping:(BOOL)isTyping;

@property (nonatomic, assign, getter=isPlaceholderVisible) BOOL placeholderVisible;
@property (nonatomic, copy) NSString *placeholderText;
@end

@interface SearchView : UIStackView
- (void)reset;
- (void)softReset;

@property (weak, nonatomic) id<SearchViewDelegate> delegate;
@property (weak, nonatomic) id<SearchViewControllerDelegate> searchViewControllerDelegate;
@property (nonatomic, strong) SearchViewConfiguration *configuration;
@property (weak, nonatomic) IBOutlet UIButton *sendButton;
@property (weak, nonatomic) IBOutlet UITextView *textView;

#pragma mark Speech
@property (weak, nonatomic) IBOutlet UIButton *speechButton;
#pragma mark Readout
@property (weak, nonatomic) IBOutlet UIButton *readoutButton;
#pragma mark GrowingTextView
@property (weak, nonatomic) IBOutlet UIButton *fileUploadButton;
@property (nonatomic, assign) PresentationState state;
@end

NS_ASSUME_NONNULL_END
