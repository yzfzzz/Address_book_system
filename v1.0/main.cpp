/*
1.�շ���������������ͨ����Сд��ĸ��ͷ���������ʵ�����ĸ��д�����磺getTotal��calculateSum��
2.�»��������������������»��߷ָ��ĵ�����ɡ����磺get_total��calculate_sum��
3.��˹�����������������Դ�д��ĸ��ͷ���������ʵ�����ĸ��д�����磺GetTotal��CalculateSum��
*/
#include "main.h"
#include "show.h"
#include "add.h"
#include "delete.h"
#include "find.h"
int main()
{   
    main_menu();
    string input;
    Address_Book abs;
    while (1)
    {
        cout <<"��ѡ��!"<<endl;
        cin >> input;

        if (input == "1")
        {
            add_person(&abs);//abs�Ǳ����������飬��add����Ӧ�øı����ݣ������Ƕ��⿪�ٵ�ַ�ռ䱣���β�
            system("cls");
            /*
            system("cls"); ��һ���������������ʹ�õ�����ر�����C��C++�С������������ִ���ⲿϵͳ���
            ����������У�����ͼ��Windows������ִ�� cls ���������Ĺ�����������
            */
            cout << "�ɹ����!\n\n"<<endl;
            main_menu();
        }
        else if(input == "2")
        {
            print_ifo(abs);
        }
        else if (input == "3")
        {
            delete_person(&abs);
            main_menu();
        }
        else if (input == "4")
        {
            find_person(abs);
            main_menu();
        }
        else if (input == "5")
        {
            modify_person(&abs);
            main_menu();
        }
        else if (input == "6")
        {
            clean_all(&abs);
            main_menu();
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
    system("cls");
    system("pause");
    return 0;
    /*
    return 0; �� main() �����У���ʵ�����Ǹ��߲���ϵͳ���������Ѿ��ɹ���ɡ���һ�����
    return ��䱻ִ�У�����ͻ������˳������� switch ����Ƿ���ִ��������֧�����
    ��֮��return 0; ����ָʾ����ɹ����������˳���������
    */
}