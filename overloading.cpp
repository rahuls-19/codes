#include<iostream>
using namespace std;
class Human{
 private :
     int age;
     string name;

 public :
     Human(){
     cout << "Default constructor " << endl ;
     }
     Human(int age){
     cout << "Constructor with one parameter " << endl ;
     }

};


int main(){
   Human sen,seni(34) ;

    return 0;

}
