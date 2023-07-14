#pragma once


#include <iostream>
#include <cstddef>
#include <string>
using namespace std;

class Dnode
{
public:
	string song;
	Dnode* next;
	Dnode* prev;

	Dnode() {
		song = string();
		next = NULL;
		prev = NULL;
	}

	Dnode(string songAdded) {
		song = songAdded;
		next = NULL;
		prev = NULL;
	}
};

class DoublylinkedList {

private:
	Dnode* head;
	Dnode* tail;
	int size;
public:
	DoublylinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	DoublylinkedList(string playlist) {
		head = new Dnode(playlist);
		tail = NULL;
		size = 0;
	}

	void insertFirst(string value) {

		Dnode* temp = new Dnode(value);

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			temp->next = head;
			head->prev = temp;//creating a previous link
			head = temp;
		}
		size++;
	}

	void insertLast(string value) {
		Dnode* temp = new Dnode(value);

		if (head == NULL) {
			head = temp;
			tail = temp;
		}
		else {
			tail->next = temp;
			temp->prev = tail;
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
			Dnode* temp = new Dnode(value);
			Dnode* current = head;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			temp->next = current->next;
			temp->prev = current;
			current->next = temp->prev;
			temp->next->prev = temp;
			current->next = temp;
			size++;
		}

	}

	void deleteFirst() {
		Dnode* temp = head;
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
			head->prev = NULL;
			delete temp;
			size--;
		}

	}

	void deleteLast() {
		if (size == 0) {
			cout << "Empty List" << endl;
		}
		else if (size == 1) {
			Dnode* temp = tail;
			delete temp;
			tail = NULL;
			head = NULL;
			size--;
		}
		else {
			Dnode* temp = tail;
			tail = tail->prev;
			tail = NULL;
			delete temp;
		}
	}

	void deleteAt(int pos) {
		if (pos < 0 || pos >= size) {
			cout << "Invalid Index" << endl;
		}
		else if (pos == 0) {
			deleteFirst();
		}
		else if (pos == size - 1) {
			deleteLast();
		}
		else {
			Dnode* current = head;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			Dnode* temp = current->next;
			current->next = temp->next;
			temp->next->prev = current;
			delete temp;
			size--;
		}
	}

	void print() {
		Dnode* current = head;
		//system("cls");
		//cout << current->value << " ";
		while (current != NULL) {
			cout << current->song ;
			current = current->next;
			cout << endl;
		}
	}

	void search(string value) {
		Dnode* current = head;
		cout << "The index of given element is : ";

		for (int i = 0; i < size; i++) {
			if (current->song == value) {
				cout << i << " ";
			}
			current = current->next;
		}

		cout << endl;
	}

	bool searchBool(string value) {
		Dnode* current = head;

		for (int i = 0; i < size; i++) {
			if (current->song == value) {
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

	Dnode* returnDNode(string value) {
		Dnode* current = head;

		if (searchBool(value)) {
			while (current->song != value)
			{
				current = current->next;
			}
		}
		return current;
	}

	int returnDpos(string value) {
		Dnode* current = head;
		int pos = 0;
		if (searchBool(value)) {
			while (current->song != value)
			{
				pos++;
				current = current->next;
			}
		}
		return pos;
	}

	string playNext(Dnode* current,DoublylinkedList playing)
	{
		//cout << "Playing " << current->next->song << endl;
		if (current == playing.tail)
		{
			current = head;
			return current->song;
		}
		else
		{
			return current->next->song;

		}
	}

	string playPrevious(Dnode* current,DoublylinkedList playing)
	{
		
		if (current == playing.head)
		{
			current = tail;
			return current->song;
		}
		else
		{
			return current->prev->song;

		}
	}


};