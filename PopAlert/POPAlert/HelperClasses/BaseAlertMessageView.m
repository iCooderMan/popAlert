//
//  BaseAlertMessageView.m
//  PopAlert
//
//  Created by Ali on 16/8/26.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import "BaseAlertMessageView.h"

@interface BaseAlertMessageView ()

@property (nonatomic, strong) NSMapTable  *mapTable;

@end

@implementation BaseAlertMessageView

- (instancetype)initWithFrame:(CGRect)frame {
    
    self.backgroundColor = [UIColor lightGrayColor];
    if (self = [super initWithFrame:frame]) {
        
        self.delayAutoHidenDuration = 2.f;
        self.autoHiden              = NO;
        self.mapTable               = [NSMapTable strongToWeakObjectsMapTable];
    }
    
    return self;
}

- (void)show {
    

}

- (void)hide {
    
    [self removeFromSuperview];

}

- (void)setView:(UIView *)view withKey:(NSString *)key {
    
    [self.mapTable setObject:view forKey:key];
}

- (UIView *)viewWithKey:(NSString *)key {
    
    return [self.mapTable objectForKey:key];
}


@end
