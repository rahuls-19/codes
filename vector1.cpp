#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec1;
vec1.push_back(3);
vec1.push_back(13);
vec1.push_back(23);
vec1.push_back(33);
vec1.push_back(43);
for(int i=0;i<vec1.size();i++){
    cout << vec1[i] << " ";
}
cout << endl ;
vec1.insert(vec1.begin(),89);

for(int i=0;i<vec1.size();i++){
    cout << vec1[i] << " ";
}
cout << endl ;

vec1.insert(vec1.begin()+5,89);

for(int i=0;i<vec1.size();i++){
    cout << vec1[i] << " ";
}
cout << endl ;
vec1.erase(vec1.begin()+1);

for(int i=0;i<vec1.size();i++){
    cout << vec1[i] << " ";
}
cout << endl ;
cout <<vec1.empty() << endl;
vec1.clear();

for(int i=0;i<vec1.size();i++){
    cout << vec1[i] << " ";

}
cout <<vec1.empty() << endl;
cout << endl ;
}
