//
//  TATMediaCenter+Standard.h
//  TATMediaSDK
//
//  Created by wuleslie on 2019/12/9.
//  Copyright © 2019 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"
#import <UIKit/UIKit.h>

@class TATBaseAdView;
@class TATLaunchAdConfiguration;

@interface TATMediaCenter (Standard)

/**
 * 开屏AD
 */
+ (TATBaseAdView *)showLaunchAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;
/**
* 开屏AD
* @param closeBlock 广告关闭的回调，isClosedByUser标识是否用户手动点击了跳过
*/
+ (TATBaseAdView *)showLaunchAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock closeBlock:(void(^)(BOOL isClosedByUser))closeBlock;
/**
* 开屏AD，支持配置等待时长
* @version V2.0
*/
+ (TATBaseAdView *)showLaunchAdWithSlotId:(NSString *)slotId configuration:(TATLaunchAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
 * 横幅、浮标、banner等类型的AD
 */
+ (TATBaseAdView *)initSimpleAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
 * 横幅、浮标、banner等类型的AD，带close block
 */
+ (TATBaseAdView *)initSimpleAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock closeBlock:(void(^)(void))closeBlock;

+ (TATBaseAdView *)initSimpleAdWithSlotId:(NSString *)slotId configuration:(TATAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
 * 信息流AD
 * @version V2.0
 */
+ (TATBaseAdView *)initInfoFlowAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;
/**
* 信息流AD，支持动态配置appKey、appSecret，若不需要，可选用上面的接口
* @version V2.0
*/
+ (TATBaseAdView *)initInfoFlowAdWithSlotId:(NSString *)slotId configuration:(TATAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

@end

