#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
	int st = 0, end = arr.size() - 1;
	
	while(st <= end){
		int mid = (st + end) / 2;
		if(tar > arr[mid]){
			st = mid + 1;
		}else if(tar < arr[mid]){
			end = mid - 1;
		}else{
			return mid;
		}
	}
	return -1;
}

int main(){
	vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};  //odd array
	
	
	vector<int> arr2 = {-1, 0, 3,5, 9, 12};     //even array
	int tar2 = 5;
	cout << binarySearch(arr2, tar2) << endl;
}
