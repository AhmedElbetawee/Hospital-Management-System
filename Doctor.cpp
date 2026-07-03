#include "Doctor.h"
#include <iostream>

Doctor :: Doctor()
{
    specialization = "";
    salary = 0;
    experience = 0;
}

Doctor :: Doctor(const string& n, int ag, const string& ge, int i, const string& spe, int sal, int exp)
        : Person(n, ag, ge, i)
{
    specialization = spe;
    salary = sal;
    experience = exp;
}

void Doctor :: setSpecialization(const string & spe)
{
    specialization = spe;
}

void Doctor :: setSalary(int sal)
{
    salary = sal;
}

void Doctor :: setExperience(int exp)
{
    experience = exp;
}

string Doctor :: getSpecialization() const
{
    return specialization;
}

int Doctor :: getSalary() const
{
    return salary;
}

int Doctor :: getExperience() const
{
    return experience;
}

void Doctor :: display() const
{
    displayBasicInfo();
    cout <<"Specialization: "<<specialization<<"\n";
    cout <<"Salary: "<<salary<<"\n";
    cout <<"Experience: "<<experience<<"\n";
}

