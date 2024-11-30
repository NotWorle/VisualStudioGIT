//5.Cho 2 mảng A và B có kích thước n mỗi mảng và được sắp xếp.Viết chương trình tìm trung vị của mảng thu được sau khi gộp 2 mảng trên
//a1[] = { 1, 4, 5, 6, 10 };
//a2[] = { 2, 3, 4, 5, 7 };
//Trung vị là 4.5


#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


void CoupleArray(int arr1[], int arr2[], unordered_set<int>& visited, int size, int left, int right) {
	if (left >= right) {
		if (visited.find(arr1[left]) == visited.end())
			visited.insert(arr1[left]);
		else
			cout << arr1[left] << " ";
		if (visited.find(arr2[left]) == visited.end())
			visited.insert(arr2[left]);
		else
			cout << arr2[left] << " ";
		return;
	}
	else {
		int mid = left + (right - left) / 2;
		CoupleArray(arr1, arr2, visited, size, left, mid);
		CoupleArray(arr1, arr2, visited, size, mid + 1, right);
	}
}


void CoupleArray2(int arr1[], int arr2[], unordered_set<int>& visited, int size, int left, int right) {
	if (left > right) {
		return;
	}
	else {
		int mid = left + (right - left) / 2;
		if (visited.find(arr1[mid]) == visited.end())
			visited.insert(arr1[mid]);
		else
			cout << arr1[mid] << " ";
		if (visited.find(arr2[mid]) == visited.end())
			visited.insert(arr2[mid]);
		else
			cout << arr2[mid] << " ";
		CoupleArray(arr1, arr2, visited, size, left, mid -1);
		CoupleArray(arr1, arr2, visited, size, mid + 1, right);
	}
}

int main() {
	/*unordered_set<int> visited;
	int arr1[] = { 1, 4, 6, 5, 10 };
	int arr2[] = { 2, 3, 5, 4, 7 };

	int size = sizeof(arr1) / sizeof(arr1[0]);

	cout << "Trung vi: "; CoupleArray(arr1, arr2, visited, size, 0, size-1);
	cout << endl;
	visited.clear();
	cout << "Trung vi: "; CoupleArray2(arr1, arr2, visited, size, 0, size - 1);*/

}