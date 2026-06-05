
// GenesysCloud version number: v1.11.2
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <GenesysCloud/StorableChatElement.h>
#import <GenesysCloud/ApplicationHandler.h>

@protocol ChatControllerDelegate <ApplicationHandler>

@optional

/************************************************************/
// MARK: - Functions
/************************************************************/

/// Notifies the delegate to present the chat interface.
///
/// This delegate is triggered when the chat is configured and has established a connection. This method provides a `UINavigationController` that encapsulates the chat UI, allowing the host application to present it as needed.
///
/// - Parameter viewController: A `UINavigationController` instance that contains the chat view
///   controller. The host application can display this view controller using standard
///   presentation methods (e.g., modal presentation or pushing it onto a navigation stack).
///
/// ## Usage
/// Implement this method in the class conforming to the delegate to control how the chat interface
/// is presented. Typically, the application displays the view controller modally or pushes it onto
/// an existing navigation stack.
///
/// ### Swift
/// ```swift
/// func shouldPresentChatViewController(_ viewController: UINavigationController!) {
///     viewController.modalPresentationStyle = .overFullScreen
///     self.present(viewController, animated: true)
/// }
/// ```
- (void)shouldPresentChatViewController:(UINavigationController *)viewController;
- (void)statement:(id<StorableChatElement>)statement didFailWithError:(NSError *)error;
- (BOOL)shouldPresentWelcomeMessage;
- (BOOL)shouldHandleFormPresentation:(UIViewController *)formController;
- (void)updateCustomAttributes:(NSDictionary<NSString *, NSString *> *)customAttributes;

/// Notifies the delegate of a change in the chat's state.
///
/// This delegate is triggered when there is a change in the chat state. The host application can monitor and respond to state changes, such as when a chat starts, disconnects, or ends.
///
/// - Parameter event: A `ChatStateEvent` instance representing the current state of the chat.
///   The `ChatState` enumeration defines the possible states of the chat lifecycle.
///
/// ## Chat States
/// The chat can be in one of the following states, represented by the `ChatState` enum (raw values in parentheses):
///
/// - `chatCreated (1)`: The chat session has been created but not started.
/// - `chatStarted (2)`: The chat session has started.
/// - `chatPreparing (3)`: The chat is preparing socket connection.
/// - `chatPrepared (4)`: The chat has been prepared, configuration fetched and is ready.
/// - `chatDisconnected (5)`: The chat has been disconnected in case of an error.
/// - `chatReconnecting (6)`: The chat is attempting to reconnect.
/// - `chatReconnected (7)`: The chat has successfully reconnected.
/// - `chatEnding (8)`: The chat is in the process of ending.
/// - `chatEnded (9)`: The chat session has ended.
/// - `chatClosed (10)`: The chat has closed.
/// - `unavailable (18)`: The chat is unavailable.
///
/// ## Usage
/// Implement this method in the delegate to respond to changes in the chat's lifecycle.
/// Common use cases include updating the UI, logging chat state transitions, or performing
/// actions based on specific states.
///
/// ### Swift
/// ```swift
/// func didUpdateState(_ event: ChatStateEvent) {
///     switch event.state {
///     case .chatStarted:
///         print("Chat started!")
///     case .chatEnded:
///         print("Chat ended.")
///     default:
///         print("Chat state changed: \(event.state.rawValue)")
///     }
/// }
/// ```
- (void)didUpdateState:(ChatStateEvent *)event;

- (void)didClickToCall:(NSString *)phoneNumber;

/*
Notifies about upload file button click.

@param fileSelectionCallback The callback to be called once file was selected.
*/
- (void)didClickUploadFile;

/// Notifies the delegate of an error in the chat.
///
/// - Parameter error: A `GCError` instance that contains details about the error
///
/// This delegate is triggered when an error occurs in the chat, providing the delegate with a
/// `GCError` object that contains details about the error. The delegate can use this
/// information to handle the error appropriately, such as displaying an error message or
/// taking corrective action.
///
/// ## Usage
/// Implement this method in the delegate to handle errors occurring during the chat lifecycle.
/// Depending on the error type, you can display an appropriate message, retry an action,
/// or log the issue for debugging purposes.
///
/// ### Swift
/// ```swift
/// func didFailWithError(_ error: GCError) {
///     print("Chat error occurred: \(error.errorDescription ?? "Unknown error")")
///     switch error.errorType {
///     default:
///         print("An unknown error occurred.")
///     }
/// }
/// ```
///
/// ## GCError Properties
/// The `GCError` class provides the following information:
///
/// - `error`: The underlying `Error` object, if available, for debugging or detailed error handling.
/// - `errorType`: An enum of type `ChatError` representing the specific type of error. Common values might include:
///   - `.connectionError`
///   - `.sessionExpiration`
///   - `.accountIsNotValid`
/// - `errorDescription`: A human-readable description of the error to assist in debugging or displaying messages.
- (void)didFailWithError:(GCError *)error;

/// Attempts to reconnect an active or disconnected chat session.
///
/// The implementation of this method should initiate a reconnection process for a chat session that has been interrupted or disconnected.
/// Use this method to restore the chat connection when issues such as network interruptions occur.
///
/// ## Implementation
/// The implementation should always delegate to the chat controller’s `reconnectChat` method as follows:
///
/// ```swift
/// func reconnectChat() {
///     self.chatController.reconnectChat()
/// }
/// ```
///
/// ## Usage
/// Call this method when the chat session disconnects to reconnect.
///
/// ## Notes
/// - Ensure the `chatController` is properly initialized before calling this method.
/// - The reconnection process may fail if the session has ended or the service is unavailable.
- (void)reconnectChat;

- (void)didLogoutChat;
@end
