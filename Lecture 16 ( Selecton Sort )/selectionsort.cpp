#include<iostream>
using namespace std;
int main(){
 // coding studio
    for(int i = 0 ; i <= (n-1) ; i++){
        int minindex = i;
      for(int j = i + 1 ; j <= (n-1) ; j++){
          if(arr[j]<arr[minindex]){
              minindex = j;
          }
      }
      swap(arr[minindex],arr[i]);
    }
}