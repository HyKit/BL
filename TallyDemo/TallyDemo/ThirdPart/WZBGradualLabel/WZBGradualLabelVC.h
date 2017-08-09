//
//  WZBGradualLabelVC.h
//  TallyDemo
//
//  Created by HYH on 2017/8/3.
//  Copyright © 2017年 sky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WZBGradualLabelVC : UIViewController

@end



/*
 
 
 
 
 ![带有文字闪动渐变的label](https://github.com/WZBbiao/WZBGradualLabel/blob/master/WZBGradualLabels.gif?raw=true)
 
 #####2、使用方法：
 
 将WZBGradualLabel.h和WZBGradualLabel.m拖入工程
 
 只需要在需要使用的地方直接导入头文件WZBGradualLabel.h，然后调用下边这个方法即可
 
 ```
 /*
 * frame:label的frame
 * title:text
 * duration:时间间隔
 * gradualWidth:渐变颜色的宽
 * superView:label的父控件
 **/
//[WZBGradualLabel gradualLabelWithFrame:(CGRect){10, 450, WZBScreenWidth - 20, 40} title:@"123456789012345678901234567890" duration:2  superview:self.view];



//![效果](https://github.com/WZBbiao/WZBGradualLabel/blob/master/WZBGradualLabel.gif?raw=true)
      
      
      //```
/*
 /* 渐变颜色色值，有默认值 **/
  //    @property (nonatomic, strong) NSArray *gradualColors;
/*
 * frame:label的frame
 * title:text
 * duration:时间间隔
 * gradualWidth:渐变颜色的宽
 * superView:label的父控件
 **/
    //  + (instancetype)gradualLabelWithFrame:(CGRect)frame title:(NSString *)title duration:(NSTimeInterval)duration gradualWidth:(CGFloat)gradualWidth superview:(UIView *)superview;
/*
 * frame:label的frame
 * title:text
 * superView:label的父控件
 **/
      //+ (instancetype)gradualLabelWithFrame:(CGRect)frame title:(NSString *)title superview:(UIView *)superview;
/*
 * frame:label的frame
 * title:text
 * duration:时间间隔
 * superView:label的父控件
 **/
     // + (instancetype)gradualLabelWithFrame:(CGRect)frame title:(NSString *)title duration:(NSTimeInterval)duration superview:(UIView *)superview;
/*
 * frame:label的frame
 * title:text
 * gradualWidth:渐变颜色的宽
 * superView:label的父控件
 **/
     // + (instancetype)gradualLabelWithFrame:(CGRect)frame title:(NSString *)title gradualWidth:(CGFloat)gradualWidth superview:(UIView *)superview;
      
     // ```
      
     // >h文件中提供了这些方法和属性，注释写的很清楚，可以直接使用。colors是个数组，可以设置渐变层的颜色
      
//#####3、实现大致原理：
      
  //    ![原理分析](https://github.com/WZBbiao/WZBGradualLabel/blob/master/1.png?raw=true)
              
    //          >其实开到层级图，它是有三层的，最底层的label就是你要显示的label，中间有层红色的部分，这个其实是渐变层view(截图没截好)，最上层的label是渐变层的文字

       //       ```
              
      //        self.gradientLayer.mask = self.label.layer;
        /*
              ```
              
              >这句话是设置渐变图层的mask为label图层，这样就可以用文字裁剪渐变图层了，只保留文字的部分
              
              至于动画改变，我用的是一个UIView动画，动态改变中间层View和渐变层label的x值，view是添加在底层label上的，上层label是添加在中间view上的，先让view在父控件的最左边，上层label在此view的右边，说白了就是让上层label和底层label完全重合，为了维持这一状态，中间的view向右走，上层label必须以同样的值向左走！具体请看代码：
              
              ```
              
              - (void)changX {
                  __block CGRect frame1 = self.leftView.frame;
                  __block CGRect frame2 = self.label.frame;
                  frame1.origin.x = -self.gradualWidth;
                  frame2.origin.x = self.gradualWidth;
                  self.leftView.frame = frame1;
                  self.label.frame = frame2;
                  [UIView animateWithDuration:self.duration animations:^{
                      frame1.origin.x = self.bounds.size.width;
                      self.leftView.frame = frame1;
                      frame2.origin.x = -self.bounds.size.width;
                      self.label.frame = frame2;
                  }];
              }
              
              ```
              


 */
