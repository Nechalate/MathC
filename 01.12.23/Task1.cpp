#include <iostream>
#include <string>
#include <algorithm>

int reverseAndAdd(int num)
{
    std::string numStr = std::to_string(num);
    std::reverse(numStr.begin(), numStr.end());
    return num + std::stoi(numStr);
}

bool isPalindrome(int num)
{
    std::string numStr = std::to_string(num);
    return std::equal(numStr.begin(), numStr.end(), numStr.rbegin());
}

std::pair<int, int> findLychrelNumber(int startingNumber, int maxIterations = 1000)
{
    int currentNumber = startingNumber;
    int iterations = 0;

    while (iterations < maxIterations)
        {
            currentNumber = reverseAndAdd(currentNumber);
            iterations++;

            if (isPalindrome(currentNumber))
            {
                return std::make_pair(currentNumber, iterations);
            }
        }

    return std::make_pair(-1, iterations); // -1 indicates failure to find a palindrome
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int inputNumber;
    std::cout << "Введите натуральное число: ";
    std::cin >> inputNumber;

    auto result = findLychrelNumber(inputNumber);

    if (result.first != -1)
    {
        std::cout << "Палиндром: " << result.first << ", Количество итераций: " << result.second << std::endl;
    }
    else
    {
        std::cout << "Не удалось найти палиндром за " << result.second << " итераций." << std::endl;
    }

    return 0;
}
