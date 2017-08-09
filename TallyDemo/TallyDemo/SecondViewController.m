//
//  SecondViewController.m
//  TallyDemo
//
//  Created by HYH on 2017/8/1.
//  Copyright © 2017年 sky. All rights reserved.
//

#import "SecondViewController.h"
#import "ThirdViewController.h"

@interface SecondViewController ()
@property (nonatomic, strong) NSArray *titleDataSource;

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.titleDataSource = @[
                             @{@"title":@"WZB表格",
                               @"VCName": @"WZBViewController",},
                             @{@"title":@"label文字颜色渐变",
                               @"VCName": @"WZBGradualLabelVC",},
                             @{@"title":@"渐变tableview",
                               @"VCName": @"GradualRootVC",},
                             
                             ];
    
    
    for (NSInteger i = 0; i< _titleDataSource.count; i++) {
        
        UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
        button.frame = CGRectMake(10, 100 + i * 40, 150, 30);
        
        [button setTitle:[_titleDataSource[i] objectForKey:@"title"] forState:UIControlStateNormal];
        [button addTarget:self action:@selector(buttonClicked:) forControlEvents:UIControlEventTouchUpInside];
        button.backgroundColor = [UIColor lightGrayColor];
        button.tag = 1000 + i;
        [self.view addSubview:button];

    }
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark: -- 通过Class 类名进行跳转，带参数 和不带参数

- (void)buttonClicked:(UIButton *)sender {
    NSLog(@"%@", sender.currentTitle);
    NSInteger index = sender.tag - 1000;
    Class class = NSClassFromString([_titleDataSource[index] objectForKey:@"VCName"]);
    UIViewController *vc = [[class alloc] init];
    vc.hidesBottomBarWhenPushed = YES;
    [self.navigationController pushViewController:vc animated:YES];
//    Class VC = NSClassFromString(vcName);
//    LoanBasicVC *vc = [[VC alloc] init];
//    vc.product = product;
//    [self.navigationController pushViewController:vc animated:YES];

}



@end
