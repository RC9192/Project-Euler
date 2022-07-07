#include<bits/stdc++.h>
using namespace std;

int prod(vector< vector<int> > grid){
    int mul=0;
   for(int i=0;i<17;i++){
       for(int j=0;j<17;j++){
           if(grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3]>mul){
               mul=grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
           } if(grid[i+1][j]*grid[i+1][j+1]*grid[i+1][j+2]*grid[i+1][j+3]>mul){
               mul=grid[i+1][j]*grid[i+1][j+1]*grid[i+1][j+2]*grid[i+1][j+3];
           } if(grid[i+2][j]*grid[i+2][j+1]*grid[i+2][j+2]*grid[i+2][j+3]>mul){
               mul=grid[i+2][j]*grid[i+2][j+1]*grid[i+2][j+2]*grid[i+2][j+3];
           } if(grid[i+3][j]*grid[i+3][j+1]*grid[i+3][j+2]*grid[i+3][j+3]>mul){
               mul=grid[i+3][j]*grid[i+3][j+1]*grid[i+3][j+2]*grid[i+3][j+3];
           } if(grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3]>mul){
               mul=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
           }
            if(grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j]>mul){
               mul=grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
           } if(grid[i][j+1]*grid[i+1][j+1]*grid[i+2][j+1]*grid[i+3][j+1]>mul){
               mul=grid[i][j+1]*grid[i+1][j+1]*grid[i+2][j+1]*grid[i+3][j+1];
           } if(grid[i][j+2]*grid[i+1][j+2]*grid[i+2][j+2]*grid[i+3][j+2]>mul){
               mul=grid[i][j+2]*grid[i+1][j+2]*grid[i+2][j+2]*grid[i+3][j+2];
           } if(grid[i][j+3]*grid[i+1][j+3]*grid[i+2][j+3]*grid[i+3][j+3]>mul){
               mul=grid[i][j+3]*grid[i+1][j+3]*grid[i+2][j+3]*grid[i+3][j+3];
           } if(grid[i][j+3]*grid[i+1][j+2]*grid[i+2][j+1]*grid[i+3][j]>mul){
               mul=grid[i][j+3]*grid[i+1][j+2]*grid[i+2][j+1]*grid[i+3][j];
           }
       }
   }
   return mul;
}


int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
    	for(int grid_j = 0;grid_j < 20;grid_j++){
    		cin >> grid[grid_i][grid_j];
    	}
    }
    cout<<prod(grid);
    return 0;
}
