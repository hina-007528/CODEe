#include<iostream>
// #include<cstdlib>
// #include<ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber=rand()%100+1;
    int guess;
    while(true){
        cout<<"Enter your guess between 1 and 100:";
        cin>>guess;
        if(guess<randomNumber){
            cout<<"Too low!Try again"<<endl;
        }else if(guess>randomNumber){
            cout<<"Too High!Try again"<<endl;
        }
        else{
            cout<<"Congratulation! you guessed the number"<<randomNumber<<endl;
            break;
        }}
    return 0;
}