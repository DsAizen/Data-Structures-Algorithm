/*
Piyush is lost in a magical park which contains N rows and M columns.In order
to get out of park safely and return home, he needs atleast K amount of
strength.Given a N by M pattern, your task is to find weather Piyush can ever
escape the park.

The pattern consisits of '.' , * and '#'.Intially the strength is S and if
Piyush encounters * , strength increases by 5.If he encounters '.', strength
decreases by 2.Please note that Piyush can only walk row wise, so he starts
from left of a row and moves towards right and he does this for every row. If
he encounters '#', this means that the row is blcked and he cannot move
forward. Also while moving in a row, Piyush requires strength of 1 for every
step and strength should always be positive for moving forward.

Assume that Piyush can shift immediately from last of one row to the start of
next one without loss of any strength, help out Piyush to escape the park.

Input Format:
Four space separated integers N, M, K and S all lie between 0 and 100. Next N lines contains M space separated characters which can be '.', '*' or '#'.

Constraints:
All numbers are positive and <= 100.

Output Format
Print "Yes" or "No" depending on whether Piyush can escape or not. If the answer is "Yes", also print the maximum strength that he can gather in the park in a new line.

Sample Input
4 4 5 20
. . * .
. # . .
* * . .
. # * *
Sample Output
Yes
13
*/

#include <iostream>

using namespace std;
void magical_park(char park[][100],int m,int n,int k, int s){
    bool success=true;
    
     for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
           char ch=park[row][col];
           if(s<k){
               success=false;
               break;
           } 
              if(ch=='*'){
                  s += 5;
              }else if(ch=='.'){
                  s -= 2;
              }else if(ch=='$'){
                  break;
              }
                if( col != n-1){
                    s--;
                }
        }
    }
     if(success){
         cout<<"yes : "<<s;
     }else{
         cout<<"no :"<<s;
     }
}
int main()
{	
    char park[100][100];
    int m,n,k,s;
    cout<<"m ,n, k ,s =";
    cin>>m>>n>>k>>s;
    cout<<"enter characters :";
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            cin>>park[row][col];
           
        }
    }
    cout<<"-----------------"<<endl;
    magical_park(park,m,n,k,s);
    return 0;
}

//2nd Approach
#include<iostream>
using namespace std;
int main(){
	int rows, col, minStrength, currStrength;
	cin >> rows >> col >> minStrength >> currStrength;
	char park[100][100];
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < col; j++){
			cin >> park[i][j];
		}
	}

	for(int i = 0; i < rows && currStrength >= minStrength; i++){
		for(int j = 0; j < col && currStrength >= minStrength; j++){
			if(j != 0){
				currStrength--;
			}
			if(park[i][j] == '*'){
				currStrength += 5;
			}
			else if(park[i][j] == '.'){
				currStrength -= 2;
			}
			else if(park[i][j] == '#'){
				break;
			}
		}
	}

	currStrength < minStrength ? cout << "No" : cout << "Yes\n" << currStrength;
	return 0;
}
