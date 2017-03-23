/*
AtCoder Grand Contest 011
A - Airport Bus

to compile using std=c++14:
	g++ file.cpp -Wall -std=c++14 -o output

*/



#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, C, K;
	cin >> N >> C >> K;
	// >> readin operator

	vector<int> T(N);

	for (int& x : T) cin >> x;
	// auto: any file type
	// &: makes us loop over a copy so we can edit
	
	// sorting algorithm are often built in to most languages
	sort(T.begin(), T.end()); // sort from beginning of T to the end of T

	int num_buses = 0;

	for (int i=0; i<N; ) {
		int leave_time = T[i] + K;
		int filled = 0;
		// 3 conditions:
		// 1. there's still people left, 2. bus still has capacity, 3. bus is not late
		while (i < N && filled < C && T[i] < leave_time) filled++, i++;
			num_buses++;
	}

	cout << num_buses << "\n";

}