#include <iostream>
using namespace std;
int alter()
{
    struct car
    {
        string brand;
        string model;
        int age;
    };
    car bmwx6;
    bmwx6.brand = "bmw";
    bmwx6.model = "x6";
    bmwx6.age = 4;
    cout << "This car is a " << bmwx6.brand << " " << bmwx6.model << "and it is " << bmwx6.age << " many years old ";
    return 0;
}

int main(){
    // struct{
    //     string brand;
    //     string model;
    //     int year;
    //}car;
    // car.brand = "bmw";
    // car.model = "X6";
    // cout << "This car is a "<< car.brand << " " << car.model;  
    alter();
}
