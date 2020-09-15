//
//  TATMediaCenter+Native.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/3/1.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"
#import <UIKit/UIKit.h>

@class TATBaseAdView;
@class TATAdConfiguration;

@interface TATMediaCenter (Native)

/**
* 全屏展示的原生插屏AD
*/
+ (TATBaseAdView *)showFullModeAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
* 全屏展示的原生插屏AD
* @param needLoading 是否需要展示loading动画（已失效）
*/
+ (TATBaseAdView *)showFullModeAdWithSlotId:(NSString *)slotId loadingOption:(BOOL)needLoading resultBlock:(void(^)(BOOL result, NSError *error))resultBlock DEPRECATED_MSG_ATTRIBUTE("Please use showFullModeAdWithSlotId:resultBlock: instead");

+ (TATBaseAdView *)showFullModeAdWithSlotId:(NSString *)slotId configuration:(TATAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
* 嵌入式原生插屏AD
*/
+ (TATBaseAdView *)initEmbedAdWithSlotId:(NSString *)slotId resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
* 嵌入式原生插屏AD
* @param needLoading 是否需要展示loading动画（已失效）
*/
+ (TATBaseAdView *)initEmbedAdWithSlotId:(NSString *)slotId loadingOption:(BOOL)needLoading resultBlock:(void(^)(BOOL result, NSError *error))resultBlock DEPRECATED_MSG_ATTRIBUTE("Please use initEmbedAdWithSlotId:resultBlock: instead");

+ (TATBaseAdView *)initEmbedAdWithSlotId:(NSString *)slotId configuration:(TATAdConfiguration *)adConfig resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
 * 原生插屏广告位获取入口素材
 */
+ (void)fetchNativeAdResourceBySlotId:(NSString *)slotId resultBlock:(void(^)(UIImage *image, NSString *exposureUrl, NSError *error))resultBlock;

+ (void)fetchNativeAdResourceBySlotId:(NSString *)slotId configuration:(TATAdConfiguration *)adConfig resultBlock:(void(^)(UIImage *image, NSString *exposureUrl, NSError *error))resultBlock;

/**
* 原生插屏AD素材曝光上报
* @param exposureUrl 曝光事件上报URL，获取入口素材的接口返回
*/
+ (void)reportNativeAdExposureWithURL:(NSString *)exposureUrl;

/**
* 设置设备号，可不传（已废弃）
* @param deviceId 默认使用iOS设备的device id
*/
+ (void)setDeviceId:(NSString *)deviceId DEPRECATED_MSG_ATTRIBUTE("Please set userId instead");

@end
