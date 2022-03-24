/*Вивести кількість елементів значення яких більше значення першого елемента масиву*/

#include <iostream>
using namespace std;
int main()
{ double a[9]; int i, k=0;
cout<<"Введіть 9 дійсних чисел:\n";
for(int i=0;i<9;i++)
{cin >> a[i];
 if (a[0]<a[i])
  k++;}
cout << "k = " << k << endl;
 return 0;
}