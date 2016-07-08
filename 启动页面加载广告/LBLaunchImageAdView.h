//
//  LBLaunchImageAdView.h
//  启动页面加载广告
//
//  Created by hznucai on 16/7/8.
//  Copyright © 2016年 hznucai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIImageView+WebCache.h"
#define mainHeight [[UIScreen mainScreen] bounds].size.height
#define mainWidth   [[UIScreen mainScreen] bounds].size.width
typedef enum {
    //全屏的广告1
    FullScreenAdType = 1,
    //带Logo的广告
    LogoAdType = 0,
}AdType;
typedef void (^LBClick)(NSInteger tag);
@interface LBLaunchImageAdView : UIView
@property(strong,nonatomic)UIImageView *aDImgView;
@property(strong,nonatomic)UIWindow *window;
@property(assign,nonatomic)NSInteger adTime; //倒计时总时长，默认为6秒
@property(strong,nonatomic)UIButton *skipBtn;
@property(assign,nonatomic)NSString *localAdImgName;
@property(nonatomic,copy)LBClick clickBlock;
-(instancetype)initWithWindow:(UIWindow *)window andType:(NSInteger)type andImgUrl:(NSString *)url;
@end
