#include<iostream>
using namespace std;
class Human{
 private :
     int age;
     string name;

 public :
     Human(){
     cout << "Constructor is called" << endl ;
     }
    ~Human(){
     cout << "Destructor is called" << endl ;
     }

};


int main(){
   Human *anil ;
   anil = new Human();
   delete anil;

    return 0;

}
