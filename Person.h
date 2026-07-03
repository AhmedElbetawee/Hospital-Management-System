#pragma once
#include <string>
using namespace std;

class Person
{
    protected:
        string name;
        int age;
        string gender;
        int id;

    public:
        Person();
        Person(const string&, int, const string&, int);
        virtual ~Person() = default;

        void setName(const string&);
        void setAge(int);
        void setGender(const string&);

        string getName() const;
        int getAge() const;
        string getGender() const;
        int getID() const;

        void displayBasicInfo() const;
        virtual void display() const = 0; 
};