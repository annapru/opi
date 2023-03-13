#include <iostream>
#include <string>
// Программа вычисления 
using namespace std;

int Date(int D, int M, int Y)
{
    int a, y, m, R;
    a = (14 - M) / 12;
    y = Y - a;
    m = M + 12 * a - 2;
    R = 7000 + (D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
    return R % 7;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int D, M, Y;
    char C;
    string S[7] = { "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
    cout << "Введите дд/мм/гг"<< endl;
    cin >> D >> C >> M >> C >> Y;

    cout << S[Date(D, M, Y)] << endl;

    system("pause");
    return 0;
}