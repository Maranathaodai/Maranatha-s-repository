#include <iostream>
#include <ctime>
using namespace std;
int main() {
   int num;
   int guess;
   int tries;

   srand(time(NULL));
   num = (rand() % 100) + 1;

   cout <<"******NUMBER GUESSING GAME******";

   do{
       cout <<'\n' << "Guess a number between (1-100):";
       cin >> guess;
       tries++;

       if(guess > num){
           cout << "Too high!";
       }
       else if (guess < num){
           cout << "Too low!";
       }
       else{
           cout << "CORRECT # of tries: "<< tries << '\n';
       }
   }while(guess != num);

    cout <<"***************************";
    return 0;
}
