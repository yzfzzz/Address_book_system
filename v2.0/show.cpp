#include "base.h"
void Address_Book::main_menu()
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

/* 旧版的显示函数，已停用
void Address_Book::print_ifo(Address_Book & abs)
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
            <<"\t性别:"<<abs.sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t年龄:"<<abs.peron_array[i].age<<"\t"
            <<"\t电话:"<<abs.peron_array[i].tel<<"\t"
            <<"\t住址:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
    }
}*/

// 重载cout
ostream& operator<<(ostream& cout, Address_Book& abs)
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
            <<"\t性别:"<<abs.sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t年龄:"<<abs.peron_array[i].age<<"\t"
            <<"\t电话:"<<abs.peron_array[i].tel<<"\t"
            <<"\t住址:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
    }
    return cout;
}