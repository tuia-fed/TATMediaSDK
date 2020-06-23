//
//  TATMediaCenter+TextLink.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/6/9.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"

@class TATBaseAdView;
@class TATTextLinkAdConfiguration;

@interface TATMediaCenter(TextLink)
/**
 * 文字链类型的AD
 */
+ (TATBaseAdView *)initTextLinkAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

+ (TATBaseAdView *)initTextLinkAdWithSlotId:(NSString *)slotId configuration:(TATTextLinkAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

@end
