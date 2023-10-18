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

    // Чтение данных из файла
    std::ifstream inputFile("C:\\Users\\relay\\OneDrive\\Рабочий стол\\Task1\\KontrolTask1\\listofcars.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Ошибка открытия файла" << std::endl;
        return 1;
    }

    while (!inputFile.eof()) {
        Car car;
        inputFile >> car.brand >> car.country >> car.year >> car.engineVolume >> car.fuelConsumption >> car.price >> car.quantity;
        cars.push_back(car);
    }

    inputFile.close();

    // Скорректировать цену определенного автомобиля
    std::string targetBrand = "Название_автомобиля"; // Замените на нужное название
    double newPrice = 50000.0; // Замените на новую цену

    for (Car& car : cars) {
        if (car.brand == targetBrand) {
            car.price = newPrice;
            break;
        }
    }

    // Вывести марку автомобиля с определенным объемом двигателя и наименьшим расходом бензина
    double targetEngineVolume = 2.0; // Замените на нужный объем двигателя

    // Фильтруем автомобили с нужным объемом двигателя
    std::vector<Car> filteredCars;
    for (const Car& car : cars) {
        if (car.engineVolume == targetEngineVolume) {
            filteredCars.push_back(car);
        }
    }

    // Находим автомобиль с наименьшим расходом бензина
    if (!filteredCars.empty()) {
        auto minFuelConsumptionCar = std::min_element(filteredCars.begin(), filteredCars.end(),
            [](const Car& a, const Car& b) { return a.fuelConsumption < b.fuelConsumption; });

        std::cout << "Марка автомобиля с объемом " << targetEngineVolume << " и наименьшим расходом бензина: " << minFuelConsumptionCar->brand << std::endl;
    }
    else {
        std::cout << "Нет автомобилей с заданным объемом двигателя" << std::endl;
    }

    // Запись обновленных данных в файл
    std::ofstream outputFile("C:\\Users\\relay\\OneDrive\\Рабочий стол\\Task1\\KontrolTask1\\listofcars.txt");
    for (const Car& car : cars) {
        outputFile << car.brand << " " << car.country << " " << car.year << " " << car.engineVolume << " " << car.fuelConsumption << " " << car.price << " " << car.quantity << std::endl;
    }

    outputFile.close();

    return 0;
}