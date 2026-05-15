#include<iostream>
using namespace std;

void getMinAndMax(int numbers[], int size, int *min, int *max){
for(int i = 1; i < size; i++){
if(numbers[i] > *max)
*max = numbers[i];
if(numbers[i] < *min)
*min = numbers[i];
}
}
int main(){
int numbers[5] = {2, 5, -10, -4, 55};
int min = numbers[0];
int max = numbers[0];
getMinAndMax(numbers, 5, &min, &max);
cout << "Min is " << min << endl;
cout << "Max is " << max << endl;
return 0;
}
