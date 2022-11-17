/*
Problem
Hackerman wants to know who is the better player between Bob and Alice with the help of a game.

The game proceeds as follows:

First, Alice throws a die and gets the number AA
Then, Bob throws a die and gets the number BB
Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.
Given AA and BB, determine who wins the game.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers AA and BB.
Output Format
For each test case, output on a new line the winner of the game: Alice or Bob.

Each letter of the output may be printed in either uppercase or lowercase, i.e, Alice, ALICE, AlIce and aLIcE will all be considered equivalent.
*/

#include <iostream>
using namespace std;

int prime(int n){
    if(n==2 || n==3)return 1;
    int check = 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            check++;
            break;
        }
        else continue;
    }
    if(check==0)return 1;
    else return 0;
}
int main() {
	int t,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d %d",&a,&b);
	    if(prime(a+b)==1)printf("Alice\n");
	    else printf("Bob\n");
	}
	return 0;
}
