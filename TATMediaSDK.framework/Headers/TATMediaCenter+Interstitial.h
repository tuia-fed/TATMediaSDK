//
//  TATMediaCenter+Interstitial.h
//  TATMediaSDK
//
//  Created by wuleslie on 2019/12/12.
//  Copyright © 2019 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"

@class TATBaseAdView;

@interface TATMediaCenter (Interstitial)

/**
 * 展示插屏AD
 * @version 1.1.0.0
 */
+ (TATBaseAdView *)showInterstitialWithSlotId:(NSString *)slotId;

+ (TATBaseAdView *)showInterstitialWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock closeBlock:(void(^)(void))closeBlock;

+ (TATBaseAdView *)showInterstitialWithSlotId:(NSString *)slotId configuration:(TATAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

@end
