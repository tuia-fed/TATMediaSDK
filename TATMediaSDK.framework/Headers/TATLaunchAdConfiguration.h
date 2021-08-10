//
//  TATLaunchAdConfiguration.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/4/3.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import <TATMediaSDK/TATMediaSDK.h>

/** 启动图来源 */
typedef NS_ENUM(NSInteger, TATLaunchSourceType) {
    TATLaunchSourceTypeImage = 1, // LaunchImage(default)
    TATLaunchSourceTypeScreen = 2, // LaunchScreen.storyboard
};

@interface TATLaunchAdConfiguration : TATAdConfiguration

/**
 开屏广告停留时间，默认为5，单位：秒
 */
@property (nonatomic, assign) NSInteger showDuration;
/**
 设置开屏广告展示的frame，默认为[UIScreen mainScreen].bounds，建议全屏或者仅在屏幕下方留下展示app logo的区域。注意，width应>=70%屏幕宽；height应>=50%屏幕高，否则有可能影响收益。
 */
@property (nonatomic, assign) CGRect frame;
/**
 等待广告数据的时间，默认为3，单位：秒
 */
@property (nonatomic, assign) NSInteger waitDuration;
/**
 启动图设置类型，默认launchImage
 */
@property (nonatomic, assign) TATLaunchSourceType sourceType;
/**
 跳转广告的提示文案，默认为：“点击跳转详情页面”
 */
@property (nonatomic, copy) NSString *detailButtonTitle;

+ (TATLaunchAdConfiguration *)defaultConfiguration;

@end

