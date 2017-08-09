//
//  SkillViewController.h
//  TallyDemo
//
//  Created by HYH on 2017/8/3.
//  Copyright © 2017年 sky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SkillViewController : UIViewController

@end
/*

 1、设置UILabel行间距
 
 2、当使用-performSelector:withObject:withObject:afterDelay:方法时，需要传入多参数问题

 3、UILabel显示不同颜色字体

 4、比较两个CGRect/CGSize/CGPoint是否相等

 5、比较两个NSDate相差多少小时
 
 6、每个cell之间增加间距

 7、播放一张张连续的图片
 
 8、加载gif图片
 
 9、防止离屏渲染为image添加圆角

 10、查看系统所有字体
 
 11、获取随机数
 
 12、获取随机数小数(0-1之间)
 
 13、AVPlayer视频播放完成的通知监听
 
 14、判断两个rect是否有交叉
 
 15、判断一个字符串是否为数字
 
 16、将一个view保存为pdf格式
 
 17、让一个view在父视图中心
 
 18、获取当前导航控制器下前一个控制器
 
 19、保存UIImage到本地

 20、键盘上方增加工具栏
 
 21、copy一个view
 
 22、在image上绘制文字并生成新的image
 
 23、判断一个view是否为另一个view的子视图
 
 24、判断一个字符串是否包含另一个字符串
 
 25、UICollectionView自动滚动到某行
 
 26、修改系统UIAlertController
 
 27、判断某一行的cell是否已经显示
 
 28、让导航控制器pop回指定的控制器
 
 
 29、动画修改label上的文字
 
 30、判断字典中是否包含某个key值
 
 31、获取屏幕方向
 
 32、设置UIImage的透明度
 
 33、Attempt to mutate immutable object with insertString:atIndex:
 这个错是因为你拿字符串调用insertString:atIndex:方法的时候，调用对象不是NSMutableString，应该先转成这个类型再调用
 
 34、UIWebView添加单击手势不响应
 
 35、获取手机RAM容量
 
36、地图上两个点之间的实际距离

37、在应用中打开设置的某个界面
 
39、监听scrollView是否滚动到了顶部／底部

40、UISlider增量／减量为固定值(假如为5)

41、选中textField或者textView所有文本(我这里以textView为例)

 42、从导航控制器中删除某个控制器

43、隐藏UITextView/UITextField光标

44、当UITextView/UITextField中没有文字时，禁用回车键

45、字符串encode编码(编码url字符串不成功的问题)

46、计算UILabel上某段文字的frame

47、获取随机UUID

48、仿苹果抖动动画

49、修改UISearBar内部背景颜色

50、UITextView滚动到顶部

51、通知监听APP生命周期

52、触摸事件类型

53、UITextField文字周围增加边距

54、监听UISlider拖动状态

55、设置UITextField光标位置

56、去除webView底部黑色
 
57、获取collectionViewCell在屏幕中的frame

58、比较两个UIImage是否相等

59、解决当UIScrollView上有UIButton的时候，触摸到button滑动不了的问题

60、UITextView中的文字添加阴影效果

61、MD5加密

62、base64加密

63、AES加密

64、3DES加密

65、单个页面多个网络请求的情况，需要监听所有网络请求结束后刷新UI

66、解决openUrl延时问题

67、页面跳转实现翻转动画

68、tableView实现无限滚动


69、代码方式调整屏幕亮度

70、获取当前应用CUP用量

71、float数据取整四舍五入

72、删除UISearchBar系统默认边框

73、为UICollectionViewCell设置圆角和阴影

74、让正在滑动的scrollView停止滚动(不是禁止，而是暂时停止滚动)

75、使用xib设置UIView的边框、圆角

76、根据经纬度获取城市等信息

77、如何防止添加多个NSNotification观察者？

78、将一个xib添加到另外一个xib上

79、处理字符串，使其首字母大写

80、判断一个UIAlertView/UIAlertController是否显示

81、获取字符串中的数字

82、为UIView的某个方向添加边框

83、通过属性设置UISwitch、UIProgressView等控件的宽高

84、自动搜索功能，用户连续输入的时候不搜索，用户停止输入的时候自动搜索(我这里设置的是0.5s，可根据需求更改)

85、修改UISearchBar的占位文字颜色

86、某个界面多个事件同时响应引起的问题(比如，两个button同时按push到新界面，两个都会响应，可能导致push重叠)

87、修改tabBar的frame

88、修改键盘背景颜色

89、修改image颜色

90、动画执行removeFromSuperview

91、启动页显示延时

92、设置UIButton高亮时的背景颜色

93、关于图片拉伸

推荐看这个博客，讲的很详细http://blog.csdn.net/q199109106q/article/details/8615661
94、利用runtime获取一个类所有属性

95、设置textView的某段文字变成其他颜色

96、让push跳转动画像modal跳转动画那样效果(从下往上推上来)

97、上传图片太大，压缩图片




 */
