#include<iostream>
#include<stack>
using namespace std;

// Using two pointers brute force method
void nextgreele(int arr[], int n) {
	int next;
	for (int i = 0; i < n; i++) {
		next = -1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				next = arr[j];
				break;
			}
		}
		cout << next << " ";
	}
}
// Using stacks optimized approach
void nge(int arr[]) {
	stack<int> s;
	s.push(arr[0]);
	for (int i = 1; i < 5; i++) {
		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}
		while (s.empty() == false && s.top() < arr[i]) {
			cout << arr[i] << " ";
			s.pop();
		}
		s.push(arr[i]);
	}
	while (s.empty() == false) {
		cout << -1 << " ";
		s.pop();
	}
}




int main() {
	int arr[5] = { 1,0,2,5,2 };
	nextgreele(arr, 5);
	cout << endl;
	nge(arr);
	
}