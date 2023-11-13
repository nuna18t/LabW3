#include <iostream>
using namespace std;
int main()

{
   int a, b, c, d;
   cout << "Введіть чотири цілих числа: ";
   cin >> a >> b >> c >> d;
   // Перевіряємо, скільки відрізняється від інших
   if (a != b && a != c && a != d)
   {
       cout << "Число, що відрізняється від інших, це " << a << endl;
   }
   else if (b != a && b != c && b != d)
   {
       cout << "Число, що відрізняється від інших, це " << b << endl;
   }
   else if (c != a && c != b && c != d)
   {
       cout << "Число, що відрізняється від інших, це" << c << endl;
   }
   else
   {
       cout << "Число, що відрізняється від інших, це" << d << endl;
   }
   return 0;

}

