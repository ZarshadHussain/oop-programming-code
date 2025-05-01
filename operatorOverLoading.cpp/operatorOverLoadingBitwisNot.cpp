#include<iostream>
using namespace std;

class BitNumber{
int value;

public :

BitNumber(int v) : value(v){}
BitNumber operator~(){
   return BitNumber(~value);

}
void display(){
   cout<<"value :"<<value<<endl;

}
};
int main(){
   BitNumber b(5);
   BitNumber flipped = ~b;

   flipped.display();
   return 0;

}