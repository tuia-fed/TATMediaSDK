//
//  TATAdConfiguration.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/3/18.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TATAdConfiguration : NSObject
/**
 动态配置的appKey，须与appSecret、slotId对应正确
 */
@property (nonatomic, copy) NSString *appKey;
/**
动态配置的appSecret，须与appKey、slotId对应正确
*/
@property (nonatomic, copy) NSString *appSecret;
/**
 自定义广告位是否需要返回素材，默认为YES
 */
@property (nonatomic, assign) BOOL needImageURL;
/**
原生插屏广告位活动页加载时是否显示loading动画，默认为YES
*/
@property (nonatomic, assign) BOOL needLoading;

@end

NS_ASSUME_NONNULL_END
