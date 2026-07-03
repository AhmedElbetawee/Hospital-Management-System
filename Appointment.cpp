#include "Appointment.h"
#include <iostream>

Appointment:: Appointment()
{
    appointmentID =0;
    patientID =0;
    doctorID =0;
    date ="";
    time ="";
}

Appointment :: Appointment(int appoId, int patId, int docId, const string& da, const string& ti)
{
    appointmentID = appoId;
    patientID = patId;
    doctorID = docId;
    date =da;
    time =ti;
}

void Appointment :: setDate(const string& da)
{
    date = da;
}

void Appointment :: setTime(const string& ti)
{
    time = ti;
}

int Appointment :: getAppointmentID() const
{
    return appointmentID;
}
int Appointment :: getPatientID() const
{
    return patientID;
}
int Appointment :: getDoctorID() const
{
    return doctorID;
}
string Appointment :: getDate() const
{
    return date;
}

string Appointment :: getTime() const
{
    return time;
}

void Appointment :: display() const
{
    cout <<"AppointmentId: "<<appointmentID<<"\n";
    cout <<"PatientID: "<<patientID<<"\n";
    cout <<"DoctorID: "<<doctorID<<"\n";
    cout <<"Date: "<<date<<"\n";
    cout <<"Time: "<<time<<"\n";
}