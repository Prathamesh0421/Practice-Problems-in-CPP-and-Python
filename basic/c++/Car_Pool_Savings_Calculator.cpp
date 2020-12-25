// Program to calculate daily driving cost.

#include<iostream>

using namespace std;

int main(){

    double total_miles{0};  // Total miles driven per day
    double cost_per_gallon{0}; // Cost per gallon of gasoline
    double avg_miles{0}; // Average miles per gallon
    double parking_fees{0}; // Parking fees per day
    double tolls{0}; // Tolls per day
    double total_cost{0};   // total driving cost per day.

    cout<<"Total miles driven per day: "<<endl;
    cin>>total_miles;

    cout<<"Cost per gallon of gasoline($): "<<endl;
    cin>>cost_per_gallon;

    cout<<"Average miles per gallon: "<<endl;
    cin>>avg_miles;

    cout<<"Parking fees per day($): "<<endl;
    cin>>parking_fees;

    cout<<"Tolls per day($): "<<endl;
    cin>>tolls;

    total_cost = (total_miles / avg_miles) * cost_per_gallon + parking_fees + tolls;

    cout<<"total driving cost per day: "<<total_cost<<endl;  


}