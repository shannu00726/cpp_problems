#include<iostream>
using namespace std;
template <typename T>
void mySwap(T& a, T& b){
T temp = a;
a = b;
b = temp;
}

int main(){
string a = "Shannu";
string b = "Jyoshna";
cout<<a<<" Loves -> "<<b<<endl;
mySwap<string>(a,b);
cout<<a<<" Loves -> "<<b<<endl;
return 0;
}
