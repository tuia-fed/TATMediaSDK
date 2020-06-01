//
//  TATInfoFlowAdConfiguration.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/5/25.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import <TATMediaSDK/TATMediaSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface TATInfoFlowAdConfiguration : TATAdConfiguration
/**
 标题字体，默认systemFontOfSize:18
 */
@property (nonatomic, strong) UIFont *textFont;
/**
 标题文字颜色，默认0xCCCCCC
 */
@property (nonatomic, strong) UIColor *textColor;
/**
 信息流视图的宽度，默认为屏幕宽度
 */
@property (nonatomic, assign) CGFloat width;
/**
 图片大小，默认CGSizeZero，内部根据素材大小自适应
 */
@property (nonatomic, assign) CGSize imageSize;
/**
 图文内容整体的边距，要求均为正数，默认（16，16，16，16）
 */
@property (nonatomic, assign) UIEdgeInsets edgeInsets;
/**
 图片与文字的左右边距(左文右图、左图右文)，默认30
 */
@property (nonatomic, assign) CGFloat horizontalMargin;
/**
 图片与文字的上下边距(大图、三图)，默认16
 */
@property (nonatomic, assign) CGFloat verticalMargin;
/**
 广告图片缩放模式，默认UIViewContentModeScaleAspectFill
 */
@property (nonatomic, assign) UIViewContentMode contentMode;

+ (TATInfoFlowAdConfiguration *)defaultConfiguration;

@end

NS_ASSUME_NONNULL_END
