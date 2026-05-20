#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> grocery;

    grocery.push_back("Milk");
    grocery.push_back("Eggs");
    grocery.push_back("Bread");
    grocery.push_back("Rice");
    grocery.push_back("Tea");

    grocery.pop_back();

    cout << "Total number of groceries are = "<< grocery.size() << endl;

    for(string groceries : grocery){
        cout << groceries<< endl;
    }

    int count = 0;
    for(string groceries : grocery){
        if(groceries == "Eggs"){
        cout << "Eggs is in the list";
        count++;
        }
        
    }
    if(count == 0)
    cout << "Eggs is not in the list" << endl;

return 0;

}