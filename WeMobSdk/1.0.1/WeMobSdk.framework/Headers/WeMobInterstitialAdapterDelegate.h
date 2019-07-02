//
//  WeMobInterstitialAdapterDelegate.h
//  WeMobSdk
//
//  Created by 王航 on 2019/6/18.
//

#import <Foundation/Foundation.h>
#import "WeMobAdError.h"

@protocol WeMobInterstitialAdapterDelegate<NSObject>

- (void)interstitialDidReceiveAd;
- (void)interstitialDidFailToReceiveAdWithError:(WeMobAdError *)adError;
- (void)interstitialWillPresentScreen;
- (void)interstitialDidDismissScreen;
- (void)interstitialWillLeaveApplication;

@end
