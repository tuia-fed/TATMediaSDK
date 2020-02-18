//
//  TATMediaCenter+Interstitial.h
//  TATMediaSDK
//
//  Created by wuleslie on 2019/12/12.
//  Copyright © 2019 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"

@interface TATMediaCenter (Interstitial)

/**
 * 展示插屏AD
 */
+ (void)showInterstitialWithSlotId:(NSString *)slotId;

+ (void)showInterstitialWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock closeBlock:(void(^)(void))closeBlock;

@end
