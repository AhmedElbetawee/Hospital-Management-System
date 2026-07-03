#include "Person.h"
#include <iostream>

Person :: Person()
{
    name = "";
    age =0;
    gender ="";
    id=0;
}

Person :: Person(const string& n, int ag, const string& ge, int i)
{
    name = n;
    age = ag;
    gender = ge;
    id= i;
}

void Person :: setName(const string &n)
{
    name = n;
}

void Person :: setGender(const string &ge)
{
    gender = ge;
}

void Person :: setAge(int ag)
{
    age = ag;
}

string Person ::getName() const 
{
    return name;
}

int Person :: getAge() const
{
    return age;
}

string Person :: getGender() const
{
    return gender;
}

int Person ::getID() const
{
    return id;
}

void Person ::displayBasicInfo() const
{
    cout <<"Name: "<<name<<"\n";
    cout <<"Age: "<<age<<"\n";
    cout <<"Gender: "<<gender<<"\n";
    cout <<"ID: "<<id<<"\n";
}
