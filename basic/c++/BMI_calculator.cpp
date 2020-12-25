//BMI Calculator program
#include<iostream>

using namespace std;

int main(){
    double weight{0};
    double height(0);

    double bmi{0};

    cout<<"Enter the weight(in Kg):"<<endl;
    cin>>weight;
    cout<<"Enter the height(in meters):"<<endl;
    cin>>height;

    bmi = weight/(height*height);

    if(bmi<18.5){
        cout<<"BMI:"<<bmi<<" - Underweight"<<endl;
    }
    else if(bmi>=18.5 && bmi<25){
        cout<<"BMI:"<<bmi<<" - Normal"<<endl;
    }
    else if(bmi>=25 && bmi<30){
        cout<<"BMI:"<<bmi<<" - Overweight"<<endl;
    }
    else{
        cout<<"BMI:"<<bmi<<" - Obese"<<endl;
    }

    return 0;
}