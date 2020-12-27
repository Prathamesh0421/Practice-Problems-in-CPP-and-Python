// class to calculate maximum and target haeart rate. 

#include <iostream>
#include <string>

using namespace std;

class HeartRates{

    public:
        HeartRates(string inputFirstName, string inputLastName, int inputDay, int inputMonth, int inputYear)
        : firstName{inputFirstName}, lastName{inputLastName}, year{inputYear}{

            if(inputDay <= 31){
                day = inputDay;
            }

            if(inputMonth <= 12){
                month = inputMonth;
            }

            
        }

        int calculateAge(){
            return 2020 - year;
        }

        int maximumHeartRate(){
            return 220 - calculateAge();
        }

        void targetHeartRate(){
            double initialRate;
            double finalRate;
            int maxHeartRate = maximumHeartRate();
            initialRate =  maxHeartRate * 50 / 100 ;
            finalRate = maxHeartRate * 85 / 100 ;

            cout << "Target Heart Rate: " << initialRate << " - " << finalRate ;
            
        }

        void setFirstName(string input){
            firstName = input;
        }
        void setLastName(string input){
            lastName = input;
        }
        void setDay(int input){
            day = input;   
        }
        void setMonth(int input){
            month = input;
        }
        void setYear(int input){
            year = input;   
        }

        string getFirstName(){
            return firstName;
        }

        string getLastName(){
            return lastName;
        }

        int getDay(){
            return day;
        }

        int getMonth(){
            return month;
        }

        int getYear(){
            return year;
        }

    private:

        string firstName;
        string lastName;
        int day{1};
        int month{1};
        int year;
};