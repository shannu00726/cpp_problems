#include<iostream>
#include<vector>
#include<string>
using namespace std;

int calculateWrappingPaper(vector<int> prices, vector<string> discounts){
    int newPrices = 0;
    int i = 0;
    for(auto it = prices.begin(); it != prices.end(); it++, i++){
        if(discounts[i].find('%') != string::npos){
            int discount = stoi(discounts[i]);
            int discounted = *it - (*it * discount / 100);
            newPrices += max(0, discounted);
        }
        else{
            int discounted = *it - stoi(discounts[i]);
            newPrices += max(0, discounted);
        }
    }
    return newPrices;
}

int main(){
    // Test case 1 - mixed discounts
    vector<int> prices1 = {100, 50, 200, 75};
    vector<string> discounts1 = {"20%", "10", "50%", "30"};
    cout << "Total after discounts: " << calculateWrappingPaper(prices1, discounts1) << endl;
    // Expected: 80 + 40 + 100 + 45 = 265

    // Test case 2 - discount larger than price
    vector<int> prices2 = {10, 20};
    vector<string> discounts2 = {"50", "10%"};
    cout << "Total after discounts: " << calculateWrappingPaper(prices2, discounts2) << endl;
    // Expected: 0 + 18 = 18

    return 0;
}