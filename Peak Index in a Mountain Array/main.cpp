/*By::Cebastian Santiago 
* Leetcode 852
*/
#include<iostream>
#include<vector>

/*[0,10,5,2]
* if(5 > 10)
*/


int peakIndexInMountainArray(std::vector<int>& arr) {
	int count = 0;
	for (size_t i = 1; i < arr.size(); i++) {
		//peak is the number greater then the pervious number
		if (arr[i] > arr[i-1]) {
			count++;
		}

	}

	return count;
}


int main(int argc, char* argv[]) {
	std::vector<int> nums = { 0,1,0 };

	std::cout << peakIndexInMountainArray(nums) << std::endl;

	return 0;
}