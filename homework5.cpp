#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int sum = 0;
    int rangeBegin, rangeEnd;

    cout << "Введите начало диаппазона" << endl;
    cin >> rangeBegin;
    cout << "Введите конец диаппазона" << endl;
    cin >> rangeEnd;
    do
    {
        if (rangeBegin % 2 !=0)
        {
            sum += rangeBegin;
        }
        rangeBegin++;
    }
    while (rangeBegin<rangeEnd);
    cout<<"Сумма всех нечетных чисел в указанном диаппазоне = "<<sum<< endl;   

    return 0;
}
