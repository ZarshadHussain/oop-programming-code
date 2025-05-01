#include<iostream>
using namespace std;
class light{
   bool isOn;

   public :
   light(bool status) : isOn(status){}

   bool operator!() {
      return isOn;
   }
   void dispaly(){
      cout<<"isOn? Light is ON "<<":"<<"Ligh isOF"<<endl;

   }
};
int main(){
   light bulb(false);
   bulb.dispaly();
   cout<<!bulb<<endl;
   return 0;
}
