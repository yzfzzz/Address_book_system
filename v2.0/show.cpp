#include "base.h"
void Address_Book::main_menu()
{
    cout <<"===========���˵�=========="<<endl;
    cout <<"|\t1.�����ϵ��\t  |"<<endl;
    cout <<"|\t2.��ʾ��ϵ��\t  |"<<endl;
    cout <<"|\t3.ɾ����ϵ��\t  |"<<endl;
    cout <<"|\t4.������ϵ��\t  |"<<endl;
    cout <<"|\t5.�޸���ϵ��\t  |"<<endl;
    cout <<"|\t6.�����ϵ��\t  |"<<endl;
    cout <<"|\t7.�˳���ϵͳ\t  |"<<endl;
    cout <<"==========================="<<endl;
}

/* �ɰ����ʾ��������ͣ��
void Address_Book::print_ifo(Address_Book & abs)
{
    cout << "*****************��ϵ����Ϣ*****************"<<endl;
    if(abs.size == 0)
    {
        cout << "��ǰ��¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0; i < abs.size; i++)
        {
            
            cout << "����:"<<abs.peron_array[i].name
            <<"\t�Ա�:"<<abs.sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t����:"<<abs.peron_array[i].age<<"\t"
            <<"\t�绰:"<<abs.peron_array[i].tel<<"\t"
            <<"\tסַ:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
    }
}*/

// ����cout
ostream& operator<<(ostream& cout, Address_Book& abs)
{
    cout << "*****************��ϵ����Ϣ*****************"<<endl;
    if(abs.size == 0)
    {
        cout << "��ǰ��¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0; i < abs.size; i++)
        {
            
            cout << "����:"<<abs.peron_array[i].name
            <<"\t�Ա�:"<<abs.sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t����:"<<abs.peron_array[i].age<<"\t"
            <<"\t�绰:"<<abs.peron_array[i].tel<<"\t"
            <<"\tסַ:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
    }
    return cout;
}