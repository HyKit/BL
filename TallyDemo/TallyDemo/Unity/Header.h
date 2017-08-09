//
//  Header.h
//  TallyDemo
//
//  Created by HYH on 2017/8/3.
//  Copyright © 2017年 sky. All rights reserved.
//

#ifndef Header_h
#define Header_h



#define ScreenHeight    [UIScreen mainScreen].bounds.size.height
#define ScreenWidth     [UIScreen mainScreen].bounds.size.width
#define kxtxw(w) (w)/320.0*[UIScreen mainScreen].bounds.size.width
#define kxtxh(h) (h)/568.0*[UIScreen mainScreen].bounds.size.height


#define ISEMPTY(x)	(((x) == nil ||[(x) isKindOfClass:[NSNull class]] ||([(x) isKindOfClass:[NSString class]] &&  [(NSString*)(x) length] == 0) || ([(x) isKindOfClass:[NSArray class]] && [(NSArray*)(x) count] == 0))|| ([(x) isKindOfClass:[NSDictionary class]] && [(NSDictionary*)(x) count] == 0))


//公共宏
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define HEXCOLOR(c) [UIColor colorWithRed:((c>>16)&0xFF)/255.0f green:((c>>8)&0xFF)/255.0f blue:(c&0xFF)/255.0f alpha:1.0f]

//#define kMainColor RGBACOLOR(255,111,1,1)  //主色调

#define kKeyLineColor  kColord2d2d2  //#d2d2d2   //提示文字,不可点按钮,分割线, 文字块底色

#define kDarkGrayTextColor    kColor333333  //#333333  重要文字用于普通级的段落文字
#define kLightGrayTextColor   kColor666666  //#888888  次要文字 没有选中的图标
#define kKeyBgColor           kColore6e6e6  //#ebebeb vc tbvc的背景颜色
#define kKeyF5Color           kColorf5f5f5  //f5f5f5  //菜单栏/展示栏底色
#define KRGreenColor          kColor70ca57  //绿色
#define kLinkColor            kColor12b7f5            // 蓝色  文字超链接 颜色
#define kLoadNumber @"10"

//--------------begin  新版颜色 标准-------------------
#define kMainColor     HEXCOLOR(0xff8400)  //主色调，
#define kColor333333   HEXCOLOR(0x333333)  //重要文字信息，类目名称，正文标题
#define kColor666666   HEXCOLOR(0x666666)  //普通级段落信息，段落内文的文字
#define kColor999999   HEXCOLOR(0x999999)  //用于辅助，次要的文字信息，不可点击按钮文字
#define kColord2d2d2   HEXCOLOR(0xd2d2d2)  //用于提示输入文字，普通级别小icon,如次要文字色块底色
#define kColore6e6e6   HEXCOLOR(0xe6e6e6)  //用于分割线，不可点击按钮底色，或者次要icon
#define kColorf5f5f5   HEXCOLOR(0xf5f5f5)  //用于内容区域底色，

#define kColorfb5100   HEXCOLOR(0xfb5100)  //用于主色按钮点击效果
#define kColorff6b00   HEXCOLOR(0xff6b00)  //用于首页不同角色icon颜色
#define kColorff9c00   HEXCOLOR(0xff9c00)  //用于首页不同角色icon颜色
#define kColorfccc00   HEXCOLOR(0xfccc00)  //用于点缀小图标，订单，运单不同状态
#define kColorf25d5c   HEXCOLOR(0xf25d5c)  //用于点缀小图标,删除操作底色，订单，运单不同状态
#define kColor12b7f5   HEXCOLOR(0x12b7f5)  //用于点缀小图标，链接字体颜色，订单，运单不同状态
#define kColor2bd2c8   HEXCOLOR(0x2bd2c8)  //用于点缀小图标，订单，运单不同状态
#define kColor70ca57   HEXCOLOR(0x70ca57)  //用于点缀小图标，完成对勾底色订单，运单不同状态


#define kBGColor     kColorf5f5f5

//  font
#define kNormalFontOfSize(size)     [UIFont systemFontOfSize:size]  // 根据size创建font
#define kBoldFontOfSize(size)       [UIFont boldSystemFontOfSize:size]  // boldFont

#define kNormalFont     kNormalFontOfSize(14)
#define kSmallFont      kNormalFontOfSize(12)
#define kBigFont        kNormalFontOfSize(16)





#import <YYKit.h>



#endif /* Header_h */
