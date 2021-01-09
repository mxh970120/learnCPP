#include <iostream>


struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};

int main(){
	// 1
    Sales_data data;
    std::cin >> data.bookNo >> data.units_sold >> data.price;
    std::cout << data.bookNo << " " << data.units_sold << " " << data.price << std::endl;

    // 2
    Sales_data data2, sum_data;
    while(std::cin >> data.bookNo >> data.units_sold >> data.price)
        sum_data.units_sold += data.units_sold;
    std::cout << data.bookNo << " " << sum_data.units_sold << " " << data.price << std::endl;



    return 0;
}