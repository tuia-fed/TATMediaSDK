//
//  TATMediaCenter.h
//  TATMediaSDK
//
//  Created by wuleslie on 2019/11/29.
//  Copyright © 2019 wuleslie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 rewardJson示例：
 {
     "orderId" : "168408070629",
     "userId" : "123",
     "timestamp" : "1566791113031",
     "prizeFlag" : "XXX",
     "appKey" : "4W8ReCvDm4fy3Fpn52MgPgUWmdfS",
     "sign" : "5093659d6bf802d1a407df81d6aab9f9",
     "score" : "1",
 }
 */
typedef void(^TATRewardHandler)(NSString * _Nullable rewardJson);
typedef void(^TATCloseHandler)(NSString * _Nullable closeJson);

typedef void(^TATCloseH5Block)(NSString * _Nullable slotId);

@class TATAdConfiguration;

@interface TATMediaCenter : NSObject

/**
 * 激励类型AD的奖励回调
 */
@property (nonatomic, copy) TATRewardHandler rewardHandler;
/**
* 关闭激励类型AD时的回调
*/
@property (nonatomic, copy) TATCloseHandler closeHandler;
/**
* 关闭活动页的回调
*/
@property (nonatomic, copy) TATCloseH5Block closeH5Block;

+ (instancetype)sharedInstance;
/**
 SDK初始化方法，在启动的时候调用
 */
+ (void)startWithAppKey:(NSString *)appKey appSecret:(NSString *)appSecret;

/**
 当前SDK版本号
 */
+ (NSString *)sdkVersion;

/**
 设置日志打印是否开启，默认为关闭。一般而言，debug时打开，release时关闭。
 */
+ (void)setLogEnable:(BOOL)enable;

/**
 当用户登录之后设置用户ID，切换账号登录时记得重新设置
 @param userId 用户唯一标识，含奖品的活动需要用到
*/
+ (void)setUserId:(NSString *)userId;

/**
 用户授权数据采集
 @param authFlag 是否授权
 */
+ (void)userAuthDataCollection:(BOOL)authFlag;

@end

NS_ASSUME_NONNULL_END
