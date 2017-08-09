//
//  CustomView.m
//  TallyDemo
//
//  Created by HYH on 2017/8/3.
//  Copyright © 2017年 sky. All rights reserved.
//

#import "CustomView.h"



@interface CustomView ()

@property (nonatomic, copy) DateSelectBlock block;
//日期的数组
HYQ_PROPERTY_STRONG NSArray *titleNameArray;
HYQ_PROPERTY_COPY NSString *selectedTitle;

HYQ_PROPERTY_STRONG UIView *container;


@end

@implementation CustomView


+ (void)showSelectView:(NSString *)selectTitle block:(DateSelectBlock)block {
    UIWindow *keyWindow = [UIApplication sharedApplication].keyWindow;
    for (UIView *subView in keyWindow.subviews) {
        if ([subView isKindOfClass:[CustomView class]]) {
            return;
        }
    }
    CustomView *view = [[CustomView alloc] initWithFrame:CGRectMake(0, 0, ScreenWidth, ScreenHeight)];
    view.selectedTitle = selectTitle;
    view.block = block;
    [view configUI];
    
    [keyWindow addSubview:view];
}

- (void)didMoveToWindow {
    
    [UIView animateWithDuration:0.2 animations:^{
        
        self.container.transform = CGAffineTransformMakeScale(1.0, 1.0);
        
    } completion:nil];
}

- (void)configUI {
    UIView *bottomView = [[UIView alloc] initWithFrame:self.bounds];
    bottomView.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.6];
    [self addSubview:bottomView];
    [bottomView addGestureRecognizer:[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tap:)]];
    
    
    UIView *bgView = [UIView new];
    bgView.frame = CGRectMake(0, 0, ScreenWidth, 0);
    
    bgView.backgroundColor = kBGColor;
    
    [self addSubview:bgView];
    CGFloat y = 0;
    
    CGFloat width = 105;
    
    bgView.layer.cornerRadius = 4;
    bgView.layer.masksToBounds = YES;
    
    CGFloat maxY = 0;
    
    for (NSInteger i = 0; i < self.titleNameArray.count; i++) {
        
        UIButton *cargoNameButton = [UIButton buttonWithType:UIButtonTypeCustom];
        cargoNameButton.frame = CGRectMake(0, y + i * kxtxh(35), width, kxtxh(34));
        
        [cargoNameButton setTitle:_titleNameArray[i] forState:UIControlStateNormal];
        [cargoNameButton addTarget:self action:@selector(dateNameButtonClicked:) forControlEvents:UIControlEventTouchUpInside];
        cargoNameButton.backgroundColor = [UIColor whiteColor];
        
        [cargoNameButton setTitleColor:([_selectedTitle isEqualToString:_titleNameArray[i]] ? kMainColor : kDarkGrayTextColor) forState:UIControlStateNormal];
        
        cargoNameButton.titleLabel.font = kNormalFont;
        
        [bgView addSubview:cargoNameButton];
        maxY = cargoNameButton.bottom;
    }
    
    self.container = bgView;
    
    bgView.frame = CGRectMake(ScreenWidth - width - 20, 64 + 4, width, maxY);
    
    
}



- (NSArray *)titleNameArray {
    if (!_titleNameArray) {
        _titleNameArray = [self returnSixYearAndMonth];
        
    }
    return _titleNameArray;
}


- (NSArray *)returnSixYearAndMonth {
    //获取当前秒
    NSDate *now = [NSDate date];
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSTimeInterval time1970 = [now timeIntervalSince1970];
    NSRange range = [calendar rangeOfUnit:NSDayCalendarUnit inUnit:NSMonthCalendarUnit forDate:[NSDate date]];
    NSUInteger numberOfDaysInMonth = range.length;
    
    NSMutableArray *array = [NSMutableArray array];
    [array addObject:@"全部"];
    for (int i = 0; i < 6; i++) {
        //格式化时间
        NSDate *datetime = [NSDate dateWithTimeIntervalSince1970:time1970 - (86400 * numberOfDaysInMonth * i)];
        NSDateFormatter *dateformat = [[NSDateFormatter alloc] init];
        [dateformat setDateFormat:@"yyyy-MM"];
        [dateformat stringFromDate:datetime];
        NSString *string = [NSString stringWithFormat:@"%@", datetime];
        
        NSLog(@"%@", string);
        
        [array addObject:[string substringToIndex:7]];
    }
    
    return array.copy;
    
}

- (void)dateNameButtonClicked:(UIButton *)sender {
    _selectedTitle = sender.titleLabel.text;
    [self dismiss];
}

- (void)tap:(UITapGestureRecognizer *)sender {
    [self dismiss];
    
}

- (void)dismiss {
    if (self.block) {
        self.block(_selectedTitle);
    }
    [UIView animateWithDuration:0.2 animations:^{
        self.container.transform = CGAffineTransformMakeScale(0.0001, 0.0001);
        self.alpha = 0;
    } completion:^(BOOL finished) {
        [self removeFromSuperview];
    }];
}

@end
