#include "delete.h"

void delete_person(Address_Book * p_abs)
{
    Person temp;
    int count;
    count = p_abs->size;
    cout << "��������ɾ������ϵ������" <<endl;
    cin >> temp.name;
    for (int i = 0; i < p_abs->size; i++)
    {
        if (p_abs->peron_array[i].name == temp.name)
        {
            for (int j = i+1; j < p_abs->size; j++)
            {
                p_abs->peron_array[i] = p_abs->peron_array[j];
            }
            p_abs->size--;    
        }
    }
    if (p_abs->size == count)
    {
        cout << "��ϵ������������!" <<endl;
    }
    else
    {
        cout << "�ɹ�ɾ��"<<temp.name<<"����ϵ�绰!"  <<endl;
    }
}

void clean_all(Address_Book * p_abs)
{
    for (int i = 0; i < p_abs->size; i++)
    {
       p_abs ->peron_array[i] = {};
    }
    p_abs ->size = 0;
}

