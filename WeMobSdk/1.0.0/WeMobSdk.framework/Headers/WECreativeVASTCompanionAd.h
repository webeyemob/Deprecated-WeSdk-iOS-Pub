//
//  WECreativeVASTCompanionAd.h
//
//  Copyright 2018-2019 Twitter, Inc.
//  Licensed under the Webeye SDK License Agreement

//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WECreativeVASTModel.h"

@interface WECreativeVASTCompanionAd : WECreativeVASTModel

@property (nonatomic, readonly) CGFloat assetHeight;
@property (nonatomic, readonly) CGFloat assetWidth;
@property (nonatomic, copy, readonly) NSURL *clickThroughURL;
@property (nonatomic, readonly) NSArray *clickTrackingURLs;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) NSArray *HTMLResources;
@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *iframeResources;
@property (nonatomic, readonly) NSArray *staticResources;
@property (nonatomic, readonly) NSDictionary *trackingEvents;
@property (nonatomic, readonly) CGFloat width;

@end
