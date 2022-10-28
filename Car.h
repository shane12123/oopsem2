#pragma once

using namespace std;

class Car{
    protected:
        int price;
        int vinNumber;
        int emissions;
    public:
        Car();
        Car(int price);
        virtual void drive(int kms) = 0;
        int get_price();
        int get_vinNumber();
        int get_emissions();
        void set_price(int p);
        void set_vinNumber(int vin);
        void set_emissions(int e);
        ~Car();
};