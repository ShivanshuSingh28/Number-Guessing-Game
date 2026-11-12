#include <iostream>
using namespace std;
#include <cstdlib>   
#include <ctime>     

int main() {
    int g,r;
    srand(time(0));
    r = rand() % 100 + 1;

    do{
        cout<<"Guess the number between 1 to 100: "<<endl;
        cin>>g;
        if (g>r)
        {
            cout<<"Your guess is greater than the number"<<endl;
        }
        else if (g<r)
        {
            cout<<"Your guess is less than the number"<<endl;
        }
        else
        {
            cout<<"You guessed the number correctly"<<endl;
            
        }
        
    }
    while(g!=r);

    return 0;
}