一、实验项目名称
C++程序的结构

二、实验目的
1.观察程序运行中变量的作用域、生存期和可见性，理解并能够运用作用域与可见性、对象的生存期。
2.学习类的静态成员的使用，掌握函数之间、类之间、对象之间数据的共享与保护方法。
3.学习多文件结构在C++程序中的使用，掌握编译预处理命令，学会用多文件结构和工程。

三、实验任务
1.运行下面的程序，观察变量x、y的作用域、生存期和可见性。 
//lab5_1.cpp
#include <iostream>
using namespace std;

void fn1(); 
int x = 1, y = 2; 

int main()
{
	cout << "Begin..." << endl;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
	cout << "Evaluate x and y in main()..." << endl;
	int x = 10, y = 20;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
	cout << "Step into fn1()..." << endl;
fn1();
cout << "Back in main" << endl;
cout << "x = " << x << endl;
cout << "y = " << y << endl;
return 0;
}
void fn1()
{
    int y = 200;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
2.实现客户机（CLIENT）类。声明字符型静态数据成员ServerName，保存其服务器名称；整型静态数据成员ClientNum，记录已定义的客户数量；定义静态函数ChangeServerName()改变服务器名称。在头文件client.h中声明类，在文件client.cpp中实现，在文件test.cpp中测试这个类，观察相应的成员变量取值的变化情况。

四、主要仪器设备及耗材
计算机、Visual Studio 2010及以上

五、实验步骤
1.运行下面的程序，观察变量x、y的作用域、生存期和可见性。 
将代码复制到IDE中运行即可, 观察到x y只在本大括号内的局部作用域中取值。

 	



2. 实现客户机（CLIENT）类。声明字符型静态数据成员ServerName，保存其服务器名称；整型静态数据成员ClientNum，记录已定义的客户数量；定义静态函数ChangeServerName()改变服务器名称。在头文件client.h中声明类，在文件client.cpp中实现，在文件test.cpp中测试这个类，观察相应的成员变量取值的变化情况。

//client.h


//client.cpp


//test.cpp

六、实验数据及处理结果

图1-1 观察x, y的作用域, 生存期和可见性


图1-2 Client 类测试




















七、思考讨论题或体会或对改进实验的建议（讨论记录）
讨论题：
变量和对象可以定义在不同的位置：函数体内、类体内、函数原型参数表内、

1.如何在同一个类的所有对象之间共享数据？比如需要记录一个类的对象总数。
使用static静态变量。

2.类的私有成员在类外不能直接访问，这是为了保护数据的安全性和隐藏细节。但是需要频繁访问私有数据时，调用接口函数的开销比较大。这个如何解决？
使用内联函数。

3.共享数据的安全性如何保证？
定义成为private形式。

4.哪些操作有试图改变常对象状态的危险？
直接调用static函数，而且这个static函数可以对static变量进行改变。

5.编译预处理命令中< >与“ ”的区别？
系统自带的头文件使用<>，这样编译器在系统文件目录下查找；而“”是在用户目录下进行查找，最后再在系统文件中查找。


6.当程序的规模略大些的时候，就不能将所有代码放在一个文件里了，那如何处理?
不能。将类的声明和定义分开成同名文件一个.cpp一个.h


























设计题：
1.一个人可以有多个活期储蓄账户，一个活期储蓄账户包括账号(id)、余额(balance)、年利率(rate)等信息，还包括显示账号信息（show）、存款（deposit）、取款（withdraw）、结算利息（settle）等操作。为此，设计一个类SavingsAccount，将id，balance，rate，lastDate，accumulation，total均作为其成员数据，将show，deposit，withdraw，settle，record，getTotal，getId、getBalance、getRate、accumulate均作为其成员函数。其中公共操作由私有成员函数record执行，该函数可以实现存款、取款、利息结算等功能，因为这些功能都需要修改当前的余额并且将余额的变动输出。引入的私有数据成员lastDate存储上一次余额变动的日期，accumulation用来存储上次计算利息以后直到最近一次余额变动时余额按日累加的值。其中，静态数据成员total用来记录各个账户的总金额，并为其增加相应的静态成员函数getTotal用来对其进行访问。并把getId、getBalance、getRate、show、accumulate（用来计算截至指定日期的账户余额按日累积值）这些不需要改变对象状态的成员函数声明为常成员函数。同时该类中所有日期均用一个整数表示，要求建立两个文件accout.h和account.cpp，分别存放SavingsAccount类的定义和实现。类图设计如图a所示：

图a   SavingsAccount类的UML图



代码:
//Exp5_account.h


//Exp5_account.cpp



//main.cpp


运行截图:

图b 输入测试数据


图7-1-2 输入两个账户的相关信息, 得出结果

2.请设计一个List类来表示以下功能：
(1)可存储0或多个某种类型的列表。
(2)可创建空列表。
(3)可在列表中添加数据项。
(4)课确定列表是否为空。
(5)课确定列表是否为满。
(6)可访问列表中的每一个数据项，并对它执行某种操作。
应提供头文件list.h包含类定义和实现文件list.cpp包含类方法的实现并创建一个简单程序来使用这个类。
注意：不允许插入或删除数据项。公有接口不应有数组索引、节点指针等。应使用通用概念来表达创建列表、在列表中添加数据项等操作。对于访问数据项以及执行操作，通常应使用将函数指针作为参数的函数来处理：
void visit(void (*pf)(Item &));
其中，pf指向一个将Item引用作为参数的函数（不是成员函数），Item是列表中数据项的类型，visit()函数将该函数用于列表中的每个数据项。


代码在下页.














【代码】
//list.h









//list.cpp






//main.cpp














【运行截图】

图7-2-1 List类数据测试



图7-2-2 List类数据测试


八、参考资料
[1] 郑莉,董渊,何江舟.C++语言程序设计(第四版)[M].北京.清华大学出版社,2010.
[2] Stephen Prata.C++ Primer Plus(第6版)(中文版)[M].北京.人民邮电出版社,2016.
