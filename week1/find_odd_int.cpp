#include <vector>
#include <algorithm>
#include <iostream>
int findOdd(std::vector<int> numbers);

int main()
{
    std::vector<int> numbers = {3, 4, 4, 3, 2, 4, 2};

    for (int c : numbers)
    {
        std::cout << c << std::endl;
    }
    std::cout << findOdd(numbers) << std::endl;
    system("pause");
    return 0;

}

int findOdd(std::vector<int> numbers) {
    int count_of = 1, odd = 0;
    if (numbers.size() == 1) return numbers[0];
    for (auto i : numbers)
    {
        odd ^= i;
    }
    return odd;
}
