## 一、实验项目名称
### 继承与派生

## 二、实验目的
1.学习声明和使用类的继承关系，声明派生类；

2.熟悉不同继承方式下对基类成员的访问控制；

3.学习利用虚基类解决二义性问题。

## 三、实验任务
1.声明一个基类Animal，有私有整型成员变量age，构造其派生类dog，在其成员函数SetAge(int n)中直接给age赋值，看看会有什么问题，把age改为公有成员变量，还会有问题吗？编程试试看。

2.声明一个基类BaseClass，有整型成员变量Number，构造其派生类DerivedClass，观察构造函数和析构函数的执行情况。

3.声明一个车（vehicle）基类，具有MaxSpeed、Weight等成员变量，Run、Stop等成员函数，由此派生出自行车（bicycle）类、汽车（motorcar）类。自行车（bicycle）类有高度（Height）等属性，汽车（motorcar）类有座位数（SeatNum）等属性。从bicycle和motorcar派生出摩托车（motorcycle）类，在继承过程中，注意把vehicle设置为虚基类。如果不把vehicle设置为虚基类，会有什么问题？编程试试看。

4.从实验6中的people（人员）类派生出student（学生）类，添加属性：班号char classNO[7]；从people类派生出teacher（教师）类，添加属性：职务char principalship[11]、部门char department[21]。从student类中派生出graduate（研究生）类，添加属性：专业char subject[21]、导师teacher adviser；从graduate类和teacher类派生出TA（助教生）类，注意虚基类的使用。重载相应的成员函数，测试这些类。

## 四、主要仪器设备及耗材
计算机、Visual Studio 2010及以上

## 五、实验步骤
1.声明一个基类Animal，有私有整型成员变量age，构造其派生类dog，在其成员函数SetAge(int n)中直接给age赋值，看看会有什么问题，把age改为公有成员变量，还会有问题吗？编程试试看。
报错

将age改为public变量后可以运行。

2.声明一个基类BaseClass，有整型成员变量Number，构造其派生类DerivedClass，观察构造函数和析构函数的执行情况。
BaseClass.h

BaseClass.cpp

DerivedClass.h

TestkDerived.cpp

3.声明一个车（vehicle）基类，具有MaxSpeed、Weight等成员变量，Run、Stop等成员函数，由此派生出自行车（bicycle）类、汽车（motorcar）类。自行车（bicycle）类有高度（Height）等属性，汽车（motorcar）类有座位数（SeatNum）等属性。从bicycle和motorcar派生出摩托车（motorcycle）类，在继承过程中，注意把vehicle设置为虚基类。如果不把vehicle设置为虚基类，会有什么问题？编程试试看。

4.从实验5中的people（人员）类派生出student（学生）类，添加属性：班号char classNO[7]；从people类派生出teacher（教师）类，添加属性：职务char principalship[11]、部门char department[21]。从student类中派生出graduate（研究生）类，添加属性：专业char subject[21]、导师teacher adviser；从graduate类和teacher类派生出TA（助教生）类，注意虚基类的使用。重载相应的成员函数，测试这些类。

## 六、实验数据及处理结果
1.声明一个基类Animal，有私有整型成员变量age，构造其派生类dog，在其成员函数SetAge(int n)中直接给age赋值，看看会有什么问题，把age改为公有成员变量，还会有问题吗？编程试试看。

2.声明一个基类BaseClass，有整型成员变量Number，构造其派生类DerivedClass，观察构造函数和析构函数的执行情况。

图6-1 构造、析构函数执行顺序

3.声明一个车（vehicle）基类，具有MaxSpeed、Weight等成员变量，Run、Stop等成员函数，由此派生出自行车（bicycle）类、汽车（motorcar）类。自行车（bicycle）类有高度（Height）等属性，汽车（motorcar）类有座位数（SeatNum）等属性。从bicycle和motorcar派生出摩托车（motorcycle）类，在继承过程中，注意把vehicle设置为虚基类。如果不把vehicle设置为虚基类，会有什么问题？编程试试看。

如果在继承时不设置为虚基类，那么党motorcycle类在实例化对象时，就会出现三组vehicle类的成员变量，一组是vehicle类的成员变量，一组是bicycle类从vehicle类继承下来的成员变量，一组是motorcar类从vehicle类继承下来的成员变量。
图6-2 vehicle类程序结果

4.从实验6中的people（人员）类派生出student（学生）类，添加属性：班号char classNO[7]；从people类派生出teacher（教师）类，添加属性：职务char principalship[11]、部门char department[21]。从student类中派生出graduate（研究生）类，添加属性：专业char subject[21]、导师teacher adviser；从graduate类和teacher类派生出TA（助教生）类，注意虚基类的使用。重载相应的成员函数，测试这些类。

图6-3-1 Person类测试

图6-3-2 Student类测试

图6-3-3 Graduate类测试

图6-3 TA派生类测试

## 七、思考讨论题或体会或对改进实验的建议（讨论记录）
思考：派生功能的确很方便，但是也有很多坑，容易产生奇怪的bug，尤其是在重载函数和重写函数这一块，经常与预期结果不同。等学完后续内容再来回头看这一块，可能会有所解决吧。

**讨论题：**

**1.public、protected、private之间的差别是？**

public 表示共有；类的数据成员和函数可以被该类对象和派生类访问。

private 私有型；自己的类可以访问，但派生类不能访问。

protected 保护型；自身类和派生类可以访问相当于自身的private型成员，它同private的区别就是在对待派生类的区别上。


**2.派生类构造函数执行的次序是？**

先执行顶层父类的构造函数，再依次往下执行，最后执行派生类自己的构造函数。

**3.继承和派生的目的是？**

保持已有类的特征构造新类的过程为继承，在已有类的基础上新增特性而产生新类的过程称为派生。继承实现代码重用；派生实现源程序的改造。

**4.什么叫虚基类？它的作用是？**

当一个类多次作为一个派生类的间接基类，可以在声明其基类时添加virtual声明为虚基类。虚基类提供了一种方法，可以在使用多重继承的类层次中节省空间和避免不确定性。

**5.组合与继承有什么共同点和差异？通过组合生成的类与被组合的类之间的逻辑关系是什么？继承的呢？**

组合和继承都是软件重用的重要方式，有效利用已有类的资源。而组合是has-A关系，而继承是is-A关系。

**6.基类与派生类的对象、指针或引用之间，哪些情况下可以隐含转换，哪些情况下可以显示转换？在涉及多重继承或虚继承的情况下，在转换时会面临哪些新问题？**

在用到基类对象时，可以用其子类对象代替。派生类对象可以向基类对象进行赋值，在赋值时舍弃派生类自己的成员；派生类对象可以替代基类对象向基类对象的引用进行赋值或初始化，指向基类对象的指针变量也可以指向派生类对象。
多用多重继承容易出现二义性问题。


**设计题：**
1.在实验六设计题基础上进行如下修改：

(1)设计基类Account用来描述所有账号的共性，它的派生类为SavingsAccount，再派生出表示信用账户的类CreditAccount；

(2)保留数据成员：id，balance，total及show函数；

(3)record和error成员函数权限改为protected，并设置一个保护的构造函数共派生类调用；

(4)把deposit、withdraw、settle放到各个派生类中去；

(5)rate、credit、年费fee以及它们的成员函数都作为相应派生类的成员；

(6)为CreditAccount类定义同名show函数将可用信用额度和账号及余额一起输出，getAvailableCredit函数用来计算可用的信息额度；

(7)建立新类，提供计算一项数值的按日累加之和所需的接口，并在派生类中实例化，通过实例计算利息，该类包括3个数据成员：表示被累加数值上次变更日期的lastDate、被累加数值当前值value以及到上次变更被累加数值为止的按日累加总和sum，该类包括4个成员函数：构造函数、用来计算到指定日期的累加结果函数getSum、用来在指定日期更改数值的change以及用来将累加器清零并重新设定初始日期和数值的reset。


