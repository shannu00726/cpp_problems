#include<iostream>
using namespace std;

int main(){
int size;
cout << "Enter the size of array = ";
cin >> size;

int *array = new int[size];

for(int i = 0; i < size; i++){
    cout<< "Enter array["<<i<<"] = ";
    cin>>array[i];
}

for(int i = 0; i < size; i++){
    cout<<array[i];

}

delete[] array;
array = NULL;
return 0;

}
