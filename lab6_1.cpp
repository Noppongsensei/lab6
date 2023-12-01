#include<iostream>
using namespace std;

int main(){
    int num;
    int Ev=0;
    int Odd=0;
    while(num !=0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num%2==0){
            Ev++;
        }else{
            Odd++;
        }
    }
    
    
    if(num==0){
        cout << "#Even numbers = "<<Ev-1<<"\n";
        cout << "#Odd numbers = "<<Odd;
    }else{
        cout << "#Even numbers = "<<Ev<<"\n";
        cout << "#Odd numbers = "<<Odd;
    }
    return 0;
}
