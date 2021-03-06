## 一、实验项目名称
### 类和对象

## 二、实验目的

1.掌握类的声明和使用。

2.掌握对象的声明和使用。

3.复习具有不同访问属性的成员的访问方式。

4.观察构造函数和析构函数的执行过程。

5.学习类的组合使用方法。

6.使用VS2010及以上的debug调试功能观察程序流程，跟踪观察类的构造函数、析构函数、成员函数的执行顺序。

## 三、实验任务
1.声明一个CPU类，包含等级（rank）、频率（frequency）、电压（voltage）等属性，有两个公有成员函数run、stop。其中，rank为枚举类型CPU_Rank，声明为enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7}，frequency为单位是MHz的整型数，voltage为浮点型的电压值。观察构造函数和析构函数的调用顺序。

2.声明一个简单的Computer类，有数据成员芯片（cpu）、内存（ram）、光驱（cdrom）等等，有两个公有成员函数run、stop。cpu为CPU类的一个对象，ram为RAM类的一个对象，cdrom为CDROM类的一个对象，声明并实现这个类。

3.设计一个用于人事管理的People（人员）类。考虑到通用性，这里只抽象出所有类型人员都具有的属性：number（编号）、sex（性别）、birthday（出生日期）、id（身份证号）等等。其中“出生日期”声明为一个“日期”类内嵌子对象。用成员函数实现对人员信息的录入和显示。要求包括：构造函数和析构函数、拷贝构造函数、内联成员函数、组合。

## 四、主要仪器设备及耗材
计算机、Visual Studio 2010及以上

## 五、实验步骤
1.声明一个CPU类，包含等级（rank）、频率（frequency）、电压（voltage）等属性，有两个公有成员函数run、stop。其中，rank为枚举类型CPU_Rank，声明为enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7}，frequency为单位是MHz的
整型数，voltage为浮点型的电压值。观察构造函数和析构函数的调用顺序。
CPU.h

CPU.cpp

2.声明一个简单的Computer类，有数据成员芯片（cpu）、内存（ram）、光驱（cdrom）等等，有两个公有成员函数run、stop。cpu为CPU类的一个对象，ram为RAM类的一个对象，cdrom为CDROM类的一个对象，声明并实现这个类。
Computer.h

Computer.cpp

RAM.h

RAM.cpp

CDROM.h

CDROM.cpp

3.设计一个用于人事管理的People（人员）类。考虑到通用性，这里只抽象出所有类型人员都具有的属性：number（编号）、sex（性别）、birthday（出生日期）、id（身份证号）等等。其中“出生日期”声明为一个“日期”类内嵌子对象。用成员函数实现对人员信息的录入和显示。要求包括：构造函数和析构函数、拷贝构造函数、内联成员函数、组合。
Person.h

Person.cpp
birthday.h

birthday.cpp

## 六、实验数据及处理结果

图1-1 CPU类测试

图1-2 Computer类测试

图1-3 Person人事管理类测试

## 七、思考讨论题或体会或对改进实验的建议（讨论记录）

### 讨论题：
**1.什么叫类？什么叫对象？他们之间的区别是什么？**

类是一个模板，它描述一类对象的行为和状态；而对象是类的一个实例。

**2.新类型的对象该如何被创建和销毁？**

Classname objectname；销毁在当前作用域范围结束时会自动调用析构函数进行销毁。

**3.如何进行对象的初始化和赋值？**

可以在创建对象时通过构造函数来进行初始化和赋值。

**4.对象作为函数的参数如何以值传递？**

在函数栈中创建一个临时对象，调用拷贝构造函数，将需要传递的对象赋值给形参。

**5.什么叫构造函数？构造函数的作用？**

与类名相同，没有返回值类型。类的私有成员变量不能在类的声明的时候完成初始化，所以可以使用构造函数和初始化列表对其进行初始化。在创建对象时自动调用。

**6.什么叫析构函数？析构函数的作用？**

在类名前加上一个~，没有返回值类型。当对象不再使用，或则当前作用域范围结束时，需要清理资源时会自动调用，也可以主动调用。

**7.如何使用结构体和联合体？他们之间的区别是什么？**

结构体是一种构造数据类型，把不同的数据类型组成一个整体；联合体是使几个不同类型的变量共占一段内存（相互覆盖），长度是联合体内最大变量的长度。
区别：在任何时候union联合体内只存放一个被选中的成员，而struct中各成员都占有直接的内存空间。

**8.为什么要使用枚举类？**

如果一个变量只有可数的几种类型，比如说性别或者一周的天数等等，就可以使用枚举类，可以避免在获取用户输入时发生输入非法的内容。
