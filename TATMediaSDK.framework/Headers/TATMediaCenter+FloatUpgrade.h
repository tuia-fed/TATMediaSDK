//
//  TATMediaCenter+FloatUpgrade.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/9/15.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"
#import <UIKit/UIKit.h>

@class TATBaseAdView;
@class TATFloatUpgradeAdConfiguration;

@interface TATMediaCenter(FloatUpgrade)

/**
* 悬浮升级AD
* @version V3.0.2.0
*/
+ (TATBaseAdView *)showFloatAdWithSlotId:(NSString *)slotId configuration:(TATFloatUpgradeAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
 * 为了避免浮标被遮挡，在添加其他可能遮挡的view后，调用此方法将浮标移到视图层级的最前面。
 */
+ (void)bringViewToFront:(TATBaseAdView *)floatAdView;

@end

