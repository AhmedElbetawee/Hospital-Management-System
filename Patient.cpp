#include "Patient.h"
#include <iostream>

Patient :: Patient()
{
    disease = "";
    bloodType = "";
    phone = "";
}

Patient :: Patient(const string& n, int ag, const string& ge, int i, const string & dis, const string& blood, const string& ph)
    : Person(n, ag, ge, i) 
{
    disease = dis;
    bloodType = blood;
    phone = ph;
}

void Patient :: setDisease(const string& dis)
{
    disease = dis;
}

void Patient :: setBloodType(const string& blood)
{
    bloodType = blood;
}

void Patient :: setPhone(const string& ph)
{
    phone = ph;
}

string Patient :: getDisease() const
{
    return disease;
}

string Patient :: getBloodType() const
{
    return bloodType;
}

string Patient :: getPhone() const
{
    return phone;
}


void Patient :: display() const
{
    displayBasicInfo();
    cout <<"Disease: "<<disease<<"\n";
    cout <<"BloodType: "<<bloodType<<"\n";
    cout <<"Phone: "<<phone<<"\n";
}