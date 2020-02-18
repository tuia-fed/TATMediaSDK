//
//  TATCustomAdModel.h
//  TATMediaSDK
//
//  Created by wuleslie on 2019/12/16.
//  Copyright © 2019 wuleslie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TATReturnMediaModel;

@interface TATCustomAdModel : NSObject

/**
 素材url
 */
@property (nonatomic, copy) NSString *imageUrl;
/**
 AD活动链接
 */
@property (nonatomic, copy) NSString *activityUrl;
/**
 素材id
 */
@property (nonatomic, copy) NSString *sckId;
/**
 素材曝光上报接口
 */
@property (nonatomic, copy) NSString *exposureUrl;
/**
 素材点击上报接口
 */
@property (nonatomic, copy) NSString *clickUrl;

- (id)initWithMediaModel:(TATReturnMediaModel *)mediaModel;

@end

NS_ASSUME_NONNULL_END
