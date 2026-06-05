
// GenesysCloud version number: v1.14.1
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/StorableChatElement.h>

@protocol ChatElementDelegate<NSObject>

/************************************************************/
// MARK: - Functions
/************************************************************/

/// Notifies the delegate when a new chat element is sent or received.
///
/// This delegate method is triggered whenever a new message or interaction occurs in the chat. It provides an object conforming to the `StorableChatElement` protocol, allowing the host application to handle or process the new chat element appropriately.
///
/// - Parameter item: An object conforming to the `StorableChatElement` protocol. This object contains the details of the chat element.
///
/// ## Usage
/// Implement this method in the class conforming to the delegate to handle new chat elements. This can include updating the UI, persisting the chat element to storage, or triggering other application logic.
///
/// ### Swift
/// ```swift
/// func didReceive(_ item: (any StorableChatElement)!) {
///     print("text: \(String(describing: item.text)) source: \(item.source)")
/// }
/// ```
- (void)didReceiveChatElement:(id<StorableChatElement>)item;

@optional

/**
Fetches StorableChatElement Array

@param from The index of chat item (e.g 0), paging supported
@param handler Fetch callback that gets StorableChatItem array
*/
- (void)fetch:(NSInteger)from handler:(void(^)(NSArray<id<StorableChatElement>> *elements))handler;

/**
 Remove Chat Element
 
 @param timestampId Identifier that used to remove StorableChatItem
 */
- (void)didRemoveChatElement:(NSTimeInterval)timestampId;

/**
 Update Chat Element
 
 @param timestampId The timestamp of chat element
 @param newTimestamp New timestamp for updated chat element
 @param status The status of chat element
 */
- (void)didUpdateChatElement:(NSTimeInterval)timestampId
                newTimestamp:(NSTimeInterval)newTimestamp
                      status:(StatementStatus)status;

- (void)didUpdateFeedback:(NSString *)articleId feedbackState:(FeedbackStatus)feedbackState;
@end
