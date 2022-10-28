class Car{
    private:
        int price;
        int vinNumber;
        int emissions;
    public:
        Car(int price);
        virtual void drive(int kms) = 0;
        ~Car();
};