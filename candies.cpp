/*
Problem
Abhi is a salesman. He was given two types of candies, which he is selling in NN different cities.

For the prices of the candies to be valid, Abhi's boss laid down the following condition:

A given type of candy must have distinct prices in all NN cities.
In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. Now he is asking for your help to find out if the prices he wrote are valid or not.

More formally, you are given an array AA of size 2N2N. Find out whether it is possible to split AA into two arrays, each of length NN, such that both arrays consist of distinct elements.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer NN, denoting the number of cities
The second line contains 2N2N space-separated integers A_1, A_2, \ldots, A_{2N}A 
1
​
 ,A 
2
​
 ,…,A 
2N
​
  — the elements of the array AA.
Output Format
For each test case output the answer on a new line — Yes if the given array represents a valid list of prices, and No otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e, Yes, YES, and yEs will all be treated as equivalent.
*/

#include <iostream>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d",&n);
	    int a[2*n];
	    for(int j=0;j<2*n;j++){
	        scanf("%d ",&a[j]);
	    }
	    int check=0;
	    for(int k=0;k<2*n;k++){
	        int count = 0;
	        for(int l=0;l<2*n;l++){
	            if(a[k]==a[l])count++;
	        }
	        if(count>2){
	            printf("No\n");
	            check++;
	            break;
	        }
	        else{
	            continue;
	        }
	    }
	    if(check==0){
	        printf("Yes\n");
	    }
	}
	return 0;
}
