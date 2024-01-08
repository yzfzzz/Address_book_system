#include "base.h"

void Address_Book::delete_person()
{
    Person * temp = new Person();
    int count;
    count = this->size;
    cout << "请输入想删除的联系人姓名" <<endl;
    cin >> temp->name;
    for (int i = 0; i < this->size; i++)
    {
        if (this->peron_array[i].name == temp->name)
        {
            for (int j = i+1; j < this->size; j++)
            {
                this->peron_array[i] = this->peron_array[j];
            }
            this->size--;    
        }
    }
    if (this->size == count)
    {
        cout << "联系人姓名不存在!" <<endl;
    }
    else
    {
        cout << "成功删除"<<temp->name<<"的联系电话!"  <<endl;
    }
    delete temp;
}

void Address_Book::clean_all()
{
    for (int i = 0; i < this->size; i++)
    {
       this ->peron_array[i] = {};
    }
    this ->size = 0;
}

