#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class PhoneNumber{
      
      friend ostream & operator<<(ostream&, const PhoneNumber &);
      friend istream & operator>>(istream&, PhoneNumber &);
      
      public:
             PhoneNumber(char ac[]="000", char xc[]="000", char lc[]="0000"){
                  setPhoneNumber(ac, xc, lc); 
             }
             
             void setPhoneNumber(char ac[], char xc[], char lc[]);
             
      private:
              char areaCode[4]; // 3-digit area code + \0
              char exchange[4]; // 3-digit exch code + \0
              char line[5];     // 4-digit line code + \0         
      
};
      
void PhoneNumber::setPhoneNumber(char ac[], char xc[], char lc[])
{
     strcpy(areaCode, ac);
     strcpy(exchange, xc);
     strcpy(line, lc);
}
      
ostream &operator<<(ostream &output, const PhoneNumber &num)
{
        output << "(" << num.areaCode << ") "
               << num.exchange << "-"
               << num.line << endl;
        return output; 
        // last line enables cout << a << b << c         
              
}
      
istream &operator>>(istream &input, PhoneNumber &num)
{
        input.ignore(); // skip the ( character
        // Input the areo code.
        // friend function can update members
        input >> setw(4) >> num.areaCode;
              
        // Input the exchange code.
        input.ignore(2); // skip the ) and space
        input >> setw(4) >> num.exchange;
              
        // Input the line code.
        input.ignore(); // skip the dash character
        input >> setw(5) >> num.line;
              
        return input;
        // last line enables cin >> a >> b >> c       
              
}
      
int main(){
    PhoneNumber phone; // create object phone
    cout << "Enter the phone number in the "
         << "form (123) 456-7890 :\n";
    cin >> phone;
    cout <<  "The phone number entered was:"
         << phone << endl;
                    
    system("pause");          
    return 0;
          
}
