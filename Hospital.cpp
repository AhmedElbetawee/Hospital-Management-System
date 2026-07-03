#include "Hospital.h"
#include <iostream>

bool Hospital :: addPatient(const Patient& p)
{
    for (int i=0; i<patients.size(); i++)
    {
        if (patients[i].getID() == p.getID())
            return false;
    }
    patients.push_back(p);
    return true;
}

bool Hospital :: removePatient(int id)
{
    for (int i=0; i<patients.size(); i++)
    {
        if (patients[i].getID() == id)
        {
            patients.erase(patients.begin() + i);
            return true;
        }
    }
    return false;
}

Patient* Hospital :: searchPatient(int id)
{
    for (int i=0; i<patients.size(); i++)
    {
        if(patients[i].getID() == id )
            return &patients[i];
    }
    return nullptr;
}

void Hospital :: displayPatients() const
{
    if (patients.empty())
    {
        cout <<"NO Patient\n";
        return;
    }
    for (const Patient& p : patients)
    {
        p.display();
    }
}

bool Hospital :: addDoctor(const Doctor& d)
{
    for (int i=0; i<doctors.size(); i++)
    {
        if (doctors[i].getID() == d.getID())
            return false;
    }
    doctors.push_back(d);
    return true;
}

bool Hospital :: removeDoctor(int id)
{
    for (int i=0; i<doctors.size(); i++)
    {
        if (doctors[i].getID() == id)
        {
            doctors.erase(doctors.begin() + i);
            return true;
        }
    }
    return false;
}

Doctor* Hospital :: searchDoctor(int id)
{
    for (int i=0; i<doctors.size(); i++)
    {
        if(doctors[i].getID() == id)
            return &doctors[i];
    }
    return nullptr;
}

void Hospital :: displayDoctors() const
{
    if (doctors.empty())
    {
        cout <<"NO Doctors\n";
        return;
    }
    for (const Doctor& d : doctors)
    d.display();
}

bool Hospital :: bookAppointment(const Appointment& a)
{
    if (searchAppointment(a.getAppointmentID()) != nullptr)
        return false;
    if (searchPatient(a.getPatientID()) == nullptr)
        return false;
    if (searchDoctor(a.getDoctorID()) == nullptr)
        return false;

    for (int i=0; i<appointments.size(); i++)
    {
        if (appointments[i].getDoctorID() == a.getDoctorID()
            && appointments[i].getDate() == a.getDate() 
            && appointments[i].getTime() == a.getTime())
        {
            return false;
        }

        if (appointments[i].getPatientID() == a.getPatientID()
            && appointments[i].getDate() == a.getDate() 
            && appointments[i].getTime() == a.getTime())
        {
            return false;
        }
    }
    appointments.push_back(a);
    return true;
}   

bool Hospital :: cancelAppointment(int appointmentID)
{
    if (appointments.empty())
    {
        return false;
    }
    for (int i=0; i<appointments.size(); i++)
    {
        if (appointments[i].getAppointmentID() == appointmentID)
        {
            appointments.erase(appointments.begin() + i);
            return true;
        }
    }
    return false;
}

Appointment* Hospital :: searchAppointment(int appointmentID)
{   
    for (int i=0; i<appointments.size(); i++)
    {
        if (appointments[i].getAppointmentID() == appointmentID)
            return &appointments[i];
    }
    return nullptr;
}

void Hospital :: displayAppointments() const
{
    if (appointments.empty())
    {
        cout <<"No Appointments\n";
        return;
    }
    for (const Appointment& a : appointments)
    {
        a.display();
    }
}
