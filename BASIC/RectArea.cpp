#include<bits/stdc++.h>
using namespace std;

/*
	You are given with length and breadth. find area of rectangle

	Constraint
		-10^9 <= length <= 10^9
		-10^9 <= breadth <= 10^9

*/

int main(){
	int length;
	int breadth;

	cin >> length >> breadth;

	//int area = length * breadth; not works because of overflow
	//long long int area = length * breadth; this also not works as calculation is still done in int
	long long int area = length * 1LL* breadth;
	cout << area;

	//Approach 2 you can make length,breadth as long long int

}