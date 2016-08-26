//
//  PopMessageAlertView.h
//  PopAlert
//
//  Created by Ali on 16/8/26.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import "BaseAlertMessageView.h"

@interface PopMessageAlertView : BaseAlertMessageView

-(void)showAlertWithContentView:(UIView *)contentView message:(NSString *)msg delayAutoHidenDuration:(NSTimeInterval)duration;

@end
