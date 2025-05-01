#include<iostream>
using namespace std;

class Distance{
   int meters;

   public :
   Distance() : meters(0){}
   Distance(int m) : meters(m){}
   
   //Binary Operator Overloading

   Distance operator+(Distance d){

      Distance temp;

      temp.meters = meters + d.meters;
      return temp;
   }

   void display(){
      cout<<"Distance :"<<meters<<"meters :"<<endl;
   }
};

int main(){
   Distance d1(30),d2(50),d3;

   d3 = d1 + d2;
   d3.display();
   return 0;
}