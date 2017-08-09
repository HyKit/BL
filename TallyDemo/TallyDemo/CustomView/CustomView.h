//
//  CustomView.h
//  TallyDemo
//
//  Created by HYH on 2017/8/3.
//  Copyright © 2017年 sky. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^DateSelectBlock)(NSString *selectTitle);



@interface CustomView : UIView





+ (void)showSelectView:(NSString *)selectTitle block:(DateSelectBlock)block;




@end
