// home work 17. Function.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<ctime>
#include<cstdlib>

double mean(double num1, double num2) {
    return (num1 + num2) / 2;
}
int mean_arr(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}
int power(int num3, int num4) {
    int tmp = 1;
    do std::cout << tmp << '\n', tmp *= num3; 
    while (num4--);
    return tmp;
}
void positive_arr(double arr1[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] < 0.0)
            arr1[i] == -arr1[i];
       
    }
}


int main()
{
    setlocale (LC_ALL, "Russian");
    //Задача 1. Среднее арифметическое
    /*std::cout << "Введите 2 числа: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "Среднее арифметическое 2х чисел -> "<<mean(a, b);*/
    //Задача 2. Массив и его длина
    /*const int size = 5;
    int arr[size]{5,8,4,2,3};
    std::cout << "Массив ->\n";
    mean_arr(arr, size);*/
   //Задача 3. Степени
    /*int n, m;
    std::cout << "Введите 2 числа для возведения в степени:\n";
    std::cin >> n;
    std::cin >> m;
    power(n,m);
    std::cout  << power(n, m);*/
    //Задача 4. Отрицательное в положительное:
    const int size = 10;
    double arr1[size]{ 1,2,-3,-5,8,9,-10,-6,-11,-12 };
    std::cout << "Массив:\n";
    positive_arr;
    std::cout << positive_arr;
    

    return 0;
}


