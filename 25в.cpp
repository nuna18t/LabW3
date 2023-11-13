#include <iostream>
using namespace std;
//If1.Дано ціле число. Якщо воно є додатним, то відняти від нього 8;
// інакше не змінювати його. Вивести отримане число.
void task_if1 (); // завдання 1 оголошення функції
// Дано координати точки на площині (x, y).
// Визначити, чи потрапляє точка в фігуру заданого кольору (або групу фігур)
// і вивести відповідне повідомлення.
void task_geom1 ();// завдання 2 оголошення функції
int main () {
int menu;
cout << "Task number:";
cin >> menu;
switch (menu)
{ // перемикання між завданнями
case 1: task_if1 (); break; // Завдання 1
case 2: task_geom1 (); break; // Завдання 2
default: cout << "Wrong task! (Only 1,2)" << endl; //повідомлення про помилку
}
system ("pause");
return 0;
}
void task_if1 ()// завдання 1 реалізація
{
int num;
cout << "************* If 1 *****************" << endl;
cout << "Integer number:";
cin >> num;
if (cin) { // умова якщо введено ціле
if (num > 0) // умова, коротка форма if
num -= 8;
cout << "After transformation:" << num << endl;
}
else // інакше – якщо не ціле
cout << "Wrong integer!" << endl;
}
// завдання 2 реалізація
void task_geom1 () {
float x, y, a, r;
cout << "*********** Point in geometry region 1 ************" << endl;
cout << "Parameters a, r:";
cin >> a >> r;
if (!cin || a <= 0 || r <= 0 || r>a) // перевірка коректності даних
cout << "Must be numeric, positive, non-zero, a>b!"; //повідомлення про помилку
else // дані коректні
{
cout << "Point x, y:";
cin >> x >> y;
if (!cin) cout << "Must be numeric!" << endl;
else {
if ((y >x*(-1) && y<0 && x>0 && x<a/2) && !(x=(r*r-y*y)/x && x>0 && y<0 && x<r && y>r*(-1))) 
cout << "In region!" << endl;
else if ( x=(r*r-y*y)/x && x<0 && y<0 && x>r*(-1) && y>r*(-1) )
cout << "In region!" << endl;
else cout << "Out of region!" << endl;
}
}
}