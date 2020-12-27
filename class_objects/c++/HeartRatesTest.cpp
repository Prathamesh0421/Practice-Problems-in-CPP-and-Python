//Program to calculate maximum and target heart rate.


#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

void displayInfo(HeartRates person){

    cout << "Name: " << person.getFirstName() << " " << person.getLastName() << endl;
    cout << "Birth Date: " << person.getDay() << "/"<< person.getMonth() 
    << "/" << person.getYear() << endl;
    cout << "Maximum Heart Rate:" << person.maximumHeartRate() << endl;
    person.targetHeartRate();
    cout << endl;

}



int main(){

    cout << "------Target Heart Rate Calculator-------" << endl;

    string firstName;
    string lastName;
    int day;
    int month;
    int year;
    cout << "Enter the first Name:" << endl;
    getline(cin,firstName);
    cout << "Enter the last Name:" << endl;
    getline(cin,lastName);
    cout << " Enter the birthDay: " << endl;
    cin >> day;
    cout << "Enter the birth month:" << endl;
    cin >> month;
    cout << "Enter the birth year:" << endl;
    cin >> year;

    HeartRates person{firstName,lastName,day,month,year};

    displayInfo(person);

    


    return 0;

}
