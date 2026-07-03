#pragma once
#include "Person.h"

class Patient : public Person
{
    string disease;
    string bloodType;
    string phone;
    public:
        Patient();
        Patient(const string&, int, const string&, int, const string&, 
            const string&, const string&);

        void setDisease(const string&);
        void setBloodType(const string&);
        void setPhone(const string&);

        string getDisease() const;
        string getBloodType() const;
        string getPhone() const;

        void display() const override;
};
