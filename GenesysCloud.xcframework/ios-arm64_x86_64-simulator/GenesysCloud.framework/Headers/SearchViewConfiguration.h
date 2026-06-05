
// GenesysCloud version number: v1.4.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloud/AutoCompleteConfiguration.h>
#import <GenesysCloud/PlaceholderConfiguration.h>
#import <GenesysCloudAccessibility/VoiceToVoiceConfiguration.h>


NS_ASSUME_NONNULL_BEGIN
@interface Border : NSObject
/**
 The width of the layer's border, inset from the layer bounds.
 The border is composited above the layer's content and sublayers and includes the effects of the `cornerRadius' property.
 Defaults to zero.
 */
@property (nonatomic) CGFloat width;
/**
 The color of the layer's border. Defaults to opaque black.
 */
@property (nonatomic, copy) UIColor * _Nullable color;
/**
 When positive, the background of the layer will be drawn with
 rounded corners. Defaults to zero.
 */
@property (nonatomic) CGFloat cornerRadius;
@end

@interface SearchViewConfiguration : TextConfiguration
@property (nonatomic, strong) AutoCompleteConfiguration * _Nullable autoCompleteConfiguration;
@property (nonatomic, strong) PlaceholderConfiguration * _Nullable placeholderConfiguration;
@property (nonatomic, strong) UIImage * _Nullable speechOnIcon;
@property (nonatomic, strong) UIImage * _Nullable speechOffIcon;
@property (nonatomic, strong) UIImage * _Nullable readoutIcon;
@property (nonatomic, strong) UIImage * _Nullable sendIcon;
@property (nonatomic, strong) UIImage * _Nullable uploadIcon;
@property (nonatomic, strong) Border * border;
// whether or not to enable recording
@property (nonatomic, copy) NSNumber *voiceEnabled;
//  Specifies the BCP-47 language tag representing the language for voice recognition.
/// Examples: en-US (U.S. English), fr-CA (French Canadian)
@property (nonatomic, copy) NSString *languageCode;
@end

NS_ASSUME_NONNULL_END
