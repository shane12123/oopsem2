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

int Car::set_price(int p){
   price = p; 
}

int Car::set_vinNumber(int vin){
    vinNumber = vin;
}

int Car::set_emissions(int e){
    emissions = e;
}