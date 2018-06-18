#include <iostream>
#include<string>

using namespace std;

class Ders{
  string kod, adi, aciklama;
  int h_d_saati;
public:
  Ders(string ="", string ="", string ="", int =0);
  friend ostream & operator<<(ostream &,const Ders&);   
};

Ders::Ders(string k, string a, string ack, int h){
     kod=k;
     adi=a;
     aciklama=ack;
     h_d_saati=h;
  }  

ostream & operator<<(ostream & out, const Ders & dd){
        out << "Kodu: " << dd.kod << endl
            << "Adi: " << dd.adi << endl
            << "Aciklama: " << dd.aciklama << endl
            << "Haftalik Ders Saati: " << dd.h_d_saati << endl;
        return out;
}

template <class Type>
class Stack{
   private:
	  enum {MAX=100};
      Type st[MAX];              // stack: array of any type
      int top;                   // number of top of stack
   public:
	  Stack(){top = 0;}          // constructor
      void push(Type );          // put number on stack
      Type pop();                // take number off stack
};


template<class Type>
void Stack<Type>::push(Type var) // put number on stack
{
   if(top > MAX-1)                // if stack full,
     throw "Stack is full!";      // throw exception
   st[top++] = var;
}

template<class Type>
Type Stack<Type>::pop()          // take number off stack
{
   if(top <= 0)                  // if stack empty,
        throw "Stack is empty!"; // throw exception
   return st[--top];
}




int main()
{
   Stack<Ders> s1;       // s1 is object of class Stack<float>
   
   Ders d1("BM 227","Nesneye Yonelik Programlama",
   "Nesne programlama ile ilgili kavramlar ogretilecek",4);
   
   Ders d2("BM 229","Ayrik Matematik",
   "Ayrik yapilarin olusturuldugu kavramlar ogretilecek",4);
  
   s1.push(d1);  
   s1.push(d2);
     
   cout << s1.pop();
   cout <<endl;
   cout << s1.pop();

   system("pause");
	return 0;
}

