#include <iostream>
using namespace std;

int main()
{                                          
   cout.width(10); // minimum lan geniþliðine deðer veriliyor
   cout << "merhaba" << '\n'; // varsayýlan olarak saða hizalý
   cout.fill('%'); // doldurma karakteri yenileniyor
   cout.width(10); //geniþlik belirleniyor
   cout << "merhaba" << '\n'; // varsayýlan olarak saða hizalý
   cout.setf(ios::left);//sola dayalý
   cout.width(10); //geniþlik belirleniyor
   cout << "merhaba" << '\n'; // varsayýlan olarak saða hizalý
   
   cout << '\n';
   
   cout.width(15); //geniþlik belirleniyor
   cout.precision(12); // toplam basamak sayýsý 10 yapýlýyor
   cout << 123.2345676565 << '\n';
    cout.width(10); //geniþlik belirleniyor
   cout.precision(6); // toplam basamak sayýsý 10 yapýlýyor
   cout << 123.234567 << '\n';
   system("pause");                                     
   return 0;
}



