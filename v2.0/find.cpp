#include "base.h"

void Address_Book::find_person()
{
    Person *temp = new Person();
    cout << "����������������ϵ������" <<endl;
    cin >> temp->name;
    for (int i = 0; i < this->size; i++)
    {
        if (this->peron_array[i].name == temp->name)
        {
            cout << "����:"<<this->peron_array[i].name
            <<"\t�Ա�:"<<this->sex_index[this->peron_array[i].sex]<<"\t"
            <<"\t����:"<<this->peron_array[i].age<<"\t"
            <<"\t�绰:"<<this->peron_array[i].tel<<"\t"
            <<"\tסַ:"<<this->peron_array[i].home<<"\t"<<endl;
            // break����������ѭ���ģ�����for��while��do-while������������������������
            // return��ʹ�����������صģ�����Ĳ�����ѭ�����滹��ѭ������Ķ���ִ��
            return;
        }
    }
    cout << "����ϵ�˲�����!"<<endl;
    delete temp;
}