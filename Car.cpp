#include "Car.h"

using namespace std;


Car::Car(int price){
    this->price = price;
    vinNumber = 0;
    emissions = 0;
}

int Car::get_price(){
    return price;
}

int Car::get_vinNumber(){
    return vinNumber;
}

int Car::get_emissions(){
    return emissions;
}

void Car::set_price(int p){
   price = p; 
}

void Car::set_vinNumber(int vin){
    vinNumber = vin;
}

void Car::set_emissions(int e){
    emissions = e;
}

Car::~Car(){}