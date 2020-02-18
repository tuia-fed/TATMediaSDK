//
//  TATMediaCenter+Standard.h
//  TATMediaSDK
//
//  Created by wuleslie on 2019/12/9.
//  Copyright © 2019 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"
#import <UIKit/UIKit.h>

@interface TATMediaCenter (Standard)

/**
 * 开屏AD
 */
+ (void)showLaunchAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;
/**
* 开屏AD
* @param closeBlock 广告关闭的回调，isClosedByUser标识是否用户手动点击了跳过
*/
+ (void)showLaunchAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock closeBlock:(void(^)(BOOL isClosedByUser))closeBlock;

/**
 * 横幅、浮标、banner等类型的AD
 */
+ (UIView *)initSimpleAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

@end

