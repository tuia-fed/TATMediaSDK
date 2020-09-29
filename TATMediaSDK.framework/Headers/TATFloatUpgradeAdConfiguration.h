//
//  TATFloatUpgradeAdConfiguration.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/9/16.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import <TATMediaSDK/TATMediaSDK.h>

NS_ASSUME_NONNULL_BEGIN

#define TAT_FlOAT_UNDEFINED NSNotFound

@interface TATFloatUpgradeAdConfiguration : TATAdConfiguration
/** 必传
 悬浮素材显示的位置，{top, left, bottom, right}，表示在当前视图控制器的view上显示时的边距（除去导航栏高度）。水平、垂直方向分别只会有一个值生效，例如{TAT_FlOAT_UNDEFINED, TAT_FlOAT_UNDEFINED, 32, 16}表示显示在右下角。若有负值则表示超出view的距离。
 */
@property (nonatomic, assign) UIEdgeInsets displayPosition;
/** 必传
 设置显示悬浮素材的视图控制器
 */
@property (nonatomic, weak) UIViewController *parentViewController;

@end

NS_ASSUME_NONNULL_END
