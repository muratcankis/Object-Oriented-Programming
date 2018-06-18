//   map: cities and plate numbers **/
#include <iostream>
#include <map>
#include <string>         
using namespace std;

int main()
{                             // set of string objects
   map< string,int > city_num;
   city_num["Trabzon"]=61;     // insert city names and numbers
   city_num["Adana"]=01;
   city_num["Edirne"]=22;
   city_num["Bursa"]=16;
   city_num["Istanbul"]=34;
   city_num["Rize"]=53;
   city_num["Antalya"]=07;
   city_num["Izmir"]=35;
   city_num["Hatay"]=31;
   city_num["Ankara"]=06;
   city_num["Zonguldak"]=67;  
   city_num["Canakkale"]=17;        
   
   string city_name;
   cout << "\nBir sehir ismi giriniz: ";
   cin >> city_name;
   if (city_num.end()== city_num.find(city_name))
		cout << city_name << " veri tabanında böyle bir sehir yok." << endl;
   else
        cout  << city_name << " Plaka Numarasi " << city_num[city_name]<<endl;
   
   system("PAUSE"); 
   return 0;
}
