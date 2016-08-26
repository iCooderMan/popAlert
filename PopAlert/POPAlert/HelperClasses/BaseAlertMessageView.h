//
//  BaseAlertMessageView.h
//  PopAlert
//
//  Created by Ali on 16/8/26.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface BaseAlertMessageView : UIView

/**
 *  The title, default is nil.
 */
@property (nonatomic, strong) NSString  *title;

/**
 *  The subtitle, default is nil.
 */
@property (nonatomic, strong) NSString  *subTitle;

/**
 *  The message, default is nil.
 */
@property (nonatomic, strong) NSString  *message;

/**
 *  Customed Message, default is nil.
 */
@property (nonatomic, strong) id         customedMessage;

/**
 *  Button's title array, default is nil.
 */
@property (nonatomic, strong) NSArray   <NSString *>  *buttonsTitle;

/**
 *  Button's title array, default is nil.
 */
@property (nonatomic, strong) NSArray   <UIColor *>  *titleColors;

/**
 *  Button's config array, default is nil.
 */
@property (nonatomic, strong) NSArray   *buttonsConfig;

/**
 *  The contentView.
 */
@property (nonatomic, weak)   UIView    *contentView;

/**
 *  Auto hiden or not, default is NO.
 */
@property (nonatomic)         BOOL       autoHiden;

/**
 *  If The autoHiden is YES, you should set the delay hiden duration, default is 2.0.
 */
@property (nonatomic)         NSTimeInterval    delayAutoHidenDuration;

/**
 *  Show the AlertView.
 */
- (void)show;

/**
 *  Hide the AlertView.
 */
- (void)hide;

/**
 *  Store View with key.
 *
 *  @param view View.
 *  @param key  Key.
 */
- (void)setView:(UIView *)view withKey:(NSString *)key;

/**
 *  Get View with key.
 *
 *  @param key Key.
 *
 *  @return View.
 */
- (UIView *)viewWithKey:(NSString *)key;


@end
