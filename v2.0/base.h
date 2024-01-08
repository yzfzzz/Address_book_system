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


class Person
{
public:
    string name;
    int sex;
    int age;
    string tel;
    string home;

    Person();
    ~Person();
};

// new出来的是一段空间的首地址
class Address_Book
{
    friend ostream& operator<<(ostream& cout, Address_Book& abs);
    friend ofstream& operator<<(ofstream& ofs, Address_Book& abs);
public:
    //增
    Person * add(Person * p_temp);
    void add_person();
    void modify_person();
    void bubble_age();
    //删
    void delete_person();
    void clean_all();

    //找
    void find_person();

    //显示
    void main_menu();

    //读写文件
    void write();
    void read();

    // void print_ifo(Address_Book & abs);
    // 类内运算符重载时只能有且仅有一个参数；类内其他函数可以有多个参数。
    //ostream& operator<<(ostream& cout, Address_Book& abs);

    //构造函数
    Address_Book();

    //析构函数
    ~Address_Book();
    Person peron_array[MAX];
    string sex_index[2] = {"女","男"};
    string filePath = "./Address_Book_Data.txt";
    int size;
};

#endif