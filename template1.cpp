#include<iostream>
using namespace std;
template<typename T>
class Storage{
    private:
    T value;
public:
    const T& get(){
        return value;
    }
    void set(const T& a){
        value = a;
    }

    void print(){
        cout<<value;
    }
    Storage() : value(T{}) {}  // initialize value to default
};
int main(){

    
    Storage<int> s1;
    

    int a = 35;
    s1.set(a);
    s1.get();
    s1.print();

    Storage<float> s2;

    float b = 9.9;
    s2.set(b);
    s2.get();
    s2.print();

    Storage<string> s3;

    string c = "Chinni";
    s3.set(c);
    s3.get();
    s3.print();

    return 0;


}


