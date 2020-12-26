#include <iostream>
#include <string>

using namespace std;

class Date{

    public:
        Date(int currentDay, int currentMonth, int currentYear){

            day = currentDay;
            year = currentYear;
            if(currentMonth<=12){
                month = currentMonth;
            }
        }

        void setDay(int currentDay){
            day = currentDay;
        }

        void setMonth(int currentMonth){
            if(currentMonth>=12){
                month = currentMonth;
            }
        }

        void setYear(int currentYear){
            year = currentYear;
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

        void displayDate(){
            cout << day << "/" << month << "/" << year <<endl; 
        }

    private:
        int day;
        int month{1};
        int year;

};