//
//  TATMediaCenter+Native.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/3/1.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TATNativeAdType){
    TATNativeAdTypeInterstitial, // 插屏式
    TATNativeAdTypeEmbed, // 嵌入式
};

@class TATBaseAdView;

@interface TATMediaCenter (Native)

/**
* 全屏展示的原生插屏AD
* @param needLoading 是否需要展示loading动画
*/
+ (void)showFullModeAdWithSlotId:(NSString *)slotId loadingOption:(BOOL)needLoading resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
* 嵌入式原生插屏AD
* @param needLoading 是否需要展示loading动画
*/
+ (TATBaseAdView *)initEmbedAdWithSlotId:(NSString *)slotId loadingOption:(BOOL)needLoading resultBlock:(void(^)(BOOL result, NSError *error))resultBlock;

/**
* 设置设备号，可不传
* @param deviceId 默认使用iOS设备的devic id
*/
+ (void)setDeviceId:(NSString *)deviceId;

@end

NS_ASSUME_NONNULL_END
