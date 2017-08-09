//
//  KnowViewController.h
//  TallyDemo
//
//  Created by HYH on 2017/8/3.
//  Copyright © 2017年 sky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KnowViewController : UIViewController

@end



/*

 1、禁止手机睡眠
 
 2、隐藏某行cell
 
 3、禁用button高亮

 4、tableview遇到这种报错failed to obtain a cell from its dataSource

 5、cocoa pods报这个错误：unable to access 'https://github.com/facebook/pop.git/': Operation timed out after 0 milliseconds with 0 out of 0 bytes received
 
 解决办法：原因可能是网络问题，网络请求超时了，只需要重试就行了
 6、cocoa pods 出现ERROR: While executing gem ... (Errno::EPERM)
 
 解决办法：
 https://segmentfault.com/q/1010000002926243
 7、动画切换window的根控制器
 
 8、去除数组中重复的对象
 
 9、编译的时候遇到 no such file or directory: ／users／apple／XXX
 
 10、iOS8系统中，tableView最好实现下-tableView: heightForRowAtIndexPath:这个代理方法，要不然在iOS8中可能就会出现显示不全或者无法响应事件的问题
 
 11、iOS8中实现侧滑功能的时候这个方法必须实现，要不然在iOS8中无法侧滑
 
 12、三个通知
 NSSystemTimeZoneDidChangeNotification监听修改时间界面的两个按钮状态变化
 UIApplicationSignificantTimeChangeNotification 监听用户改变时间 （只要点击自动设置按钮就会调用）
 NSSystemClockDidChangeNotification 监听用户修改时间（时间不同才会调用）
 
 13、SDWebImage本地缓存有时候会害人。如果之前缓存过一张图片，即使下次服务器换了这张图片，但是图片url没换，用sdwebimage下载下来的还是以前那张,所以遇到这种问题，不要先去怼服务器，清空下缓存再试就好了。
 
 14、上线前注意：
 
 15、跳进app权限设置

 16、给一个view截图

 17、开发中如果要动态修改tableView的tableHeaderView或者tableFooterView的高度，需要给tableView重新设置，而不是直接更改高度。正确的做法是重新设置一下tableView.tableFooterView = 更改过高度的view。为什么？其实在iOS8以上直接改高度是没有问题的，在iOS8中出现了contentSize不准确的问题，这是解决办法。
 
 18、注意对象为nil的时候，调用此对象分类的方法不会执行
 
 19、collectionView的内容小于其宽高的时候是不能滚动的，设置可以滚动：
 
 20、设置navigationBar上的title颜色和大小
 
 21、颜色转图片

 22、view设置圆角

 23、强／弱引用
 
 24、由角度转换弧度
 
 25、由弧度转换角度
 
 26、获取图片资源
 
 27、获取temp
 
 28、获取沙盒 Document
 
 29、获取沙盒 Cache
 
 30、GCD代码只执行一次
 
 31、自定义NSLog
 
 32、Font

 33、FORMAT
 
 34、在主线程上运行
 
 35、开启异步线程
 
 36、通知
 
 37、随机颜色
 
 38、获取window
 
 39、修改textField的placeholder的字体颜色、大小
 
 40、统一收起键盘
 
 41、控制屏幕旋转，在控制器中写
 
42、获取app缓存大小

43、清理app缓存

44、模型转字典

45、交换两个方法实现

46、打印百分号和引号

47、几个常用权限判断, 定位权限，麦克风，摄像头，录音，相册

48、获取手机型号

 49、长按复制功能

50、cocoapods升级

51、设置启动页后，依然显示之前的

52、判断图片类型

53、获取手机和app信息

54、获取一个类的所有属性

55、image圆角

56、image拉伸

 57、JSON字符串转字典

58、身份证号验证

59、获取设备mac地址

60、导入自定义字体库

 61、拿到当前正在显示的控制器，不管是push进去的，还是present进去的都能拿到

62、runtime为一个类动态添加属性

63、获取runtime为一个类动态添加的属性

64、KVO监听某个对象的属性

65、Reachability判断网络状态

66、AFNetworking监听网络状态

67、透明颜色不影响子视图透明度

68、取图片某一点的颜色

69、判断该图片是否有透明度通道

70、获得灰度图

71、根据bundle中的文件名读取图片

72、合并两个图片

73、根据bundle中的图片名创建imageview

74、为imageView添加倒影

75、画水印
 
76、让label的文字内容显示在左上／右上／左下／右下／中心顶／中心底部

77、scrollView上的输入框，键盘挡住的问题

78、frame布局的cell动态高度

79、AutoLayout布局的cell动态高度

80、使用performSelector:调用函数，内存泄漏问题

81、一个字符串是否包含另一个字符串
82、cell去除选中效果

83、cell点按效果

84、当删除一个从xib拖出来的属性时，一定记得把xib中对应的线也删掉，不然会报类似[<ViewController 0x7fea6ed05980> setValue:forUndefinedKey:]: this class is not key value coding-compliant for the key的crash

85、真机测试的时候报错：Could not launch "你的 App"，process launch failed: Security

86、真机测试的时候报错：Could not find Developer Disk Image

87、UITextView没有placeholder的问题？

88、移除字符串中的空格和换行

89、判断字符串中是否有空格

90、获取一个视频的第一帧图片

91、获取视频的时长

92、字符串是否为空

93、将app上传到App Store的时候通常会遇到这个问题
    
94、当tableView占不满一屏时，去除下边多余的单元格
    
95、isKindOfClass和isMemberOfClass的区别
    
96、__block
    
97、-[ViewController aMethod:]: unrecognized selector sent to instance 0x7fe91e607fb0
    
98、UITableView (<UITableView: 0x7ff19b027000; >) failed to obtain a cell from its dataSource (<ViewController: 0x7ff19a507520>)
    
99、约束如何做UIView动画？
    
100、从NSURL中拿到链接字符串
    
101、将tableView滚动到顶部
    
102、如果用addTarget:action:forControlEvents:方法为一个button添加了很多点击事件，在某个时刻想一次删除怎么办？只需要调用下边这句代码
    
103、某个字体的高度
    
104、删除某个view所有的子视图
    
105、删除NSUserDefaults所有记录
    
106、禁用系统滑动返回功能
    
107、模拟器报错
    
108、自定义cell选中背景颜色
    
109、UILabel设置内边距
    
110、UILabel设置文字描边
    
111、使用模拟器截图
    
112、scrollView滚动到最下边
    
113、UIView背景颜色渐变
    
114、停止UIView动画
    
115、为UIView某个角添加圆角
    
116、删除Xcode Derived data缓存数据
    
117、将一个view放置在其兄弟视图的最上面
    
118、将一个view放置在其兄弟视图的最下面
    
119、让手机震动一下
    
120、layoutSubviews方法什么时候调用？
    
121、让UILabel在指定的地方换行
    
122、摇一摇功能
    
123、获取图片大小
    
124、获取view的坐标在整个window上的位置
    
125、提交App Store审核程序限制
    
126、修改UISegmentedControl的字体大小
    
127、在非ViewController的地方弹出UIAlertController对话框
    
128、获取一个view所属的控制器
    
129、UIImage和base64互转
    
130、UIWebView设置背景透明
    
131、判断NSDate是不是今天
    
132、设置tableView分割线颜色
    
133、设置屏幕方向
    
134、比较两个颜色是否相等
    
135、tableViewCell分割线顶到头
    
136、不让控制器的view随着控制器的xib拉伸或压缩
    
137、cocoaPods报错 : [!] Unable to add a source with url https://github.com/CocoaPods/Specs.git named master-1.
    
138、安装cocoapods的时候出现 ERROR: While executing gem ... (Errno::EPERM)
    
139、在状态栏增加网络请求的菊花，类似safari加载网页的时候状态栏菊花
    
140、检查一个rect是否包含一个point
    
141、在指定的宽度下，让UILabel自动设置最佳font
    
142、将一个image保存在相册中
    
143、修改cell.imageView的大小
    
144、为一个view添加虚线边框
    
145、UITextView中打开或禁用复制，剪切，选择，全选等功能
    

 */
