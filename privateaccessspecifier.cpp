#include<iostream>
using namespace std;
class HumanAge{
private :
    int age;
public :
    void display(){
    cout << age << endl;
    }
    void getAge(int var){
        age = var;
    }

};



int main(){
    HumanAge sen;
    sen.getAge(24);
    sen.display();


}
