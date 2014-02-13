#include <iostream>
using namespace std;

class Automobile
{
    public:
        void setPrice(double newPrice);
        void setProfit(double newProfit);
        double getPrice();

    private:
        double price;
        double profit;
        double getProfit();
};

int main()
{
    Automobile hyundai, jaguar;
    jaguar.setPrice(30000.97);
    jaguar.setProfit(12485.23);
    double aPrice, aProfit;

    aPrice = jaguar.getPrice();

    hyundai = jaguar;

    cout << "The price of hyundai is: " << hyundai.getPrice() << endl;

    cout << "the profit of the hyundai is: " << hyundai.getProfit() << endl;

    return 0;
}

void Automobile::setPrice(double newPrice)
{
    price = newPrice;
}

void Automobile::setProfit(double newProfit)
{
    profit = newProfit;
}

double Automobile::getPrice()
{
    return price;
}

double Automobile::getProfit()
{
    return profit;
}
