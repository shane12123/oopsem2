#include <iostream>
#include "Tesla.h"
#include "Car.h"

using namespace std;

static int nextVinNumber = 1000001;

Tesla::Tesla(){
    set_vinNumber(nextVinNumber);
    nextVinNumber++;
}

Tesla::Tesla(char model, int price){
    this->model = model;
    set_price(price);
}

void Tesla::chargeBattery(int mins){
    batteryPercentage = 1.05 * mins;
}

void Tesla::drive(int kms){
    batteryPercentage = batteryPercentage * 0.01 * (kms / 5);
    emissions += 74*kms;
}

char Tesla::get_model(){
    return model;
}

float Tesla::get_batteryPercentage(){
    return batteryPercentage;
}

void Tesla::set_model(char modelx){
    model = modelx;
}

void Tesla::set_batteryPercentage(float bat){
    batteryPercentage = bat;
}

Tesla::~Tesla(){};

