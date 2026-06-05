
// GenesysCloud version number: v1.8.0
// ===================================================================================================
// Copyright © 2021 GenesysCloud(Genesys).
// GenesysCloud SDK.
// All rights reserved.
// ===================================================================================================

#import <UIKit/UIKit.h>
#import <GenesysCloudBot/GenesysCloudBot.h>
#import <GenesysCloud/NRDefaultViewAdapter.h>



@interface NRResult : NSObject
- (instancetype)initWithResult:(NRQueryResult *)queryResult;
@property (nonatomic, readonly) NRQueryResult *queryResult;
@property (nonatomic, getter=isSingle) BOOL single;
@property (nonatomic, getter=isUnfolded) BOOL unfolded;
@property (nonatomic) CGFloat height;
@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, copy) NSString *kb;
@property (nonatomic) CGFloat y;
@property (nonatomic) NRDefaultViewAdapter *viewAdapter;
@end
