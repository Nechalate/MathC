#include <iostream>

void hanoi(int n, char source, char auxiliary, char target)
{
    if (n == 1)
    {
        std::cout << "����������� ������ 1 �� " << source << " � " << target << std::endl;
        return;
    }

    hanoi(n - 1, source, target, auxiliary);

    std::cout << "����������� ������ " << n << " �� " << source << " � " << target << std::endl;

    hanoi(n - 1, auxiliary, source, target);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int num_rings = 3;
    char source_peg = 'A';
    char auxiliary_peg = 'B';
    char target_peg = 'C';

    hanoi(num_rings, source_peg, auxiliary_peg, target_peg);

    return 0;
}
