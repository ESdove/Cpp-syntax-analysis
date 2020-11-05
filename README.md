---
title: C++学习
tags: 
renderNumberedHeading: true
grammar_cjkRuby: true
---
[TOC]

# C++发展介绍
## 编程语言排行榜TIOBE
> ==https://www.tiobe.com/tiobe-index/==

![C++热度](http://tc.holychen.cn/小书匠/1604575607300.png)

## C++应用领域
- 游戏（Cocos2d-X）、图像、多媒体、网络、嵌入式
- 数据库（Oracle、MySQL）、浏览器（Chrome）、搜索引擎（Google）
- 操作系统、驱动程序、编译器（GCC、LLVM）、编程语言（Swift）
- HPC（High Performance Computing，高性能计算）
- IOS开发（Runtime、AsyncDisplayKit）
- Android开发（NDK、fresco【匿名共享内存，Ashmem，Anonymous Shared Memory】）
- Java开发（JNI）
- ……
 
 **==总结 #9C27B0==**
 
- C++之所以应用范围如此广泛，得益于它的高效性、稳定性、跨平台性
- 虽然C++在很多大型应用中，无法施展拳脚；但在某些领域，如同巨人一般，而且是不可或缺的顶梁柱
- 基本只要是用到C++的地方，都是高大上的地方
  
 ## 有没有必要学习C++
 
 - C++ 可以说是当今很多流行语言（Java、Python等）的老祖宗，学习C++，相当于理解了流行语言的前世今生
 - 多尝试几种不同的编程语言，能提供不同的编程思维视角，站在更高的维度去思考代码
 - C++是一门在面向过程和面向对象方面都比较完善的语言，能让我们更接近真相（本质）
 - C++程序员转什么领域都可以很快上手
 - 如果你想做个普通的程序员，学好所熟悉的语言基本够用，如果想要成为一个有生产力的程序员，C++是进阶必备
 - 修炼内功，掌握本质，提升逼格
 - 程序员鄙视链：汇编 ->C->C++ ->Java、C# ->PHP
## 既然C++执行效率这么高，为什么还要出现新的编程语言？
- 每一门语言都有自己的优缺点，都有自己擅长的领域
- 新的编程语言趋向于更加简洁、高效（开发效率）
- 为了适应不同的应用场景，新的编程语言就诞生了

- [ ] 统计分析：R
- [ ] 网站开发：HTML、CSS、JavaScript
- [ ] 访问数据库：SQL
- [ ] 爬虫：Python
- [ ] ……

- [ ] 创造一门新的编程语言的成本，有时候会比改进一门编程语言的成本更低

## C++自身也在不断发展和完善
- [ ]  https://isocpp.org/std/status

![](http://tc.holychen.cn/小书匠/1604575607615.png)

# 利用汇编挖掘编程语言本质
## 学习建议
![](http://tc.holychen.cn/小书匠/1604575607303.png)

## 代码本质挖掘
![](http://tc.holychen.cn/小书匠/1604575607113.png)
- sizeof不是函数，是编译器特性
- C++中，++a是可以被赋值的，a ++不可以被赋值
- 对比if-else，编译器会对switch作一定的优化，提高执行效率
## 程序的本质
![](http://tc.holychen.cn/小书匠/1604575607306.png)
## 寄存器与内存
![](http://tc.holychen.cn/小书匠/1604575607311.png)
## 编程语言的发展
![](http://tc.holychen.cn/小书匠/1604575607179.png)
![](http://tc.holychen.cn/小书匠/1604575607313.png)
## 一些编程语言的本质区别
> ==汇编的格式和CPU架构有关==

![](http://tc.holychen.cn/小书匠/1604575607316.png)
## 编程语言分类
- 编译型的语言（不依赖虚拟机） C/C++/OC/Swift
- 脚本语言 Python/JS/PHP
- 编译型的语言（依赖虚拟机） Java/Ruby
 

# 开发环境搭建
## VS下载地址
https://visualstudio.microsoft.com
## 新建项目
![](http://tc.holychen.cn/小书匠/1604575607407.png)
## 字体设置
![](http://tc.holychen.cn/小书匠/1604575607587.png)
## 显示行号
![](http://tc.holychen.cn/小书匠/1604575607411.png)
## 大括号的位置
![](http://tc.holychen.cn/小书匠/1604575607230.png)
## 快捷键设置 - 添加/取消注释
![](http://tc.holychen.cn/小书匠/1604575607413.png)
## 常用快捷键
![](http://tc.holychen.cn/小书匠/1604575607414.png)
## 安装需要的组件
![](http://tc.holychen.cn/小书匠/1604575607484.png)
![](http://tc.holychen.cn/小书匠/1604575607591.png)
![](http://tc.holychen.cn/小书匠/1604575607232.png)
## 修改VS默认编码为UTF- 8
![](http://tc.holychen.cn/小书匠/1604575607593.png)
## VS项目文件说明
.vs目录是用来存储当前用户在解决方案中的工作配置，具体包括VS关闭前最后的窗口布局、最后打开的选项卡/操作记录/文件文档、某些自定义配置/开发环境、调试断点等这类设置信息和状态。这样每当用户关闭解决方案后再重新打开，就能继续之前的工作状态。

在VS2015之前的版本，这些信息都是散乱的保存在解决方案根目录下（最明显的参照物就是.suo文件），现在是将这些统一放在.vs这个隐藏文件夹里，如果没在Windows系统中开启查看隐藏的文件和文件夹，还是很容易无视的。

sln文件是整个解决方案的配置文件，（Microsoft Visual Studio Solution），通过为环境提供对项目、项目项和解决方案在磁盘上的位置的引用，可以将他们组织到解决方案中。

vcxproj文件是项目文件，保存了整个项目的配置信息。经过测试可以通过打开这个文件来直接打开这个项目以及解决方案。

vcxproj.filters文件是文件存放工程的虚拟目录信息，也就是在解决方案浏览器中的目录结构信息。

一般情况下，如果我们要把源码共享到github中，只需要提交工程相关的配置文件，不提交用户个人偏好相关的配置文件。所谓的个人偏好相关，是指根据用户个人的VS使用习惯而保存的配置信息，比如选择了查看所有文件选项，打开了某一个文件。而工程相关的配置是指工程建立相关的信息，不受用户偏好的影响，比如解决方案的名字是什么，这个解决方案下面有哪些project。所以，我们只需要上传sln配置文件、vcxproj和vcxproj.filters配置文件就可以了，当然还包括源码。
# 汇编语言
![](http://tc.holychen.cn/小书匠/1604575607234.png)
## AT&T汇编 vs Intel汇编
![](http://tc.holychen.cn/小书匠/1604575607871.png)
## x64汇编 - 寄存器
![](http://tc.holychen.cn/小书匠/1604575608078.png)
![](http://tc.holychen.cn/小书匠/1604575607613.png)
## x64汇编要点总结
![](http://tc.holychen.cn/小书匠/1604575607887.png)
![](http://tc.holychen.cn/小书匠/1604575607897.png)
## 内联汇编
![](http://tc.holychen.cn/小书匠/1604575607705.png)

# C++常用语法
## cin、cout
![](http://tc.holychen.cn/小书匠/1604575607899.png)

![断点调试ALT+G](http://tc.holychen.cn/小书匠/1604575607901.png)
## 函数重载（Overload）

用Java中的说法就是方法签名=方法名+参数类型，方法名相同，方法签名不同即为函数重载

![](http://tc.holychen.cn/小书匠/1604575607904.png)

因为函数体过于简单，所以编译器会做优化，禁止优化即可在IDA中看到call的过程

![函数命名倾轧](http://tc.holychen.cn/小书匠/1604575610237.png)
## 默认参数
![](http://tc.holychen.cn/小书匠/1604575607907.png)
![](http://tc.holychen.cn/小书匠/1604575607949.png)

默认参数只是编译器帮我们做了些事情，函数调用的时候可以不传默认参数，但实际反汇编看到的还是连同默认参数都会push入栈

![](http://tc.holychen.cn/小书匠/1604575610277.png)

## extern"C"
CPP想要调用C语言开发的第三方库，需要在声明中加extern"C"，否则CPP的Name Decoration会导致编译报错，所以第三方库的头文件需要加extern"C"，但此时C文件调用C写的第三方库时又会报错，原因是C语言源文件是不认识 extern"C"的，所以有个需求就是希望头文件在CPP中自动加上 extern"C，C文件就不要加，刚好在CPP文件中会自动定义__cplusplus这个宏，所以可以通过这个宏来区分是不是CPP环境

第三方库函数之间可能会发生相互调用，例如前面的函数调用后面的函数，所以第三方库包含自己的头文件也是很有必要的事情

一个头文件可能会多次包含，虽然多次声明不会报错，但是编译器预处理会浪费更多的时间，所以头文件也需要用宏来控制条件预编译，宏的名称也是随意的，但是有概率性两个不同头文件用了同一个宏，导致出错，所以约定俗称用文件名前后各加两个下划线

#ifndef、#define、#endif可以针对一个文件中的部分代码，而#pragma once只能针对整个文件

![](http://tc.holychen.cn/小书匠/1604575607951.png)
![](http://tc.holychen.cn/小书匠/1604575607954.png)
![](http://tc.holychen.cn/小书匠/1604575607956.png)
![](http://tc.holychen.cn/小书匠/1604575608010.png)
## #pragma once
![](http://tc.holychen.cn/小书匠/1604575608014.png)
## 内联函数（inline function）
![](http://tc.holychen.cn/小书匠/1604575608081.png)
## VS窥探内联的本质
![](http://tc.holychen.cn/小书匠/1604575608101.png)
## 内联函数与宏
![](http://tc.holychen.cn/小书匠/1604575608012.png)
## 表达式
![](http://tc.holychen.cn/小书匠/1604575608048.png)
## const
![](http://tc.holychen.cn/小书匠/1604575608136.png)
## 引用（Reference）
![](http://tc.holychen.cn/小书匠/1604575608168.png)
## 引用的本质
![](http://tc.holychen.cn/小书匠/1604575608086.png)
## 常引用（Const Reference）
![](http://tc.holychen.cn/小书匠/1604575608324.png)
## 数组的引用
![](http://tc.holychen.cn/小书匠/1604575608139.png)
## 变量地址总结
![](http://tc.holychen.cn/小书匠/1604575608143.png)

# 面向对象
## 面向对象的常见知识点
![](http://tc.holychen.cn/小书匠/1604575608145.png)

## 类
![](http://tc.holychen.cn/小书匠/1604575608346.png)
## C++编程规范
![](http://tc.holychen.cn/小书匠/1604575608184.png)
## 对象的内存布局
![](http://tc.holychen.cn/小书匠/1604575608387.png)
![](http://tc.holychen.cn/小书匠/1604575608497.png)
## this
![](http://tc.holychen.cn/小书匠/1604575608414.png)
## 思考
![](http://tc.holychen.cn/小书匠/1604575608198.png)
## 指针访问对象成员的本质
![](http://tc.holychen.cn/小书匠/1604575608416.png)
## 封装
![](http://tc.holychen.cn/小书匠/1604575608418.png)

## 内存空间的布局
![](http://tc.holychen.cn/小书匠/1604575608460.png)
## 堆空间
![](http://tc.holychen.cn/小书匠/1604575608493.png)
## X86环境（32bit）
![](http://tc.holychen.cn/小书匠/1604575608399.png)
## 堆空间的初始化
![](http://tc.holychen.cn/小书匠/1604575608761.png)
## memset
![](http://tc.holychen.cn/小书匠/1604575608546.png)
## 对象的内存
![](http://tc.holychen.cn/小书匠/1604575608655.png)
## 构造函数（Constructor）
![](http://tc.holychen.cn/小书匠/1604575608658.png)
## 构造函数的调用
![](http://tc.holychen.cn/小书匠/1604575608698.png)
## 默认情况下，成员变量的初始化
![](http://tc.holychen.cn/小书匠/1604575608840.png)
## 成员变量的初始化
![](http://tc.holychen.cn/小书匠/1604575608495.png)
## 析构函数（Destructor）
![](http://tc.holychen.cn/小书匠/1604575608739.png)
![](http://tc.holychen.cn/小书匠/1604575608534.png)
![](http://tc.holychen.cn/小书匠/1604575608791.png)
![](http://tc.holychen.cn/小书匠/1604575608837.png)
![](http://tc.holychen.cn/小书匠/1604575608842.png)
## 声明和实现分离
![](http://tc.holychen.cn/小书匠/1604575608884.png)
## 命名空间
![](http://tc.holychen.cn/小书匠/1604575608907.png)
## 思考
![](http://tc.holychen.cn/小书匠/1604575608909.png)
## 命名空间的嵌套
![](http://tc.holychen.cn/小书匠/1604575608927.png)
## 命名空间的合并
![](http://tc.holychen.cn/小书匠/1604575608792.png)
![](http://tc.holychen.cn/小书匠/1604575609042.png)
## 其他编程语言的命名空间
![](http://tc.holychen.cn/小书匠/1604575608844.png)
## 继承
![](http://tc.holychen.cn/小书匠/1604575609052.png)
## 对象的内存布局
![](http://tc.holychen.cn/小书匠/1604575609069.png)
## 成员访问权限
![](http://tc.holychen.cn/小书匠/1604575609071.png)
## 初始化列表
![](http://tc.holychen.cn/小书匠/1604575609120.png)
## 思考
![](http://tc.holychen.cn/小书匠/1604575609123.png)
![](http://tc.holychen.cn/小书匠/1604575609125.png)
## 初始化列表与默认参数配合使用
![](http://tc.holychen.cn/小书匠/1604575609171.png)
## 构造函数的互相调用
![](http://tc.holychen.cn/小书匠/1604575609210.png)
## 父类的构造函数
![](http://tc.holychen.cn/小书匠/1604575609074.png)
## 继承体系下的构造函数实例
![](http://tc.holychen.cn/小书匠/1604575609236.png)
## 构造、析构顺序
![](http://tc.holychen.cn/小书匠/1604575609238.png)
## 父类指针、子类指针
![](http://tc.holychen.cn/小书匠/1604575609242.png)
## 多态
![](http://tc.holychen.cn/小书匠/1604575609280.png)
## 虚函数
![](http://tc.holychen.cn/小书匠/1604575609194.png)
## 虚表
![](http://tc.holychen.cn/小书匠/1604575609301.png)
## 虚表（X86环境的图）

![](http://tc.holychen.cn/小书匠/1604575609313.png)

![](http://tc.holychen.cn/小书匠/1604575609377.png)
## 虚表汇编分析
![](http://tc.holychen.cn/小书匠/1604575610007.png)
## VS的内存窗口
![](http://tc.holychen.cn/小书匠/1604575609823.png)
## 调用父类的成员函数实现
![](http://tc.holychen.cn/小书匠/1604575609517.png)
## 虚析构函数
![](http://tc.holychen.cn/小书匠/1604575609519.png)
## 纯虚函数
![](http://tc.holychen.cn/小书匠/1604575609553.png)
## 多继承
![](http://tc.holychen.cn/小书匠/1604575609738.png)
## 多继承体系下的构造函数调用
![](http://tc.holychen.cn/小书匠/1604575609766.png)
## 多继承 - 虚函数
![](http://tc.holychen.cn/小书匠/1604575609860.png)
## 同名函数
![](http://tc.holychen.cn/小书匠/1604575609971.png)
## 同名成员变量
![](http://tc.holychen.cn/小书匠/1604575609994.png)
## 菱形继承
![](http://tc.holychen.cn/小书匠/1604575609996.png)
![](http://tc.holychen.cn/小书匠/1604575610012.png)
## 虚继承
![](http://tc.holychen.cn/小书匠/1604575609888.png)
![](http://tc.holychen.cn/小书匠/1604575610038.png)
## 静态成员（static）
![](http://tc.holychen.cn/小书匠/1604575610053.png)
![](http://tc.holychen.cn/小书匠/1604575610085.png)
## 静态成员经典应用 - 单例模式
![](http://tc.holychen.cn/小书匠/1604575610002.png)
## cosnt成员
![](http://tc.holychen.cn/小书匠/1604575610234.png)
## 应用类型成员
![](http://tc.holychen.cn/小书匠/1604575610136.png)
## 拷贝构造函数（Copy Constructor）
![](http://tc.holychen.cn/小书匠/1604575610304.png)
![](http://tc.holychen.cn/小书匠/1604575610140.png)
## 调用父类的拷贝构造函数
![](http://tc.holychen.cn/小书匠/1604575610455.png)
## 拷贝构造函数
![](http://tc.holychen.cn/小书匠/1604575610518.png)
## 深拷贝、浅拷贝
![](http://tc.holychen.cn/小书匠/1604575610520.png)
![](http://tc.holychen.cn/小书匠/1604575610523.png)
![](http://tc.holychen.cn/小书匠/1604575610525.png)
## 深拷贝示例
![](http://tc.holychen.cn/小书匠/1604575610597.png)
## 对象型参数和返回值
![](http://tc.holychen.cn/小书匠/1604575611091.png)
## 匿名对象（临时对象）
![](http://tc.holychen.cn/小书匠/1604575610665.png)
## 隐式构造
![](http://tc.holychen.cn/小书匠/1604575610708.png)
## 编译器自动生成的构造函数
![](http://tc.holychen.cn/小书匠/1604575610787.png)
## 友元
![](http://tc.holychen.cn/小书匠/1604575610791.png)
## 内部类
![](http://tc.holychen.cn/小书匠/1604575610873.png)
## 内部类 - 声明和实现分离
![](http://tc.holychen.cn/小书匠/1604575610898.png)
## 局部类
![](http://tc.holychen.cn/小书匠/1604575611061.png)

# 其它语法
## 运算符重载（operator overload）
![](http://tc.holychen.cn/小书匠/1604575611094.png)
![](http://tc.holychen.cn/小书匠/1604575610733.png)
![](http://tc.holychen.cn/小书匠/1604575611165.png)
## 调用父类的运算符重载函数
![](http://tc.holychen.cn/小书匠/1604575611168.png)
## 单例模式补充
![](http://tc.holychen.cn/小书匠/1604575611184.png)
## 仿函数（函数对象）
![](http://tc.holychen.cn/小书匠/1604575611186.png)
## 运算符重载注意点
![](http://tc.holychen.cn/小书匠/1604575611097.png)
## 模板（template）
![](http://tc.holychen.cn/小书匠/1604575611224.png)
![](http://tc.holychen.cn/小书匠/1604575611228.png)
![](http://tc.holychen.cn/小书匠/1604575611128.png)
## 函数模板
![](http://tc.holychen.cn/小书匠/1604575611232.png)
## 多参数模板
![](http://tc.holychen.cn/小书匠/1604575611189.png)
## 类模板
![](http://tc.holychen.cn/小书匠/1604575611313.png)
## 类模板中的友元函数
![](http://tc.holychen.cn/小书匠/1604575611348.png)
![](http://tc.holychen.cn/小书匠/1604575611365.png)
## 类型转换
![](http://tc.holychen.cn/小书匠/1604575611222.png)
## const_cast
![](http://tc.holychen.cn/小书匠/1604575611230.png)
## dynamic_cast
![](http://tc.holychen.cn/小书匠/1604575611378.png)
## static_cast
![](http://tc.holychen.cn/小书匠/1604575611381.png)
## reinterpret_cast
![](http://tc.holychen.cn/小书匠/1604575611428.png)
## C++标准的发展
![](http://tc.holychen.cn/小书匠/1604575611484.png)
## C++11新特性
![](http://tc.holychen.cn/小书匠/1604575611487.png)
## Lambda表达式
![](http://tc.holychen.cn/小书匠/1604575611489.png)
## Lambda表达式 - 示例
![](http://tc.holychen.cn/小书匠/1604575611688.png)
## Lambda表达式 - 外部变量捕获
![](http://tc.holychen.cn/小书匠/1604575611810.png)
## Lambda表达式 - mutable
![](http://tc.holychen.cn/小书匠/1604575611405.png)
## C++14
![](http://tc.holychen.cn/小书匠/1604575611642.png)
## C++17
![](http://tc.holychen.cn/小书匠/1604575611825.png)
![](http://tc.holychen.cn/小书匠/1604575611657.png)
## 错误
![](http://tc.holychen.cn/小书匠/1604575611582.png)
## 异常
![](http://tc.holychen.cn/小书匠/1604575612002.png)
## 异常的抛出声明
![](http://tc.holychen.cn/小书匠/1604575611691.png)
## 自定义异常类型
![](http://tc.holychen.cn/小书匠/1604575611739.png)
## 拦截所有类型的异常
![](http://tc.holychen.cn/小书匠/1604575611584.png)
## 标准异常（std）
![](http://tc.holychen.cn/小书匠/1604575612411.png)
![](http://tc.holychen.cn/小书匠/1604575611868.png)
## 智能指针（Smart Pointer）
![](http://tc.holychen.cn/小书匠/1604575611690.png)
## 智能指针的简单自实现
![](http://tc.holychen.cn/小书匠/1604575612022.png)
## shared_ptr
![](http://tc.holychen.cn/小书匠/1604575612024.png)
## shared_ptr的原理
![](http://tc.holychen.cn/小书匠/1604575612025.png)
## 思考下面代码有没有问题
![](http://tc.holychen.cn/小书匠/1604575611865.png)
## shared_ptr的循环引用
![](http://tc.holychen.cn/小书匠/1604575612026.png)
## weak_ptr
![](http://tc.holychen.cn/小书匠/1604575612054.png)
## weak_ptr解决循环引用
![](http://tc.holychen.cn/小书匠/1604575612004.png)
## unique_ptr
![](http://tc.holychen.cn/小书匠/1604575612056.png)


