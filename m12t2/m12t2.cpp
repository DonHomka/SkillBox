﻿#include <iostream>

int main()
{
    int numbers[15] = { 114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118 };
    int min = numbers[0];
    int sum = 0;
    for (int i = 0; i < 15; i++) {
        if (min > numbers[i])
            min = numbers[i];
        sum += numbers[i];
    }
    int sumSecond = 0;
    for (int i = 0; i < 14; i++) {
        sumSecond += min + i;
    }
    std::cout << sum - sumSecond << std::endl;
}