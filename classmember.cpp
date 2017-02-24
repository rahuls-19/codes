#include<iostream>
using namespace std;
class HumanBeing{
public :
    string name;
    void Introduction(){
    cout << "Hey , I am  " << name << endl;
    }

};
int main(){
    HumanBeing he,she;
    he.name = "Akash";
    he.Introduction();
    she.name = "Radhika";
    she.Introduction();
    return 0;

}
