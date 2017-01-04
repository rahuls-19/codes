#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b){
	return a+b;
}
int main(){
	int a,b;
	float x,y;
	cin >> a >> b >> x >> y;
	cout << add<int>(a,b) << endl;
	cout << add<float>(x,y) <<endl;
	return 0;
}

