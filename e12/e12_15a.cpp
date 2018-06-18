//   map: cities and plate numbers **/
#include <iostream>
#include <map>
#include <string>         
using namespace std;

int main()
{                             // set of string objects
   multimap< string,int > city_num;
   city_num.insert(pair<string, int>("Trabzon",61));     // insert city names and numbers
   city_num.insert(pair<string, int>("Trabzon",161)); 
   city_num.insert(pair<string, int>("Trabzon",261)); 
   city_num.insert(pair<string, int>("Adana",01));
   city_num.insert(pair<string, int>("Adana",101));
   city_num.insert(pair<string, int>("Edirne",22));
   city_num.insert(pair<string, int>("Bursa",16));;
   city_num.insert(pair<string, int>("Istanbul",34));
   city_num.insert(pair<string, int>("Rize",53));
   city_num.insert(pair<string, int>("Sakarya",54));
   city_num.insert(pair<string, int>("Samsun",55));
   city_num.insert(pair<string, int>("Aksaray",68));
   city_num.insert(pair<string, int>("Artvin",8));
   city_num.insert(pair<string, int>("Çanakkale",17)); 
   
   
   cout << "Number of elements with key Trabzon: " << city_num.count("Trabzon") << endl;
   cout << "Number of elements with key Adana: " << city_num.count("Adana") << endl;
   cout << "Number of elements with key Sakarya: " << city_num.count("Sakarya") << endl;

   for (multimap<string, int>::iterator it = city_num.begin(); it != city_num.end();
       ++it)
   {
       cout << "  [" << (*it).first << ", " << (*it).second << "]" << endl;
   }


   pair<multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;

   ppp = city_num.equal_range("Trabzon");

   cout << endl << "Range of \"Trabzon\" elements:" << endl;
   for (multimap<string, int>::iterator it2 = ppp.first;
       it2 != ppp.second;
       ++it2)
   {
       cout << "  [" << (*it2).first << ", " << (*it2).second << "]" << endl;
   }


   system("PAUSE"); 
   return 0;
}
