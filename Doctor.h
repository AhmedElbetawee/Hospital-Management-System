#pragma once
#include "Person.h"
class Doctor : public Person
{
    string specialization;
    int salary;
    int experience;
    public:
        Doctor();
        Doctor(const string&, int, const string&, int,
             const string&, int, int);
        
        void setSpecialization(const string&);
        void setSalary(int);
        void setExperience(int);

        string getSpecialization() const;
        int getSalary() const;
        int getExperience() const;

        void display() const override;
};