/*
1.驼峰命名法：函数名通常以小写字母开头，后续单词的首字母大写。例如：getTotal、calculateSum。
2.下划线命名法：函数名由下划线分隔的单词组成。例如：get_total、calculate_sum。
3.帕斯卡命名法：函数名以大写字母开头，后续单词的首字母大写。例如：GetTotal、CalculateSum。
*/
#include "base.h"
int main()
{   
    Address_Book * abs = new Address_Book();
    string input;
    abs->main_menu();
    while (1)
    {
        cout <<"请选择!"<<endl;
        cin >> input;

        if (input == "1")
        {
            abs->add_person();//abs是变量不是数组，而add操作应该改变数据，而不是额外开辟地址空间保存形参
            system("cls");
            /*
            system("cls"); 是一个在许多编程语言中使用的命令，特别是在C和C++中。这个命令用于执行外部系统命令。
            在这个例子中，它试图在Windows环境中执行 cls 命令，该命令的功能是清屏。
            */
            cout << "成功添加!\n\n"<<endl;
            abs->main_menu();
        }
        else if(input == "2")
        {
            cout << *abs;
        }
        else if (input == "3")
        {
            abs->delete_person();
            abs->main_menu();
        }
        else if (input == "4")
        {
            abs->find_person();
            abs->main_menu();
        }
        else if (input == "5")
        {
            abs->modify_person();
            abs->main_menu();
        }
        else if (input == "6")
        {
            abs->clean_all();
            abs->main_menu();
        }
        else if(input == "7")
        {
            break;
        }
        else
        {
            cout <<"操作无效!"<<endl;
        }
    }
    cout <<"成功退出系统!"<<endl;
    abs->write();
    delete abs;
    system("cls");
    system("pause");
    return 0;
    /*
    return 0; 在 main() 函数中，它实际上是告诉操作系统：“程序已经成功完成”。一旦这个
    return 语句被执行，程序就会立即退出，不论 switch 语句是否还在执行其他分支。简而
    言之，return 0; 用于指示程序成功结束，并退出整个程序。
    */
}