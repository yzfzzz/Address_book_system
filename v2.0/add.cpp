#include "base.h"

Person * Address_Book::add(Person * p_temp)
{
    cout <<"��������ϵ����Ϣ\n��ϵ�˵�����:";
    cin >> p_temp->name;
    cout <<"��ϵ�˵��Ա�:\n(0)Ů\t(1)��:"<<endl;
    do
    {
        cin >> p_temp->sex;
        if (p_temp->sex == 0 || p_temp->sex == 1)
        {
           break;
        }
        else
        {
            cout << "��������ȷ���Ա�!"<<endl;
        }
    } while (1);
    
    cout <<"��ϵ�˵�����:";
    cin >> p_temp->age;
    
    while (p_temp->age < 0 || p_temp->age > 100)
    {
        cout << "��������ȷ������!"<<endl;
        cin >> p_temp->age;
    }

    cout <<"��ϵ�˵ĵ绰:";
    cin >> p_temp->tel;
    cout <<"��ϵ�˵�סַ:";
    cin >> p_temp->home;
    return p_temp;
}

// !��Ҫ���е�ַ���ݣ�������ֵ����
// ��������
void Address_Book::add_person()
{
    if (this->size == MAX)
	{
		cout << "ͨ��¼�������޷���ӣ�" << endl;
		return;
	}
    else
    {
        Person * p_temp = this->add(new Person());
        this -> peron_array[this -> size] = *p_temp;
        // !
        delete p_temp;
        (this -> size)++;
    }
}

void Address_Book::modify_person()
{
    string * p_match = new string();
    cout <<"���������޸���ϵ�˵�����:"<<endl;
    cin >> *p_match;
    for (int i = 0; i < this->size; i++)
    {
        if (this->peron_array[i].name == *p_match)
        {
            Person * p_temp = this->add(new Person());
            this->peron_array[i] = *p_temp;  
            // bubble_age(this);
            delete p_temp;
            delete p_match;
        }
        else
        {
            cout << "��ϵ�˲�����!"<<endl;
        }
    }
}

// ð���㷨,����������
void Address_Book::bubble_age()
{
    for (int i = 0; i < this->size-1; i++)
    {
        for (int j = 0; j < this->size-1-i; j++)
        {
            if(this ->peron_array[j].age > this ->peron_array[j+1].age)
            {
                Person temp;
                temp = this->peron_array[j];
                this->peron_array[j] = this->peron_array[j+1];
                this->peron_array[j+1] = temp;
            }
        }
    }
}
