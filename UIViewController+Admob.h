//
//  UIViewController+Admob.h
//  Advert
//
//  Created by 冯 传祥 on 2017/1/2.
//  Copyright © 2017年 冯 传祥. All rights reserved.
//

#import <UIKit/UIKit.h>
@import GoogleMobileAds;

@interface UIViewController (Admob) <GADBannerViewDelegate>

- (void)showAdmobBanner:(CGRect)frame adUnitID:(NSString *)adUnitID;

- (void)showAdmobBanner:(CGRect)frame
               adUnitID:(NSString *)adUnitID
              superView:(UIView *)superView;
@end
