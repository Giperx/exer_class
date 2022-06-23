## 一、实验项目名称
### 多态性

## 二、实验目的
1.掌握运算符重载原理和方法；

2.理解动态多态性的原理； 

3.掌握通过虚函数实现的多态性的方法；

4.掌握纯虚函数和抽象类的概念和设计方法。 

## 三、实验任务
1.声明Point类，有坐标_x，_y两个成员变量；对Point类重载“++”（自增）、“--”（自减）运算符，实现对坐标值的改变。

2.声明一个车（vehicle）基类，有Run、Stop等成员函数，由此派生出自行车（bicycle）类、汽车（motorcar）类，从bicycle和motorcar派生出摩托车（motorcycle）类，它们都有Run、Stop等成员函数。观察虚函数的作用。

3.对实验六中的people类重载“==”运算符和“=”运算符，“==”运算符判断两个people类对象的id属性的大小；“=”运算符实现people类对象的赋值操作。

## 四、主要仪器设备及耗材
计算机、Visual Studio 2010及以上

## 五、实验步骤
1.声明Point类，有坐标_x，_y两个成员变量；对Point类重载“++”（自增）、“--”（自减）运算符，实现对坐标值的改变。

2.声明一个车（vehicle）基类，有Run、Stop等成员函数，由此派生出自行车（bicycle）类、汽车（motorcar）类，从bicycle和motorcar派生出摩托车（motorcycle）类，它们都有Run、Stop等成员函数。观察虚函数的作用。

3.对实验六中的people类重载“==”运算符和“=”运算符，“==”运算符判断两个people类对象的id属性的大小；“=”运算符实现people类对象的赋值操作。

## 六、实验数据及处理结果
1.声明Point类，有坐标_x，_y两个成员变量；对Point类重载“++”（自增）、“--”（自减）运算符，实现对坐标值的改变。

图6-1 Point类运算符重载测试

2.声明一个车（vehicle）基类，有Run、Stop等成员函数，由此派生出自行车（bicycle）类、汽车（motorcar）类，从bicycle和motorcar派生出摩托车（motorcycle）类，它们都有Run、Stop等成员函数。观察虚函数的作用。

图6-2 virtual 虚函数测试

3.对实验六中的people类重载“==”运算符和“=”运算符，“==”运算符判断两个people类对象的id属性的大小；“=”运算符实现people类对象的赋值操作。

图6-3 virtual People类重载运算符测试

## 七、思考讨论题或体会或对改进实验的建议（讨论记录）

**讨论题：**

**1.什么是多态性？多态的实现机制是？**

多态是在不同继承关系的类对象，调用同一函数时产生的不同行为。

实现多态需要两个条件：调用函数的对象必须是指针或者引用，被调用函数必须是虚函数，而且在派生类中完成了虚函数的重写。

**2.基类指针明明指向的是派生类对象，为什么运行时就不能自动找到派生类定义的函数呢？如何让程序能在运行时根据指针指向的实际对象，找到该对象的函数？**

派生类对象前面一部分是复制了一份基类对象的成员，包括虚函数表的指针。可以将这个对象的函数在基类中声明成虚函数，这样就能实现多态。
 
**3.类是否一定要给出纯虚函数的实现？**

是。子类不实现就还是抽象类。

**4.在C++中虚函数的实现机制是什么?**

虚函数的实现机制是含有虚函数的类对象中会有虚函数表指针。

**5.在C++中能否声明虚析构函数?作用是？**

可以声明。如果类中有虚函数就建议将析构函数声明为虚函数。目的是为了避免内存泄露。当实现了基类指针指向派生类对象时，在删除回收这个基类指针时，如果析构函数不是虚函数，就直接调用了基类的析构函数，这样没有调用派生类的析构函数造成内存泄漏。


**设计题：**

1.在实验6设计题基础上进行如下修改：

(1)将show函数声明为虚函数；

(2)在Account类中添加deposit，withdraw，settle这3个函数的声明，且将他们都声明为纯虚函数，使Account类变成了抽象类；

(3)因为储蓄账户一年结算一次，信用账户一月结算一次，所以调用settle函数时将二者允许接收的参数统一设置为每月1日，同时对活期储蓄账户的settle函数进行修改，使它在结算利息之前先判断是否为1月，只有参数所给的日期是1月时才进行结算；

(4)将主函数改为由用户输入账户编号、对账户的操作类型和操作的参数，以增加程序的灵活性；

(5)对Date类中原先用来计算两日期相差天数的distance函数改为“—”运算符，使得计算两日期相差天数的写法更加直观。

