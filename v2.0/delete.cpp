#include "base.h"

void Address_Book::delete_person()
{
    Person * temp = new Person();
    int count;
    count = this->size;
    cout << "��������ɾ������ϵ������" <<endl;
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
        cout << "��ϵ������������!" <<endl;
    }
    else
    {
        cout << "�ɹ�ɾ��"<<temp->name<<"����ϵ�绰!"  <<endl;
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

