#include "show.h"
// !��char sex_index[2] = {'��', 'Ů'}����
/*
���ʹ�� char �������洢�Ա���Ϣ���ͻ����խ��ת�������⣬
��Ϊ char ֻ�ܴ洢�����ַ��������ܴ洢�����ַ�������ʹ��
 string �������洢�Ա���Ϣ�򲻻����������⣬��Ϊ string
  �������������ַ����������ܹ��Զ����������ת������⡣

��C/C++�У������ź�˫�����ڶ����ַ�����ʱ���в�ͬ�ĺ��塣
˫�������ڶ����ַ����������Զ����ַ���ĩβ����һ�����ַ�
('\0')��Ϊ�ַ����Ľ�����ǡ������������ڶ����ַ�����ֻ��
��һ���ַ�������������У�char arr[2] = {'��', 'Ů'}; 
ʹ�õ����Ŷ�����˫���ŵ�ԭ���ǣ�����������Ҫ����һ������
�����ַ������飬������һ�����������ַ��������顣ÿ���ַ�
�ֱ��õ����Ű�Χ����ʾ�������ַ����͵�ֵ��
*/
string sex_index[2] = {"Ů","��"}; //�ַ���������sex_index[2]��������sex_index

void main_menu()
{
    cout <<"===========���˵�=========="<<endl;
    cout <<"|\t1.������ϵ��\t  |"<<endl;
    cout <<"|\t2.��ʾ��ϵ��\t  |"<<endl;
    cout <<"|\t3.ɾ����ϵ��\t  |"<<endl;
    cout <<"|\t4.������ϵ��\t  |"<<endl;
    cout <<"|\t5.�޸���ϵ��\t  |"<<endl;
    cout <<"|\t6.�����ϵ��\t  |"<<endl;
    cout <<"|\t7.�˳���ϵͳ\t  |"<<endl;
    cout <<"==========================="<<endl;
}

void print_ifo(Address_Book abs)
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
            <<"\t�Ա�:"<<sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t����:"<<abs.peron_array[i].age<<"\t"
            <<"\t�绰:"<<abs.peron_array[i].tel<<"\t"
            <<"\tסַ:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
    }
}