#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int Maxx = arr[0];
	for(int i = 0 ; i < n ; i++){
      if(arr[i]>arr[i+1])Maxx=arr[i+1];
	}
	cout << Maxx;
}