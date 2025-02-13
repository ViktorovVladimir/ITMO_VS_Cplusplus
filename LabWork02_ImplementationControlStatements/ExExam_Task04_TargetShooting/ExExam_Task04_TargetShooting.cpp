/*
    Ex Exam. Target Shooting.

    It is required to develop a program that simulates shooting at a target.
*/


#include <iostream> 

using namespace std;


double rX, rY, rCenterX, rCenterY, r1, r2;
unsigned int uBonus;

//--.
void setOptions()
{
    rCenterX = 0; rCenterY = 0;
    r1 = 1; r2 = 2;
    uBonus = 0;
}

//--.
void setShootPoint()
{
    //--.
    cout << "\n\nPlease enter real value X-coorditate shoot: ";
    cin >> rX;
    //--.
    cout << "Please enter real value Y-coorditate shoot: ";
    cin >> rY;
}


unsigned int getScoring(double x, double y, double centerX, double centerY, unsigned int bon, double radius)
{
    double c1 = ((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));
    double c2 = (r1 * r1);

    return c1 <= c2 ? (unsigned int)bon : 0;
}

//--.
unsigned int getBonusFromShoot()
{
    unsigned int bonus2 = 0;
    unsigned int bonus1 = getScoring(rX, rY, rCenterX, rCenterY, 10, r1);
    if (bonus1 == 0)
    {
        bonus2 = getScoring(rX, rY, rCenterX, rCenterY, 5, r2);
    }
    return bonus1 + bonus2;
}

int main()
{
    //--. Устанавливаем начальные настройки
    setOptions();

    //--.
    cout << "\n\nPlease enter count shoot's on target (1 - 9): ";
    int iCountShoots;
    cin >> iCountShoots;

    do
    {
        //--. Запрашиваем координаты выстрела
        setShootPoint();

        //--. Проверяем куда попали и возвращаем кол-во очков
        //--. Делаем подсчёт очков
        uBonus += getBonusFromShoot();

        //--. Декремент патронов
        iCountShoots--;
    } while (iCountShoots > 0);

    //--. Вывод на экран сумма очков (баллов)
    //--.
    cout << "\n\nSum of points scored: " << uBonus << "\n\n";
}

