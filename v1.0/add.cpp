#include "add.h"

Person add()
{
    Person temp;
    cout <<"请输入联系人信息\n联系人的姓名:";
    cin >> temp.name;
    cout <<"联系人的性别:\n(0)女\t(1)男:"<<endl;
    do
    {
        cin >> temp.sex;
        if (temp.sex == 0 || temp.sex == 1)
        {
           break;
        }
        else
        {
            cout << "请输入正确的性别!"<<endl;
        }
    } while (1);
    
    cout <<"联系人的年龄:";
    do
    {
        cin >> temp.age;
        /*
        python用久了，习惯还没改过来
        --------------------------
        if (0 < temp.age < 100)
        {;
           break;
        }
        在C++中，表达式 0 < temp.age < 100 并不会按照你可能期望的方式工作。这是因为C++中的比较运算符 < 并不支持链式比较。
        这个表达式实际上是这样被解析的：
        首先计算 0 < temp.age，这会返回一个布尔值（true 或 false）。然后将这个布尔值转换为整数（true 变为 1，false 变为 0）并与 100 进行比较。
        由于布尔值转换为整数后要么是 0 要么是 1，因此 1 < 100 是 true，而 0 < 100 也是 true。但无论如何，这个表达式并不能正确地检查 temp.age 是否在 0 和 100 之间。
        正确的写法是使用逻辑与运算符 && 来连接两个比较表达式：
        */
        if(temp.age > 0 && temp.age < 100)
        {
            break;
        } 
        else
        {
            cout << "请输入正确的年龄!"<<endl;
        }
    } while (1);

    cout <<"联系人的电话:";
    cin >> temp.tel;
    cout <<"联系人的住址:";
    cin >> temp.home;
    return temp;
}

// !需要进行地址传递，而不是值传递
void add_person(Address_Book * p_abs)
{
    if (p_abs->size == MAX)
	{
		cout << "通信录已满，无法添加！" << endl;
		return;
	}
    else
    {
        Person temp;
        temp = add();
        p_abs -> peron_array[p_abs -> size] = temp;
        (p_abs -> size)++;
        bubble_age(p_abs);
    }
}

void modify_person(Address_Book * p_abs)
{
    string match;
    Person temp;
    cout <<"请输入想修改联系人的姓名:"<<endl;
    cin >> match;
    for (int i = 0; i < p_abs->size; i++)
    {
        if (p_abs->peron_array[i].name == match)
        {
            temp = add();
            p_abs->peron_array[i] = temp;  
            bubble_age(p_abs);
        }
        else
        {
            cout << "联系人不存在!"<<endl;
        }
    }
}

// 冒泡算法,按年龄排序
void bubble_age(Address_Book * p_abs)
{
    for (int i = 0; i < p_abs->size-1; i++)
    {
        for (int j = 0; j < p_abs->size-1-i; j++)
        {
            if(p_abs ->peron_array[j].age > p_abs ->peron_array[j+1].age)
            {
                Person temp;
                temp = p_abs->peron_array[j];
                p_abs->peron_array[j] = p_abs->peron_array[j+1];
                p_abs->peron_array[j+1] = temp;
            }
        }
    }
}
