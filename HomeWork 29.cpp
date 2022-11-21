#include <iostream>
#include <string>


struct Device
{
    std::string DeviceType;
    std::string Denomination;
    std::string Model;
    std::string Brand;
    double GuaranteePeriod;
    double Price;
    std::string DateOfSale;
};


Device FillDevice()
{
    Device temp;
    std::cout << "Please, enter device type:";
    std::cin >> temp.DeviceType;
    std::cout << "Please, enter denomination:";
    std::cin >> temp.Denomination;
    std::cout << "Please, enter model:";
    std::cin >> temp.Model;
    std::cout << "Please, enter brand:";
    std::cin >> temp.Brand;
    std::cout << "Please, enter guarantee period:";
    std::cin >> temp.GuaranteePeriod;
    std::cout << "Please, enter price:";
    std::cin >> temp.Price;
    std::cout << "Please, enter date of sale:";
    std::cin >> temp.DateOfSale;


    return temp;
}


void ShowDevice(const Device& device)
{
    std::cout << "Device type - " << device.DeviceType << "\n";
    std::cout << "Denomination - " << device.Denomination << "\n";
    std::cout << "Model - " << device.Model << "\n";
    std::cout << "Brand - " << device.Brand << "\n";
    std::cout << "Guarantee period - " << device.GuaranteePeriod << "\n";
    std::cout << "Price - " << device.Price << "\n";
    std::cout << "Date of sale - " << device.DateOfSale << "\n";
}


int main()
{
    Device device = FillDevice();
    ShowDevice(device);
}