#include "find.h"

void find_person(Address_Book abs)
{
    Person temp;
    cout << "����������������ϵ������" <<endl;
    cin >> temp.name;
    for (int i = 0; i < abs.size; i++)
    {
        if (abs.peron_array[i].name == temp.name)
        {
            cout << "����:"<<abs.peron_array[i].name
            <<"\t�Ա�:"<<sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t����:"<<abs.peron_array[i].age<<"\t"
            <<"\t�绰:"<<abs.peron_array[i].tel<<"\t"
            <<"\tסַ:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
        else
        {
            cout << "����ϵ�˲�����!"<<endl;
        }
    }

}