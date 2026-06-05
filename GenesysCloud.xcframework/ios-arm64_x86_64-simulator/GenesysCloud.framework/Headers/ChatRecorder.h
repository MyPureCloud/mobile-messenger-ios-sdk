
// GenesysCloud version number: v1.7.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import <GenesysCloud/ChatElementDelegate.h>

@interface ChatRecorder : NSObject <ChatElementDelegate>
/**
 Parse stored elements into string.
 
 @return returns parsed string from chet elements.
 */
- (NSString *)transcript;
- (void)clearTranscript;

- (id<StorableChatElement>)itemById:(NSString *)Id;
@end
