
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>

@protocol NRSearchBarDelegate <NSObject>
- (void)fetchSuggestions:(NSString *)text;
- (void)search:(NSString *)text;
- (void)clear;
- (void)removeSuggestions;
@end
