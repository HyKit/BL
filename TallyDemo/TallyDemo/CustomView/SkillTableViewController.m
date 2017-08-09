//
//  SkillTableViewController.m
//  TallyDemo
//
//  Created by HYH on 2017/8/3.
//  Copyright © 2017年 sky. All rights reserved.
//

#import "SkillTableViewController.h"


#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>


@interface SkillTableViewController ()

@end

@implementation SkillTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source
//6、每个cell之间增加间距
/*
// 方法一，每个分区只显示一行cell，分区头当作你想要的间距(注意，从数据源数组中取值的时候需要用indexPath.section而不是indexPath.row)
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return yourArry.count;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 1;
}
-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return cellSpacingHeight;
}

// 方法二，在cell的contentView上加个稍微低一点的view，cell上原本的内容放在你的view上，而不是contentView上，这样能伪造出一个间距来。

// 方法三，自定义cell，重写setFrame：方法
- (void)setFrame:(CGRect)frame
{
    frame.size.height -= 20;
    [super setFrame:frame];
}
*/


- (void)configUI {
    //7、播放一张张连续的图片
    UIImageView *imageView = [UIImageView new];
    
    // 加入现在有三张图片分别为animate_1、animate_2、animate_3
    // 方法一
    imageView.animationImages = @[[UIImage imageNamed:@"animate_1"], [UIImage imageNamed:@"animate_2"], [UIImage imageNamed:@"animate_3"]];
    imageView.animationDuration = 1.0;
    // 方法二
    imageView.image = [UIImage animatedImageNamed:@"animate_" duration:1.0];
    // 方法二解释下，这个方法会加载animate_为前缀的，后边0-1024，也就是animate_0、animate_1一直到animate_1024
    
//    8、加载gif图片
//    推荐使用这个框架 FLAnimatedImage


//    10、查看系统所有字体
    
    // 打印字体
    for (id familyName in [UIFont familyNames]) {
        NSLog(@"%@", familyName);
        for (id fontName in [UIFont fontNamesForFamilyName:familyName]) NSLog(@"  %@", fontName);
    }
    // 也可以进入这个网址查看 http://iosfonts.com/
    
    
//    11、获取随机数
    
    NSInteger i = arc4random();
//    12、获取随机数小数(0-1之间)
    
#define ARC4RANDOM_MAX      0x100000000
    double val = ((double)arc4random() / ARC4RANDOM_MAX);
//    13、AVPlayer视频播放完成的通知监听
    
    [[NSNotificationCenter defaultCenter]
     addObserver:self
     selector:@selector(videoPlayEnd)
     name:AVPlayerItemDidPlayToEndTimeNotification
     object:nil];
//    14、判断两个rect是否有交叉
    
//    if (CGRectIntersectsRect(rect1, rect2)) {
//    }
    
//    15、判断一个字符串是否为数字
    NSString *str;
    NSCharacterSet *notDigits = [[NSCharacterSet decimalDigitCharacterSet] invertedSet];
    if ([str rangeOfCharacterFromSet:notDigits].location == NSNotFound)
    {
        // 是数字
    } else
    {
        // 不是数字
    }
    
    
}






@end

