#include<iostream>
#include<deque>
using namespace std;
int main() {
  deque<int> d(10);
  for(int i=0;i<d.size();i++){
    d[i]=i*10;
  }
  for(int i=0;i<d.size();i++){
    cout << d[i] << endl;
  }
  d.push_back(-1);
  d.push_front(-1);
  d.resize(20);
  for(int i=0;i<d.size();i++){
    cout << d[i] << endl;
  }
  return 0;
}
