/*
����������У�#ifndef MAININIT��#define MAININIT�����д���������Ǽ��MAININIT
������Ƿ��Ѿ������ˡ��������껹û�ж��壬��ô�������ͻ��������ͷ�ļ��е��������ݣ���
�������ͷ�ļ�����ʱ������#endifָ�����MAININIT����꽫�����塣
*/
#ifndef MAININIT
#define MAININIT
#include<iostream>
#include <string>
using namespace std;
#define MAX 1000 //define���üӷֺ�


class Person
{
public:
    string name;
    int sex;
    int age;
    string tel;
    string home;

    Person();
    ~Person();
};

// new��������һ�οռ���׵�ַ
class Address_Book
{
    friend ostream& operator<<(ostream& cout, Address_Book& abs);
    friend ofstream& operator<<(ofstream& ofs, Address_Book& abs);
public:
    //��
    Person * add(Person * p_temp);
    void add_person();
    void modify_person();
    void bubble_age();
    //ɾ
    void delete_person();
    void clean_all();

    //��
    void find_person();

    //��ʾ
    void main_menu();

    //��д�ļ�
    void write();
    void read();

    // void print_ifo(Address_Book & abs);
    // �������������ʱֻ�����ҽ���һ�������������������������ж��������
    //ostream& operator<<(ostream& cout, Address_Book& abs);

    //���캯��
    Address_Book();

    //��������
    ~Address_Book();
    Person peron_array[MAX];
    string sex_index[2] = {"Ů","��"};
    string filePath = "./Address_Book_Data.txt";
    int size;
};

#endif