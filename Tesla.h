#pragma once
#include "Car.h"

using namespace std;

class Tesla : Car{
    private:
        char model;
        float batteryPercentage;

    public:
        Tesla();
        Tesla(char model, int price);
        void chargeBattery(int mins); 
        char get_model();
        float get_batteryPercentage();
        void drive(int kms);
        void set_model(char modelx);
        void set_batteryPercentage(float bat);
        ~Tesla();
};