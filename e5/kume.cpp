#include <cstdlib>
#include <iostream>

using namespace std;
const int MaxSize=100;

class Set{
private:    
int len;
char members[MaxSize];
int find(char ch); // eleman bulma
public:
	Set(){len=0;}
	int getLenght( ) {return len;}
	
	void showSet();
	bool isMember(char);

	Set operator+(char); 	// eleman ekleme
	Set operator-(char); 	// eleman çýkarma
	
Set operator+(Set ob); 		// kümelerin birleþimi
Set operator-(Set ob); 		// kümelerin farký
};

int Set::find(char ch){
    if (isMember(ch)){
       int i;
       for (i=0;i<len;i++){
            if ( ch==members[i] )return i;
            
       }
    }
    return -1;
}

bool Set::isMember(char ch){
    int i;
    for (i=0;i<len;i++){
        if ( ch==members[i] )return true;
            
    }
    return false;
     
}
Set Set::operator+(char ch){
    
    int i;
    if(!isMember(ch)){
        members[len]=ch;
        len++;       
    }
    return *this;
}

Set Set::operator+(Set ob){
    Set temp=ob;
    for(int i=0;i<len;i++){
         if(!temp.isMember(members[i]))temp+members[i];
    }
    return temp;
}

Set Set::operator-(char ch){
    int nerede,i;
    if(isMember(ch)){
        nerede=find(ch);
        int j=0;
        for(i=nerede+1;i<len;i++){
            members[i-1]=members[i];  
        }
        len--;         
    }
    return *this;
}

void Set::showSet(){
     cout <<'{';
     for(int i=0;i<len;i++){
         if (i!=len-1)cout<<members[i]<<", ";
         else cout<<members[i]<<"} ";
     }
}
    
int main(int argc, char *argv[])
{
    Set s;
    s+'1';
    s+'2';
    s+'3';
    s+'4';
    s+'8';
    s+'m';
    s.showSet();
    s-'3';
    cout<<endl;
    s.showSet();
    Set s1,s2;
    s1+'1';
    s1+'2';
    s1+'k';
    s1+'n';
    s1+'8';
    s2=s+s1;
    cout<<endl;
    s2.showSet();
    system("PAUSE");
    return EXIT_SUCCESS;
}
