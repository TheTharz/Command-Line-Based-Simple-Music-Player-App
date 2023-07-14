#pragma once

#include <iostream>
#include <cstddef>
#include "DoublyLinkedList.h"

using namespace std;

class node
{
public:
	string playListName;
	node* next;
	DoublylinkedList PlayListWithSongs;

	node() {
		playListName = string();
		next = NULL;
	}

	node(string playlist) {
		playListName = playlist;
		next = NULL;
		DoublylinkedList* PlayListWithSongs = new DoublylinkedList(playlist);
	}
};

class linkedList {

private:
	node* head;
	node* tail;
	int size;
public:
	linkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void insertFirst(string value) {

		node* temp = new node(value);

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			temp->next = head;
			head = temp;
		}

		size++;
	}

	void insertLast(string value) {
		node* temp = new node(value);

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
		size++;
	}

	void insertAt(string value, int pos) {
		if (pos<0 || pos>size) {
			cout << "Invalid Index" << endl;
		}
		else if (pos == 0) {
			insertFirst(value);
		}
		else if (pos == size) {
			insertLast(value);
		}
		else {
			node* temp = new node(value);
			node* current = head;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			temp->next = current->next;
			current->next = temp;
			size++;
		}

	}

	void deleteFirst() {
		node* temp = head;
		if (size == 0) {
			cout << "Empty List" << endl;
		}
		else if (size == 1) {
			delete temp;
			head = NULL;
			tail = NULL;
			size--;
		}
		else {
			head = head->next;
			delete temp;
			size--;
		}

	}

	void deleteLast() {
		if (size == 0) {
			cout << "Empty List" << endl;
		}
		else if (size == 1) {
			node* temp = tail;
			delete temp;
			tail = NULL;
			head = NULL;
			size--;
		}
		else {
			node* temp = tail;
			node* current = head;
			for (int i = 0; i < size - 2; i++) {
				current = current->next;
			}
			tail = current;
			tail->next = NULL;
			delete temp;
			size--;
		}
	}

	void deleteAt(int pos) {
		if (pos < 0 || pos >= size) {
			cout << "Playlist unavailable!" << endl;
		}
		else if (pos == 0) {
			deleteFirst();
			cout << "Playlist deleted successfuly" << endl;

		}
		else if (pos == size - 1) {
			deleteLast();
			cout << "Playlist deleted successfuly" << endl;

		}
		else {
			node* current = head;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			node* temp = current->next;
			current->next = temp->next;
			delete temp;
			size--;
			cout << "Playlist deleted successfuly" << endl;
		}
	}

	void search(string value) {
		node* current = head;

		for (int i = 0; i < size; i++) {
			if (current->playListName == value) {
				cout << "The playlist has found" << endl;
				break;
			}
			current = current->next;
			if (i = size)
			{
				cout << "The playlist not found" << endl;
			}
		}

		cout << endl;
	}

	bool searchBool(string value) {
		node* current = head;

		for (int i = 0; i < size; i++) {
			if (current->playListName == value) {
				return true;
				break;
			}
			current = current->next;
			if (i == size-1)
			{
				return false;
			}
		}
		cout << endl;
	}

	node* returnNode(string value) {
		node* current = head;

		if (searchBool(value)) {
			for (int i = 0; i < size; i++) {
				if (current->playListName == value) {
					return current;
					break;
				}
				current = current->next;
			} 
		}
	}

	void print() {
		node* current = head;
		//system("cls");
		//cout << current->value << " ";
		while (current != NULL) {
			cout << current->playListName << endl;
			current = current->next;
		}
	}

	int returnPos(string playlist)
	{
		if (size == 0) {
			cout << "There are no playlists to delete" << endl;
			return -1;
		}
		else {
			node* current = head;
			int i = 0;
			for (i = 0; i < size; i++) {
				if (current->playListName == playlist) {
					return i;
					break;
				}
				current = current->next;
			}

			if (i == size) {
				return -1;
			}
		}
	}

	void searchString(string playListName)
	{
		if (head == NULL) {
			cout << "There Are No Playlists" << endl;
		}
		else {
			node* current = head;
			int i = 0;
			for (i ; i < size; i++) {
				if (current->playListName == playListName) {
					cout << "Playlist Found" << endl;
					break;
				}
				current = current->next;
			}

			if (i == size) { 
				cout << "Playlist Not Found" << endl;
			}
		}
	}
};