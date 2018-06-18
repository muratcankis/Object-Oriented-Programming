#include <iostream> 
using namespace std; 
   
const int MaxSize = 100; 
 
class Set {     
  int len; // number of members  
  char members[MaxSize]; // this array holds the set     
 
  /* The find() function is private because it  
     is not used outside the Set class. */  
  int find(char ch); // find an element 
 
public: 
  
  // Construct a null set.  
  Set() { len = 0; }  
  
  // Return the number of elements in the set. 
  int getLength() { return len; }  
 
  void showset(); // display the set 
  bool isMember(char ch);  // check for membership 
 
  Set operator +(char ch); // add an element   
  Set operator -(char ch); // remove an element 
 
  Set operator +(Set ob2); // set union 
  Set operator -(Set ob2); // set difference   
};     
 
/* Return the index of the element  
   specified by ch, or -1 if not found. */ 
int Set::find(char ch) {  
  int i;  
      
  for(i=0; i < len; i++)  
    if(members[i] == ch) return i;  
  
  return -1;  
}  
 
// Show the set. 
void Set::showset() { 
  cout << "{ "; 
  for(int i=0; i<len; i++) 
    cout << members[i] << " "; 
 
  cout << "}\n"; 
} 
  
/* Return true if ch is a member of the set. 
   Return false otherwise. */ 
bool Set::isMember(char ch) {  
  if(find(ch) != -1) return true; 
  return false; 
}  
 
// Add a unique element to a set.     
Set Set::operator+(char ch) {   
  Set newset; 
 
  if(len == MaxSize) { 
    cout << "Set is full.\n"; 
    return *this; // return existing set 
  } 
 
  newset = *this; // duplicate the existing set 
     
  // see if element already exists  
  if(find(ch) == -1) { // if not found, then add  
    // add new element to new set  
    newset.members[newset.len] = ch;  
    newset.len++;  
  }  
  return newset; // return updated set  
}     
  
// Remove an element from the set.     
Set Set::operator-(char ch) {   
  Set newset; 
  int i = find(ch); // i will be -1 if element not found  
  
  // copy and compress the remaining elements  
  for(int j=0; j < len; j++)  
    if(j != i) newset = newset + members[j];  
  
  return newset;  
}     
  
// Set union.  
Set Set::operator+(Set ob2) {   
  Set newset = *this; // copy the first set  
  
  // Add unique elements from second set. 
  for(int i=0; i < ob2.len; i++)   
    newset = newset + ob2.members[i];  
  
  return newset; // return updated set  
}  
  
// Set difference.  
Set Set::operator-(Set ob2) {   
  Set newset = *this; // copy the first set  
  
  // Subtract elements from second set.  
  for(int i=0; i < ob2.len; i++)   
    newset = newset - ob2.members[i];  
  
  return newset; // return updated set  
}  
 
// Demonstrate the Set class.     
int main() {     
  // construct 10-element empty Set    
  Set s1;     
  Set s2; 
  Set s3; 
  
  s1 = s1 + 'A';  
  s1 = s1 + 'B';  
  s1 = s1 + 'C';  
  
  cout << "s1 after adding A B C: ";   
  s1.showset(); 
 
  cout << "\n"; 
 
  cout << "Testing for membership using isMember().\n";  
  if(s1.isMember('B')) 
    cout << "B is a member of s1.\n"; 
  else 
    cout << "B is not a member of s1.\n"; 
 
  if(s1.isMember('T')) 
    cout << "T is a member of s1.\n"; 
  else 
    cout << "T is not a member of s1.\n"; 
 
  cout << "\n"; 
 
  s1 = s1 - 'B';  
  cout << "s1 after s1 = s1 - 'B': ";   
  s1.showset(); 
  
  s1 = s1 - 'A';  
  cout << "s1 after s1 = s1 - 'A': ";   
  s1.showset(); 
  
  s1 = s1 - 'C';  
  cout << "s1 after a1 = s1 - 'C': ";   
  s1.showset(); 
 
  cout << "\n"; 
 
  s1 = s1 + 'A';  
  s1 = s1 + 'B';  
  s1 = s1 + 'C';  
  cout << "s1 after adding A B C: ";   
  s1.showset(); 
  
  cout << "\n"; 
 
  s2 = s2 + 'A';  
  s2 = s2 + 'X';  
  s2 = s2 + 'W';  
  
  cout << "s2 after adding A X W: ";   
  s2.showset(); 
  
  cout << "\n"; 
 
  s3 = s1 + s2;  
  cout << "s3 after s3 = s1 + s2: ";   
  s3.showset(); 
  
  s3 = s3 - s1;  
  cout << "s3 after s3 - s1: ";   
  s3.showset(); 
  
  cout << "\n"; 
 
  cout << "s2 after s2 = s2 - s2: ";   
  s2 = s2 - s2;  // clear s2  
  s2.showset(); 
  
  cout << "\n"; 
 
  s2 = s2 + 'C'; // add ABC in reverse order  
  s2 = s2 + 'B';  
  s2 = s2 + 'A';  
 
  cout << "s2 after adding C B A: ";   
  s2.showset(); 
  
  system("pause");
  return 0; 
}
