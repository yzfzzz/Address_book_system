/*
1.�շ���������������ͨ����Сд��ĸ��ͷ���������ʵ�����ĸ��д�����磺getTotal��calculateSum��
2.�»��������������������»��߷ָ��ĵ�����ɡ����磺get_total��calculate_sum��
3.��˹�����������������Դ�д��ĸ��ͷ���������ʵ�����ĸ��д�����磺GetTotal��CalculateSum��
*/
#include "base.h"
int main()
{   
    Address_Book * abs = new Address_Book();
    string input;
    abs->main_menu();
    while (1)
    {
        cout <<"��ѡ��!"<<endl;
        cin >> input;

        if (input == "1")
        {
            abs->add_person();//abs�Ǳ����������飬��add����Ӧ�øı����ݣ������Ƕ��⿪�ٵ�ַ�ռ䱣���β�
            system("cls");
            /*
            system("cls"); ��һ���������������ʹ�õ�����ر�����C��C++�С������������ִ���ⲿϵͳ���
            ����������У�����ͼ��Windows������ִ�� cls ���������Ĺ�����������
            */
            cout << "�ɹ����!\n\n"<<endl;
            abs->main_menu();
        }
        else if(input == "2")
        {
            cout << *abs;
        }
        else if (input == "3")
        {
            abs->delete_person();
            abs->main_menu();
        }
        else if (input == "4")
        {
            abs->find_person();
            abs->main_menu();
        }
        else if (input == "5")
        {
            abs->modify_person();
            abs->main_menu();
        }
        else if (input == "6")
        {
            abs->clean_all();
            abs->main_menu();
        }
        else if(input == "7")
        {
            break;
        }
        else
        {
            cout <<"������Ч!"<<endl;
        }
    }
    cout <<"�ɹ��˳�ϵͳ!"<<endl;
    abs->write();
    delete abs;
    system("cls");
    system("pause");
    return 0;
    /*
    return 0; �� main() �����У���ʵ�����Ǹ��߲���ϵͳ���������Ѿ��ɹ���ɡ���һ�����
    return ��䱻ִ�У�����ͻ������˳������� switch ����Ƿ���ִ��������֧�����
    ��֮��return 0; ����ָʾ����ɹ����������˳���������
    */
}