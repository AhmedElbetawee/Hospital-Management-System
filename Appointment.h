#pragma once
#include <string>
using namespace std;

class Appointment
{
    int appointmentID;
    int patientID;
    int doctorID;
    string date;
    string time;

    public:
        Appointment();
        Appointment(int, int, int, const string&, const string&);

        void setDate(const string&);
        void setTime(const string&);

        int getAppointmentID() const;
        int getPatientID() const;
        int getDoctorID() const;
        string getDate() const;
        string getTime() const;

        void display() const;
};