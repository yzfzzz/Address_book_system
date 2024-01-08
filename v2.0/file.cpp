#include "base.h"
#include <fstream>

ofstream& operator<<(ofstream& ofs, Address_Book& abs)
{
    for (int i = 0; i < abs.size; i++)
    {
        
        ofs << "姓名:"<<abs.peron_array[i].name<<"\t"
        <<"\t性别:"<<abs.sex_index[abs.peron_array[i].sex]<<"\t"
        <<"\t年龄:"<<abs.peron_array[i].age<<"\t"
        <<"\t电话:"<<abs.peron_array[i].tel<<"\t"
        <<"\t住址:"<<abs.peron_array[i].home<<"\t"<<endl;
    }
    return ofs;
}

void Address_Book::write()
{
    ofstream ofs;
    ofs.open(this->filePath, ios::app);
    ofs<<*this;
    ofs.close();
}

// TODO
void Address_Book::read()
{

}