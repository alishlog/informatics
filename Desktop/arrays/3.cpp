#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	int z = 0;
	for( int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	for( int  i = 0 ; i < n ; i++){
		if(arr[i]>0){
		z++;	
		}
		
	}
	cout << z;
}