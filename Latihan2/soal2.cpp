#include <iostream>
using namespace std;


int kali_rekursif(int a, int b)
{
 if (b==0)
  return 0;
 else if (b > 0)
  return a + kali_rekursif(a, b - 1);
 else
  return (-a) + kali_rekursif(a, b+1);
}


main()
{
 int a, b;
 cout<<"Program oleh Ayu Lestari"<<endl;
 cout << "Masukan Bilangan : ";
 cin >> a;
 cout << "Dikali Dengan :";
 cin >> b;
 cout << " AxB = " << kali_rekursif(a, b) << endl;
}
