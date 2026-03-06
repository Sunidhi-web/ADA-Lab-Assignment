#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int st, int end){
	if (st <= end){
		int mid = st + (end - st)/2;
		
		if(tar > arr[mid]){
			return binarySearch(arr, tar, mid + 1, end);
		}else if(tar < arr[mid]){
			return binarySearch(arr, mid, st, mid - 1);
		}else{
			return mid;
		}
	}
	return -1;	
}

int main(){
	vector<int> arr = {-1, 0, 3, 5, 9, 12};
	int tar = 9;
	cout << binarySearch(arr, tar, 0, arr.size()-1) << endl;
}

