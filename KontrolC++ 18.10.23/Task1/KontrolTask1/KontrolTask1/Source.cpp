#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

struct Car {
    std::string brand;
    std::string country;
    int year;
    double engineVolume;
    double fuelConsumption;
    double price;
    int quantity;
};

int main() {
    setlocale(LC_ALL, "RUS");
    std::vector<Car> cars;

    // ������ ������ �� �����
    std::ifstream inputFile("C:\\Users\\relay\\OneDrive\\������� ����\\Task1\\KontrolTask1\\listofcars.txt");
    if (!inputFile.is_open()) {
        std::cerr << "������ �������� �����" << std::endl;
        return 1;
    }

    while (!inputFile.eof()) {
        Car car;
        inputFile >> car.brand >> car.country >> car.year >> car.engineVolume >> car.fuelConsumption >> car.price >> car.quantity;
        cars.push_back(car);
    }

    inputFile.close();

    // ��������������� ���� ������������� ����������
    std::string targetBrand = "��������_����������"; // �������� �� ������ ��������
    double newPrice = 50000.0; // �������� �� ����� ����

    for (Car& car : cars) {
        if (car.brand == targetBrand) {
            car.price = newPrice;
            break;
        }
    }

    // ������� ����� ���������� � ������������ ������� ��������� � ���������� �������� �������
    double targetEngineVolume = 2.0; // �������� �� ������ ����� ���������

    // ��������� ���������� � ������ ������� ���������
    std::vector<Car> filteredCars;
    for (const Car& car : cars) {
        if (car.engineVolume == targetEngineVolume) {
            filteredCars.push_back(car);
        }
    }

    // ������� ���������� � ���������� �������� �������
    if (!filteredCars.empty()) {
        auto minFuelConsumptionCar = std::min_element(filteredCars.begin(), filteredCars.end(),
            [](const Car& a, const Car& b) { return a.fuelConsumption < b.fuelConsumption; });

        std::cout << "����� ���������� � ������� " << targetEngineVolume << " � ���������� �������� �������: " << minFuelConsumptionCar->brand << std::endl;
    }
    else {
        std::cout << "��� ����������� � �������� ������� ���������" << std::endl;
    }

    // ������ ����������� ������ � ����
    std::ofstream outputFile("C:\\Users\\relay\\OneDrive\\������� ����\\Task1\\KontrolTask1\\listofcars.txt");
    for (const Car& car : cars) {
        outputFile << car.brand << " " << car.country << " " << car.year << " " << car.engineVolume << " " << car.fuelConsumption << " " << car.price << " " << car.quantity << std::endl;
    }

    outputFile.close();

    return 0;
}