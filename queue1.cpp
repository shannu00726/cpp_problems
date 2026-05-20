#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> dailyTasks;

    dailyTasks.push("wake up");
    dailyTasks.push("Brushing");
    dailyTasks.push("start studying");
    dailyTasks.push("prepare hot green tea after sometime");
    dailyTasks.push("drink green tea while studying");
    dailyTasks.push("probably chinni will wake up by now and calls me");
    dailyTasks.push("i go to bedroom to be with her");
    dailyTasks.push("prepare lunch or something to eat");
    dailyTasks.push("eat together while watching one piece");
    dailyTasks.push("comeback to stuyding");
    dailyTasks.push("eat dinner");
    dailyTasks.push("sleep");

    while(!dailyTasks.empty()){
        cout << dailyTasks.front() << endl;
        dailyTasks.pop();

    }
    cout << "All tasks have been finished";


return 0;
}