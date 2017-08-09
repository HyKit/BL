//
//  GradualRootVC.m
//  WZBGradualTableView
//
//  Created by 王振标 on 2016/11/6.
//  Copyright © 2016年 王振标. All rights reserved.
//

#import "GradualRootVC.h"
#import "SongWordController.h"
#import "LiveVideoController.h"

@interface GradualRootVC ()

@end

@implementation GradualRootVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    
    UIButton *firstButton = [UIButton buttonWithType:UIButtonTypeCustom];
    firstButton.frame = CGRectMake(10, 200, 100, 40);
    
    [firstButton setTitle:@"Demo 1" forState:UIControlStateNormal];
    [firstButton addTarget:self action:@selector(jumpSongWordController:) forControlEvents:UIControlEventTouchUpInside];
    firstButton.backgroundColor = [UIColor cyanColor];
    
    [self.view addSubview:firstButton];
    
    UIButton *secondButton = [UIButton buttonWithType:UIButtonTypeCustom];
    secondButton.frame = CGRectMake(10, 250, 100, 40);
    
    [secondButton setTitle:@"Demo 2" forState:UIControlStateNormal];
    [secondButton addTarget:self action:@selector(jumpLiveVideoController:) forControlEvents:UIControlEventTouchUpInside];
    secondButton.backgroundColor = [UIColor cyanColor];
    
    [self.view addSubview:secondButton];
    
}
- (void)jumpSongWordController:(id)sender {
    [self presentViewController:[SongWordController new] animated:YES completion:nil];
}

- (void)jumpLiveVideoController:(id)sender {
    [self presentViewController:[LiveVideoController new] animated:YES completion:nil];
}

@end
