//
//  PopButtonsAlert.h
//  PopAlert
//
//  Created by Ali on 16/8/26.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import "BaseAlertMessageView.h"

@interface PopButtonsAlert : BaseAlertMessageView
/**
 *  显示多按钮Alert
 *
 *  @param contentView 需要显示的View
 *  @param msg         提示信息
 *  @param titles      按钮标题 右边为 数组的0下标
 *  @param colors      按钮标题颜色 右边为 数组的0下标
 *  @param action      点击操作回调 1为 右边按钮点击回调 只有一个按钮的时候 回调1
 */
-(void)showAlertWithContentView:(UIView *)contentView message:(NSString *)msg  buttonsTitles:(NSArray<NSString *> *)titles titleColors:(NSArray   <UIColor *> *)colors clickAtIndex:(void(^)(NSInteger index))action;

@end
