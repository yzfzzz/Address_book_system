# 通讯录管理系统(C++)

## V1.0

黑马程序员基础教程的练手项目，本仓库相比原版有以下改进

- 函数分文件编写，不同的文件对应不同的功能
- 只有修改内存才允许访问地址，否则使用值传递开辟新的地址空间
- 冒泡算法进行对年龄进行升序排列，更适合新手练习
- input采用string而不是int，减少因用户输入格式造成的问题



## V2.0

在1.0版本上进行改进，主要包括：

- 结构体使用类进行重写，涉及this指针

- 对内存进行手动创建和释放，涉及new、delete的使用

- 改进显示函数，涉及左移运算符重载，读写文件操作、友元等方面的知识

- 初始化类的size变量，并提供构造函数和析构函数的接口、

- 修复了`delete_person()`中"联系人姓名不存在!"一直刷新的bug

  
