#include <iostream>
#include <vector>

int BinarySearch(std::vector<int>& arr, int target, int left, int right) {
	if (left > right) return -1;
	int mid = left + (right - left) / 2;
	if (arr[mid] == target) return mid;
	if (target < arr[mid]) {
		right = mid - 1;
		return BinarySearch(arr, target, left, right);
	}
	else {
		left = mid + 1;
		return BinarySearch(arr, target, left, right);
	}
}

int main() {
	std::vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
	std::cout << BinarySearch(arr, 8, 0, 7);
	return 0;
}