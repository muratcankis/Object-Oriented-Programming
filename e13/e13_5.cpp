#include <iostream>
using namespace std;

int main()
{                                          
   cout.width(10); // minimum lan geni�li�ine de�er veriliyor
   cout << "merhaba" << '\n'; // varsay�lan olarak sa�a hizal�
   cout.fill('%'); // doldurma karakteri yenileniyor
   cout.width(10); //geni�lik belirleniyor
   cout << "merhaba" << '\n'; // varsay�lan olarak sa�a hizal�
   cout.setf(ios::left);//sola dayal�
   cout.width(10); //geni�lik belirleniyor
   cout << "merhaba" << '\n'; // varsay�lan olarak sa�a hizal�
   
   cout << '\n';
   
   cout.width(15); //geni�lik belirleniyor
   cout.precision(12); // toplam basamak say�s� 10 yap�l�yor
   cout << 123.2345676565 << '\n';
    cout.width(10); //geni�lik belirleniyor
   cout.precision(6); // toplam basamak say�s� 10 yap�l�yor
   cout << 123.234567 << '\n';
   system("pause");                                     
   return 0;
}



