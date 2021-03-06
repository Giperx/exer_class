## 一、实验项目名称

C++简单程序设计（4学时）

## 二、实验目的

1.学会编写简单的C++程序。

2.复习基本数据类型变量和常量的应用。

3.复习运算符与表达式的应用。

4.复习结构化程序设计基本控制结构的运用。

5.复习自定义数据类型的应用。

6.练习使用简单的输入输出。

7.观察头文件的作用。

8.学会使用Visual Studio 开发环境中的debug调试功能：单步执行、设置断点、观察变量值。

## 三、实验基本原理

1.输入并运行例题，即：用do-while语句编程，求自然数1~10之和。程序正确运行之后，去掉源程序中#include语句，重新编译，观察会有什么问题。

2.将do-while语句用for语句代替，完成相同的功能。

3.编程计算图形的面积。程序可计算圆形、长方形、正方形的面积，运行时先提示用户选择图形的类型，然后，对圆形要求用户输入半径值，对长方形要求用户输入长和宽的值，对正方形要求用户输入边长的值，计算出面积的值后将其显示出来。

4.使用debug调试功能观察任务3程序运行中变量值的变化情况。

5.声明一个表示时间的结构体，可以精确表示年、月、日、小时、分、秒；提示用户输入年、月、日、小时、分、秒的值，然后完整地显示出来。

## 四、主要仪器设备及耗材

计算机、Visual Studio 2010或其他编译环境

## 五、实验步骤

## 六、实验数据及处理结果


5、运行结果

## 七、思考讨论题或体会或对改进实验的建议（讨论记录）

可以尝试对程序的健壮性进行完善。

#### 讨论题：

**1、C++到现在为止已经有几个标准，每个标准都是在前些标准中增加了哪些内容？**

六个。C++98	03	11	14	17	20
98和03没有太大的差别；
11则与之前的版本差别比较大，比如增加了自动类型推断auto，新增基于范围的for循环，空指针nullptr取代之前的NULL等等。

****2**、C++既可以编写面向过程程序，又可以编写面向对象程序，面向对过程和面向对象有什么区别？**

面向过程性能比面向对象高，因为面向对象需要对类进行实例化；但是面向对象易于维护、易复用、易扩展，因为面向对象有封装、继承、多态三大特性，可以设计除低耦合的系统。

**3、如何理解C++中输入流和输出流，举例说明。**

C++输入输出包含三方面。一个是对系统指定标准设备的输入输出，既标准I/O，有如对象cin、cout等；一个是以外村磁盘文件对象进行输入和输出，文件I/O；还有一个是对内存中指定空间进行输入和输出，串I/O。

**4、C++程序和C程序在写法上有什么区别？**

大题框架相同，先是引入头文件，然后是main函数。但是向C++的标准输入输出用的是cin、cout还有流运算符，而c标准是使用printf和scanf。还有c++和以定义使用class类，里面可以声明定义变量和函数，但是c没有类只有结构体，而且不能在结构体内定义函数。

**5、在C++程序中为什么要加上using namespace std;这行语句，不用这行语句，C++程序能正常运行吗？**	

Namespace是指标识符的各种可见范围，而std是c++标准程序库中定义所有标识符的namespace。不加这行语句可以正常运行，但是要在标识符前加上std：：才能正常运行。

