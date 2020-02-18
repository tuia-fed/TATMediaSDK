//
//  TATMediaCenter+Custom.h
//  TATMediaSDK
//
//  Created by wuleslie on 2019/12/16.
//  Copyright © 2019 wuleslie. All rights reserved.
//

#import "TATMediaCenter.h"

NS_ASSUME_NONNULL_BEGIN

@class TATCustomAdModel;

@interface TATMediaCenter (Custom)

/**
 * 请求自定义AD
 * @param completion 如果请求成功，则回调adModel，error为空；请求失败，则返回error。也需考虑接口数据异常，error、model均为空的情况。
 */
+ (void)fetchCustomAdWithSlotId:(NSString *)slotId completion:(void(^)(NSError *error, TATCustomAdModel *model))completion;

/**
 * 自定义AD曝光上报
 * @param exposureUrl 曝光事件上报URL，自定义AD请求返回的model中获取
 */
+ (void)reportExposureWithURL:(NSString *)exposureUrl;

/**
 * 自定义AD点击上报
 * @param clickUrl 点击事件上报URL，自定义AD请求返回的model中获取
 */
+ (void)reportClickWithURL:(NSString *)clickUrl;

@end

NS_ASSUME_NONNULL_END
