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

struct Person
{
    string name;
    int sex;
    int age;
    string tel;
    string home;
};

struct Address_Book
{
    Person peron_array[MAX];
    int size;
};

#endif