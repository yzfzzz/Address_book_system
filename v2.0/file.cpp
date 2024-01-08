#include "base.h"
#include <fstream>

ofstream& operator<<(ofstream& ofs, Address_Book& abs)
{
    for (int i = 0; i < abs.size; i++)
    {
        
        ofs << "����:"<<abs.peron_array[i].name<<"\t"
        <<"\t�Ա�:"<<abs.sex_index[abs.peron_array[i].sex]<<"\t"
        <<"\t����:"<<abs.peron_array[i].age<<"\t"
        <<"\t�绰:"<<abs.peron_array[i].tel<<"\t"
        <<"\tסַ:"<<abs.peron_array[i].home<<"\t"<<endl;
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