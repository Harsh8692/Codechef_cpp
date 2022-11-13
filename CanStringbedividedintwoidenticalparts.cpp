/*
NOV 221 contest

Problem
Alice and Bob are playing a game. They have a common string SS of length NN. The players also have their individual strings AA (belonging to Alice) and BB (belonging to Bob) which are empty in the beginning. Game begins with Alice and both players take alternate turns.

In her/his turn, the player picks a single character from string SS, adds it to the end of their individual string and deletes the picked character from string SS.

The game continues until string SS is empty. Find whether there exists a sequence of moves such that the strings AA and BB are same at the end of the game.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer NN — the length of the string.
The next line contains the strings SS consisting of lowercase english alphabets.
Output Format
For each test case, output on a new line, YES if there exists a sequence of moves such that the strings AA and BB are same at the end of the game, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
*/
#include <iostream>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",s);
	    int ck=0;
	    if(n%2==0)
	    {
	    for(int j=0;j<n;j++){
	        int check=0;
	        if(s[j]!='1'){
	            char c = s[j];
	            for(int k=0;k<n;k++){
	                if(j!=k&&c==s[k]){
	                    s[k]='1';
	                    check++;
	                }
	            }
	            s[j]='1';
	            if((check+1)%2!=0){
	                ck++;
	                break;
	            }
	        }
            else continue;
	    }
	    if(ck==0)printf("YES\n");
	    else printf("NO\n");
	    }
	    else printf("NO\n");
	    
	}
	return 0;
}
