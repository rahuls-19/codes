#include<iostream>
using namespace std;
class Human{
 private :
     int age;
     string name;

 public :
     Human(){
     cout << "you are learning c++" << endl ;
     }
    void getAge(){

    age = 0;
    name = "noname";
    }
};


int main(){
   Human sen ;
   sen.getAge();
    return 0;

}
