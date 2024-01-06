#include "find.h"

void find_person(Address_Book abs)
{
    Person temp;
    cout << "请输入想搜索的联系人姓名" <<endl;
    cin >> temp.name;
    for (int i = 0; i < abs.size; i++)
    {
        if (abs.peron_array[i].name == temp.name)
        {
            cout << "姓名:"<<abs.peron_array[i].name
            <<"\t性别:"<<sex_index[abs.peron_array[i].sex]<<"\t"
            <<"\t年龄:"<<abs.peron_array[i].age<<"\t"
            <<"\t电话:"<<abs.peron_array[i].tel<<"\t"
            <<"\t住址:"<<abs.peron_array[i].home<<"\t"<<endl;
        }
        else
        {
            cout << "该联系人不存在!"<<endl;
        }
    }

}