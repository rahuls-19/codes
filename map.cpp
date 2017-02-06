#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,string> name;
	name[1] = "rohan";
	name[2] = "umang";
	name[3] = "harsh";
	name[4] = "utkarsh";
	name[5] = "vinay";
	name[6] = "akash";
	name[7] = "saurabh";
	name[8] = "rahul";
	for(int i=1;i<9;i++)
	cout << name[i] << endl;
	cout << name.size() << endl;
	name.clear();
	cout << name.size() << endl;
	
	
	
	
	
	
	
	
	return 0;
}
