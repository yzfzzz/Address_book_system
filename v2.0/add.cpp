#include "base.h"

Person * Address_Book::add(Person * p_temp)
{
    cout <<"请输入联系人信息\n联系人的姓名:";
    cin >> p_temp->name;
    cout <<"联系人的性别:\n(0)女\t(1)男:"<<endl;
    do
    {
        cin >> p_temp->sex;
        if (p_temp->sex == 0 || p_temp->sex == 1)
        {
           break;
        }
        else
        {
            cout << "请输入正确的性别!"<<endl;
        }
    } while (1);
    
    cout <<"联系人的年龄:";
    cin >> p_temp->age;
    
    while (p_temp->age < 0 || p_temp->age > 100)
    {
        cout << "请输入正确的年龄!"<<endl;
        cin >> p_temp->age;
    }

    cout <<"联系人的电话:";
    cin >> p_temp->tel;
    cout <<"联系人的住址:";
    cin >> p_temp->home;
    return p_temp;
}

// !需要进行地址传递，而不是值传递
// 不传参数
void Address_Book::add_person()
{
    if (this->size == MAX)
	{
		cout << "通信录已满，无法添加！" << endl;
		return;
	}
    else
    {
        Person * p_temp = this->add(new Person());
        this -> peron_array[this -> size] = *p_temp;
        // !
        delete p_temp;
        (this -> size)++;
    }
}

void Address_Book::modify_person()
{
    string * p_match = new string();
    cout <<"请输入想修改联系人的姓名:"<<endl;
    cin >> *p_match;
    for (int i = 0; i < this->size; i++)
    {
        if (this->peron_array[i].name == *p_match)
        {
            Person * p_temp = this->add(new Person());
            this->peron_array[i] = *p_temp;  
            // bubble_age(this);
            delete p_temp;
            delete p_match;
        }
        else
        {
            cout << "联系人不存在!"<<endl;
        }
    }
}

// 冒泡算法,按年龄排序
void Address_Book::bubble_age()
{
    for (int i = 0; i < this->size-1; i++)
    {
        for (int j = 0; j < this->size-1-i; j++)
        {
            if(this ->peron_array[j].age > this ->peron_array[j+1].age)
            {
                Person temp;
                temp = this->peron_array[j];
                this->peron_array[j] = this->peron_array[j+1];
                this->peron_array[j+1] = temp;
            }
        }
    }
}
