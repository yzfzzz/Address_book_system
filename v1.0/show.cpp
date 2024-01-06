#include "show.h"
// !用char sex_index[2] = {'男', '女'}报错
/*
如果使用 char 数组来存储性别信息，就会出现窄化转换的问题，
因为 char 只能存储单个字符，而不能存储整个字符串。而使用
 string 类型来存储性别信息则不会出现这个问题，因为 string
  可以容纳整个字符串，并且能够自动处理编码和转义等问题。

在C/C++中，单引号和双引号在定义字符数组时具有不同的含义。
双引号用于定义字符串，它会自动在字符串末尾添加一个空字符
('\0')作为字符串的结束标记。而单引号用于定义字符，它只包
含一个字符。在这个例子中，char arr[2] = {'男', '女'}; 
使用单引号而不是双引号的原因是，这里我们想要定义一个包含
两个字符的数组，而不是一个包含两个字符串的数组。每个字符
分别用单引号包围，表示它们是字符类型的值。
*/
string sex_index[2] = {"女","男"}; //字符串数组是sex_index[2]，而不是sex_index

void main_menu()
{
    cout <<"===========主菜单=========="<<endl;
    cout <<"|\t1.添加联系人\t  |"<<endl;
    cout <<"|\t2.显示联系人\t  |"<<endl;
    cout <<"|\t3.删除联系人\t  |"<<endl;
    cout <<"|\t4.查找联系人\t  |"<<endl;
    cout <<"|\t5.修改联系人\t  |"<<endl;
    cout <<"|\t6.清空联系人\t  |"<<endl;
    cout <<"|\t7.退出此系统\t  |"<<endl;
    cout <<"==========================="<<endl;
}

void print_ifo(Address_Book abs)
{
    cout << "*****************联系人信息*****************"<<endl;
    if(abs.size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
        for (int i = 0; i < abs.size; i++)
        {
            
            cout << "姓名:"<<abs.peron_array[i].name
            <<"\t性别:"<<sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t年龄:"<<abs.peron_array[i].age<<"\t"
            <<"\t电话:"<<abs.peron_array[i].tel<<"\t"
            <<"\t住址:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
    }
}