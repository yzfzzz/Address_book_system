#include "base.h"

void Address_Book::find_person()
{
    Person *temp = new Person();
    cout << "请输入想搜索的联系人姓名" <<endl;
    cin >> temp->name;
    for (int i = 0; i < this->size; i++)
    {
        if (this->peron_array[i].name == temp->name)
        {
            cout << "姓名:"<<this->peron_array[i].name
            <<"\t性别:"<<this->sex_index[this->peron_array[i].sex]<<"\t"
            <<"\t年龄:"<<this->peron_array[i].age<<"\t"
            <<"\t电话:"<<this->peron_array[i].tel<<"\t"
            <<"\t住址:"<<this->peron_array[i].home<<"\t"<<endl;
            // break是用来跳出循环的，例如for，while，do-while都可以跳出，但不跳出函数
            // return是使整个函数返回的，后面的不管是循环里面还是循环外面的都不执行
            return;
        }
    }
    cout << "该联系人不存在!"<<endl;
    delete temp;
}