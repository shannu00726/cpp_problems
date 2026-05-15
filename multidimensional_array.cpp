#include<iostream>
using namespace std;

int main(){
    int rows, cols;

    cout<< "Enter number of rows and coloumns ";
    cin>>rows>>cols;

    int** array = new int*[rows];
    for(int i = 0; i < rows; i++){
        array[i] = new int[cols];
    }



    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"Enter element at "<<i<<" row and "<<j<<" coloumn : ";
            cin>>array[i][j];
        }
    }

     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"Elements = "<<array[i][j]<<endl;
            
        }
        cout<<endl;
    }

    






for(int i = 0; i < rows; i++){
        delete[] array[i];
    }

    delete[] array;
    array = NULL;

    return 0;

}

