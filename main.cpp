#include <iostream>
#include "Person.h"
#include "Patient.h"
#include "Appointment.h"
#include "Doctor.h"
#include "Hospital.h"
using namespace std;

void showMenu()
{
    cout <<"1- Add Patient\n";
    cout <<"2- Remove Patient\n";
    cout <<"3- Search Patient\n";
    cout <<"4- Display Patients\n";
    cout <<"5- Add Doctor\n";
    cout <<"6- Remove Doctor\n";
    cout <<"7- Search Doctor\n";
    cout <<"8- Display Doctors\n";
    cout <<"9- Book Appointment\n";
    cout <<"10- Cancel Appointment\n";
    cout <<"11- Search Appointment\n";
    cout <<"12- Display Appointment\n";
    cout <<"0- Exit\n";
}

Patient inputPatient()
{
    string name, gender, disease, bloodType, phone;
    int age, id; 
    cout <<"Enter your name "; cin>>name;
    cout <<"Enter your age "; cin>>age;
    cout <<"Enter your gender "; cin>>gender;
    cout <<"Enter your id "; cin>>id;
    cout <<"Enter your disease "; cin>>disease;
    cout <<"Enter your bloodType "; cin>>bloodType;
    cout <<"Enter your phone "; cin>>phone;
    return Patient(name, age, gender, id, disease, bloodType, phone);
}

Doctor inputDoctor()
{
    string name, gender, specialization;
    int age, id, salary, experience; 
    cout <<"Enter your name "; cin>>name;
    cout <<"Enter your age "; cin>>age;
    cout <<"Enter your gender "; cin>>gender;
    cout <<"Enter your id "; cin>>id;
    cout <<"Enter your specialization "; cin>>specialization;
    cout <<"Enter your salary "; cin>>salary;
    cout <<"Enter your experience "; cin>>experience;
    return Doctor(name, age, gender, id, specialization, salary, experience);
}

Appointment inputAppointment()
{
    int appointmentID, patientID, doctorID;
    string date, time;
    cout <<"Enter you appointmentID "; cin>>appointmentID;
    cout <<"Enter you patientID "; cin>>patientID;
    cout <<"Enter you doctorID "; cin>>doctorID;
    cout <<"Enter you date "; cin>>date;
    cout <<"Enter you time "; cin>>time;
    return Appointment(appointmentID, patientID, doctorID, date, time);
}

int main()
{
    Hospital h;
    
    int choice = -1;
    do
    {
        showMenu();
        cout <<"Enter Your Choice "; cin>>choice;

        switch(choice)
        {
            case 1 :
            {
                Patient p = inputPatient();
                if(h.addPatient(p))
                {
                    cout <<"Patient is added\n";
                }
                else
                    cout <<"Patient alreadey exist\n";
                break;
            }

            case 2:
            {
                int id;
                cout <<"Enter id of Patient "; cin>>id;
                if (h.removePatient(id))
                {
                    cout <<"Patient removed successfully\n";
                }
                else
                    cout <<"Patient not found\n";
                break;
            }

            case 3:
            {
                int id;
                cout <<"Enter id of Patient"; cin>>id;
                Patient* p = h.searchPatient(id);
                if (p != nullptr)
                {
                    cout <<"Patient is exist\n";
                    p->display();
                }            
                else
                {
                    cout <<"Patient is not exist\n";
                }
                break;
            }

            case 4:
            {
                cout <<"==========Patients===========\n";
                h.displayPatients();
                break;
            }

            case 5:
            {
                Doctor d = inputDoctor();
                if (h.addDoctor(d))
                {
                    cout <<"the doctor is added\n";
                }

                else
                    cout <<"the doctor already exist\n";
                break;
            }

            case 6:
            {
                int id;
                cout <<"Enter you id "; cin>>id;
                if (h.removeDoctor(id))
                {
                    cout <<"Doctro removed successfully\n";
                }
                else
                    cout <<"Doctor not found\n";
                break;
            }

            case 7:
            {
                int id;
                cout <<"Enter you id "; cin>>id;
                Doctor* d = h.searchDoctor(id);
                if (d != nullptr)
                {
                    cout <<"the doctor is exist\n";
                    d->display();
                }

                else
                    cout <<"the doctor not exist\n";
                break;
            }   
            
            case 8:
            {
                cout<<"=======Doctors=======\n";
                h.displayDoctors();
                break;
            }

            case 9:
            {
                Appointment a = inputAppointment();
                if (h.bookAppointment(a))
                {
                    cout <<"Appointment  booked successfully\n";
                }
                else
                    cout <<"Booking failed\n";
                break;
            }

            case 10:
            {
                int id;
                cout <<"Enter id of Appointment ";cin>>id;
                if(h.cancelAppointment(id))
                {
                    cout <<"Appointment canceled successfully\n";
                }
                else
                    cout <<"Cancelltion failed\n";
                break;
            }

            case 11:
            {
                int id;
                cout <<"Enter your id "; cin>>id;
                Appointment* a = h.searchAppointment(id);
                if (a != nullptr)
                {
                    cout <<"the appointment is exist\n";
                    a->display();
                }
                else
                    cout <<"the appointment is not exist\n";
                break;
            }

            case 12:
            {
                cout <<"========Appointments========\n";
                h.displayAppointments();
                break;
            }

            default:
            {
                cout <<"Invalid choice\n";
                break;
            }
        }
    } while (choice != 0);
}