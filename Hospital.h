#pragma once

#include "Person.h"
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include <vector>

class Hospital
{
    vector <Patient> patients;
    vector <Doctor> doctors;
    vector <Appointment> appointments;
    public:
        bool addPatient(const Patient&);
        bool removePatient(int);
        Patient* searchPatient(int);
        void displayPatients() const;
         
        bool addDoctor(const Doctor&);
        bool removeDoctor(int);
        Doctor* searchDoctor(int);
        void displayDoctors() const;
        
        bool bookAppointment(const Appointment&);
        bool cancelAppointment(int appointmentID);
        Appointment* searchAppointment(int appointmentID);
        void displayAppointments() const;
};