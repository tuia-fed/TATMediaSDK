//
//  TATTextLinkAdConfiguration.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/6/16.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import <TATMediaSDK/TATMediaSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface TATTextLinkAdConfiguration : TATAdConfiguration
/**
 标题字体，默认systemFontOfSize:15
 */
@property (nonatomic, strong) UIFont *titleFont;
/**
 标题文字颜色，默认0x333333
 */
@property (nonatomic, strong) UIColor *titleColor;
/**
 副标题文字字体，默认systemFontOfSize:12
 */
@property (nonatomic, strong) UIFont *subTitleFont;
/**
 副标题文字颜色，默认0x999999
 */
@property (nonatomic, strong) UIColor *subTitleColor;
/**
 文字链视图的宽度，默认为屏幕宽度
 */
@property (nonatomic, assign) CGFloat width;
/**
 文字链视图的高度，默认为44dp
 */
@property (nonatomic, assign) CGFloat height;
/**
 图片大小，默认(20, 20)
 */
@property (nonatomic, assign) CGSize imageSize;
/**
 文字链（图标或者标题）左边距，默认16
 */
@property (nonatomic, assign) CGFloat leftMargin;
/**
 文字链图片与文字（都有时）的间距，默认8
 */
@property (nonatomic, assign) CGFloat imageTextMargin;


+ (TATTextLinkAdConfiguration *)defaultConfiguration;

@end

NS_ASSUME_NONNULL_END
