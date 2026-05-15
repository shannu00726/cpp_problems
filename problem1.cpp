#include<iostream>
using namespace std;


class WallLight{
public:
    bool isOn = false;
    int brightness = 50;
    string mode = "warm";


void turnOn(){
    isOn = true;
    std::cout<<"Wall Light is turned ON"<<endl;

}
void turnOff(){
    isOn = false;
    std::cout << "Wall Light is turned OFF" << endl;

}
void setBrightness(int value){
    if(value > 100 || value < 0)
    std::cout<<"Invalid Brightness level"<<endl;
    else{
    std::cout<<"Brightness updated to /n"<<value;
    brightness = value;
    
    }
}
void changeMode(string newMode){
    if(newMode == "Cool" || newMode == "Warm" || newMode == "Night" || newMode == "Party"){
        std:: cout<< "Mode changed to "<<newMode;
        mode = newMode;
    }
    else{
        std:: cout<<"Invalid Mode entered"<<endl;
    }
}
void displayStatus(){
    if(isOn)
    std::cout<<"Light is turned ON"<<endl;
    else
    std:: cout<<"Light is turned OFF"<<endl;

    std::cout<<"Current brightness level of light is "<<brightness<<endl;;

    std::cout<<"Current mode of light is "<<mode<<endl;

}
};

int main(){
    WallLight light;

    int choice;
    do{
        std::cout<<"1. Turn on the light"<<endl;
        std::cout<<"2.Turn off the light"<<endl;
        std::cout<<"3.Set Brightness"<<endl;
        std::cout<<"4.Change light mode"<<endl;
        std::cout<<"5.Display Status of light"<<endl;
        std::cout<<"6.Exit this menu"<<endl;
        std::cout<<"Select any one option ..."<<endl;
        std::cin>>choice;

        switch(choice){
            case 1:
            light.turnOn();
            break;
            case 2:
            light.turnOff();
            break;
            case 3:
            std::cout<<"Enter the brightness level";
            int level;
            std::cin>>level;
            light.setBrightness(level);
            break;
            case 4:{
            std::cout<<"Enter the mode you want to change into"<<endl;
            string mode;
            std::cin>>mode;
            light.changeMode(mode);
            break;
            }
            case 5:{
            light.displayStatus();
            break;
            }
            case 6:
            cout<<"Bye Bye Chinni Papa"<<endl;



                
        }
    }while(choice != 6);

}


