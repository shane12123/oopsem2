class Car{
    private:
        int price;
        int vinNumber;
        int emissions;
    public:
        Car(int price);
        virtual void drive(int kms) = 0;
        int get_price();
        int get_vinNumber();
        int get_emissions();
        int set_price(int p);
        int set_vinNumber(int vin);
        int set_emissions(int e);
        ~Car();
};