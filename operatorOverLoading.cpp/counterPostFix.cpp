#include<iostream>
using namespace std;
class counter
{
private:
   int value;
public:
   counter(int v = 0) : value(v){}
   
   counter operator++(int){
      counter temp = *this;
      value++;
      return temp;
   }
   void display(){
      cout<<"value :"<<value;
   }
};

int main(){
   counter c(6);
   c++;
   c.display();
   return 0;
}
