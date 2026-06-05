
// GenesysCloud version number: v1.13.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@protocol ApplicationHandler <NSObject>
@optional

/// Notifies the delegate that a link in the chat was tapped.
///
/// Optional delegate. The `didClickLink` delegate is triggered when the user interacts with a tappable link in chat messages. The host application can provide custom implementation. If the delegate is not implemented by the host application, links retain their default tap behavior, otherwise the host application is responsible for handling links.
///
/// - Parameter url: A string representing the URL of the tapped link.
///
/// ## Usage
/// Implement this method in the class conforming to the delegate to handle link interactions.
/// You can use this method to open a web view, navigate to another part of the app, or perform
/// any action specific to the link tapped by the user.
///
/// ### Swift
/// ```swift
/// func didClickLink(_ url: String) {
///     // Example: Open the URL in Safari
///     if let url = URL(string: url) {
///         UIApplication.shared.open(url, options: [:], completionHandler: nil)
///     }
/// }
/// ```
- (void)didClickLink:(NSString *)url;
- (BOOL)presentingController:(UIViewController *)controller shouldHandleClickedLink:(NSString *)link;
@end

NS_ASSUME_NONNULL_END
