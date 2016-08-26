//
//  ViewController.m
//  PopAlert
//
//  Created by Ali on 16/8/26.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import "ViewController.h"
#import "PopMessageAlertView.h"
#import "PopButtonsAlert.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    
}
- (IBAction)btnCliccked:(UIButton *)sender {
    switch (sender.tag) {
        case 1:
            [self showMessageAlert];
            break;
        case 2:
            [self showOneButtonAlert];
            break;
        case 3:
            [self showTwoButtonAlert];
            break;
        default:
            break;
    }
    
}

-(void)showMessageAlert{
    
    PopMessageAlertView *msgAlert = [PopMessageAlertView new];
    [msgAlert showAlertWithContentView:self.view message:@"这只是一个有提示用户作用的提示框Alert" delayAutoHidenDuration:2];
    
}

-(void)showOneButtonAlert{
    PopButtonsAlert *oneBtn = [PopButtonsAlert new];
    [oneBtn showAlertWithContentView:self.view message:@"这是只有一个确定按钮的Alert" buttonsTitles:@[@"确定"] titleColors:@[[UIColor blueColor]] clickAtIndex:^(NSInteger index) {
        
        NSLog(@"当前点击的Index:%ld",(long)index);
        
    }];
    
}

-(void)showTwoButtonAlert{
    
    PopButtonsAlert *oneBtn = [PopButtonsAlert new];
    [oneBtn showAlertWithContentView:self.view message:@"这是有两个按钮的Alert 可以使用在 有两种选择的情况" buttonsTitles:@[@"确定",@"取消"] titleColors:@[[UIColor blueColor],[UIColor redColor]] clickAtIndex:^(NSInteger index) {
        
        NSLog(@"当前点击的Index:%ld",(long)index);
        
    }];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
