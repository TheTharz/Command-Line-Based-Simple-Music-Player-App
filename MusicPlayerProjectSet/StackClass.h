#pragma once
#include <iostream>
#include <string>
using namespace std;

class StackClass
{
public:
	int top;
	int capacity;
	string* RecentlyPlayedSong;

	StackClass(int k) {
		capacity = k;
		RecentlyPlayedSong = new string[capacity];
		top = 0;
	}

	void push(string song) {
		if (top >= capacity) {
			cout << "The stack is full" << endl;
		}
		else {
			RecentlyPlayedSong[top] = song;
			top++;
		}
	}

	//string pop() {
	//	if (top == 0) {
	//		cout << "The recent playlist is empty" << endl;
	//		return string();
	//	}
	//	else {
	//		top--;
	//		return RecentlyPlayedSong[top];
	//	}//udinma tyena element eka eliyta gana eka krnne
	//}

	void traverse() {
		if (top == 0)
			cout << "Empty" << endl;
		else {
			cout << "Recently played songs..." << endl;
			for (int i = 0; i < top; i++) {
				cout << RecentlyPlayedSong[i] << endl;
			}
			cout << endl;
		}
	}
};

