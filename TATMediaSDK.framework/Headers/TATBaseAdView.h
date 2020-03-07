//
//  TATBaseAdView.h
//  TATMediaSDK
//
//  Created by wuleslie on 2020/3/6.
//  Copyright © 2020 wuleslie. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^TATClickAdBlock)(NSString * _Nullable slotId);

@interface TATBaseAdView : UIView
/**
* 点击事件的回调
*/
@property (nonatomic, copy) TATClickAdBlock _Nullable clickAdBlock;


@end
