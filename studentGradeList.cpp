#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> scores = {85, 99, 98, 35, 40, 66,70, 81, 79, 69,44,49};

    cout<< "All Grades List"<<endl;
    for(list<int>::iterator it = scores.begin(); it!= scores.end(); it++){
        cout << *it << endl;
    }


list<int> passing;
list<int> failing;

for(list<int>::iterator it = scores.begin(); it != scores.end(); it++){
    if(*it >= 50)
    passing.push_back(*it);
    else
    failing.push_back(*it);
}

passing.sort();
failing.sort();
    cout<< "Passing Grades List"<<endl;

 for(list<int>::iterator it = passing.begin(); it!= passing.end(); it++){
        cout << *it << endl;
    }
    cout<< "Failing Grades List"<<endl;

 for(list<int>::iterator it = failing.begin(); it!= failing.end(); it++){
        cout << *it << endl;
    }

return 0;
}