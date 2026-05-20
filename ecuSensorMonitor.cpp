#include<iostream>
#include<vector>
using namespace std;

int main(){

    const int CRITICAL_THRESHOLD = 110;
vector<int> sensor = {98,102,87, 115,76, 134, 91};
if(sensor.empty()){
    cout << "Error: no sensor data" << endl;
    return -1;
}

int min = sensor[0];
int max = sensor[0];
for(vector<int>::iterator it = sensor.begin() ; it != sensor.end(); it++){
    if(min > *it){
        min = *it;
    }
}
cout << "Min reading is "<< min << endl;
for(vector<int>::iterator it = sensor.begin() ; it != sensor.end(); it++){
    if(max < *it){
        max =  *it;
    }
}
cout << "Max reading is "<< max << endl;

float avg = 0;
size_t size = sensor.size();
for(vector<int>::iterator it = sensor.begin() ; it != sensor.end(); it++){
    avg += *it;
}
avg /= size;

cout<<"Average is " << avg << endl;

for(int values : sensor){
    if(values > CRITICAL_THRESHOLD){
        cout << values << " is critical" << endl;
    }
    else{
        cout << values << " is OK" << endl;
    }
}


}