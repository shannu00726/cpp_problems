#include<iostream>
using namespace std;

int main(){
int age = 30;
int& ref = age;
ref = 25;
cout<<age;
}
