#include<iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> v(10);
  for(int i=0;i<v.size();i++){
    v[i]=i*10;
  }
  for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
  }
  v.push_back(-1);
  v.resize(15);
  for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
  }
  return 0;
}
