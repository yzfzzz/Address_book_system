/*
在这个例子中，#ifndef MAININIT和#define MAININIT这两行代码的作用是检查MAININIT
这个宏是否已经定义了。如果这个宏还没有定义，那么编译器就会继续处理头文件中的其他内容，并
且在这个头文件结束时（即在#endif指令处），MAININIT这个宏将被定义。
*/
#ifndef MAININIT
#define MAININIT
#include<iostream>
#include <string>
using namespace std;
#define MAX 1000 //define不用加分号

struct Person
{
    string name;
    int sex;
    int age;
    string tel;
    string home;
};

struct Address_Book
{
    Person peron_array[MAX];
    int size;
};

#endif