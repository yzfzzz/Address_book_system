#include "add.h"

Person add()
{
    Person temp;
    cout <<"��������ϵ����Ϣ\n��ϵ�˵�����:";
    cin >> temp.name;
    cout <<"��ϵ�˵��Ա�:\n(0)Ů\t(1)��:"<<endl;
    do
    {
        cin >> temp.sex;
        if (temp.sex == 0 || temp.sex == 1)
        {
           break;
        }
        else
        {
            cout << "��������ȷ���Ա�!"<<endl;
        }
    } while (1);
    
    cout <<"��ϵ�˵�����:";
    do
    {
        cin >> temp.age;
        /*
        python�þ��ˣ�ϰ�߻�û�Ĺ���
        --------------------------
        if (0 < temp.age < 100)
        {;
           break;
        }
        ��C++�У����ʽ 0 < temp.age < 100 �����ᰴ������������ķ�ʽ������������ΪC++�еıȽ������ < ����֧����ʽ�Ƚϡ�
        ������ʽʵ�����������������ģ�
        ���ȼ��� 0 < temp.age����᷵��һ������ֵ��true �� false����Ȼ���������ֵת��Ϊ������true ��Ϊ 1��false ��Ϊ 0������ 100 ���бȽϡ�
        ���ڲ���ֵת��Ϊ������Ҫô�� 0 Ҫô�� 1����� 1 < 100 �� true���� 0 < 100 Ҳ�� true����������Σ�������ʽ��������ȷ�ؼ�� temp.age �Ƿ��� 0 �� 100 ֮�䡣
        ��ȷ��д����ʹ���߼�������� && �����������Ƚϱ��ʽ��
        */
        if(temp.age > 0 && temp.age < 100)
        {
            break;
        } 
        else
        {
            cout << "��������ȷ������!"<<endl;
        }
    } while (1);

    cout <<"��ϵ�˵ĵ绰:";
    cin >> temp.tel;
    cout <<"��ϵ�˵�סַ:";
    cin >> temp.home;
    return temp;
}

// !��Ҫ���е�ַ���ݣ�������ֵ����
void add_person(Address_Book * p_abs)
{
    if (p_abs->size == MAX)
	{
		cout << "ͨ��¼�������޷���ӣ�" << endl;
		return;
	}
    else
    {
        Person temp;
        temp = add();
        p_abs -> peron_array[p_abs -> size] = temp;
        (p_abs -> size)++;
        bubble_age(p_abs);
    }
}

void modify_person(Address_Book * p_abs)
{
    string match;
    Person temp;
    cout <<"���������޸���ϵ�˵�����:"<<endl;
    cin >> match;
    for (int i = 0; i < p_abs->size; i++)
    {
        if (p_abs->peron_array[i].name == match)
        {
            temp = add();
            p_abs->peron_array[i] = temp;  
            bubble_age(p_abs);
        }
        else
        {
            cout << "��ϵ�˲�����!"<<endl;
        }
    }
}

// ð���㷨,����������
void bubble_age(Address_Book * p_abs)
{
    for (int i = 0; i < p_abs->size-1; i++)
    {
        for (int j = 0; j < p_abs->size-1-i; j++)
        {
            if(p_abs ->peron_array[j].age > p_abs ->peron_array[j+1].age)
            {
                Person temp;
                temp = p_abs->peron_array[j];
                p_abs->peron_array[j] = p_abs->peron_array[j+1];
                p_abs->peron_array[j+1] = temp;
            }
        }
    }
}
