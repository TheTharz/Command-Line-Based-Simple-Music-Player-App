#pragma once
#include <iostream>
#include "LinkedList.h"
#include "PlaylistMenu.h"
#include "StackClass.h"
#include <string>

//declaring functions
int options();
void playListMenu(linkedList player,StackClass RecentPlayList);
int optionsPlayerMenu();
int skipOrprevious();
void PlayerMenu(linkedList player,StackClass RecentPlayList);
void selectAplayList(linkedList player,StackClass RecentPlayList);
int Mainmenu();
void basicMenu(int operation, linkedList player,StackClass RecentPlayList);
void addToRecent(StackClass RecentPlayList, string song);
//void returnSong(linkedList player, string playlist);

void basicMenu(int operation, linkedList player, StackClass RecentPlayist)
{
	system("cls");
	while (operation < 4) {

		if (operation == 1) {
			PlayerMenu(player, RecentPlayist);

		}
		else if (operation == 2) {
			playListMenu(player, RecentPlayist);

		}
		else if (operation == 3) {
			exit(0);
		}
	}
	operation = Mainmenu();
	basicMenu(operation, player, RecentPlayist);
}

int options() {
	//system("Cls");
	cout << "\t\t\t\tPLAYLIST MENU" << endl;
	cout << endl;
	cout << "Please select the operation you want to proceed;" << endl;


	cout << "\t\t\t\t1=Add a new playlist" << endl;
	cout << "\t\t\t\t2=Delete playlist" << endl;
	cout << "\t\t\t\t3=Find playlist" << endl;
	cout << "\t\t\t\t4=View list of playlists" << endl;
	cout << "\t\t\t\t5=Add a song" << endl;
	cout << "\t\t\t\t6=View playlist" << endl;
	cout << "\t\t\t\t7=Delete song" << endl;
	cout << "\t\t\t\t8=Main menu" << endl;
	cout << "\t\t\t\t9=Exit" << endl;


	int select;
	cin >> select;

	return select;

}

void playListMenu(linkedList player,StackClass RecentPlayList)
{
	//system("cls");
	int choice = options();

	while (choice < 10) {

		//cout <<"Size : " << player.size << endl;//wena operation ekak deepu gmn list eka clear wenawa
		//linked list eka aththatama delete wenne na eth size eka zero wena nisa anik operations aul ynwa
		//me error eka haduwa

		if (choice == 1) {
			//code for adding a new playlist

			system("cls");
			string val;
			cin.ignore();
			cout << "Enter the playlist name : ";
			getline(cin, val);

			if (!player.searchBool(val))
			{
				player.insertFirst(val);
				cout << "Playlist was added successfuly" << endl;
			}
			else {
				cout << "The playlist is already added " << endl;
			}
			
			
		}
		else if (choice == 2) {
			//code for deleting a playlist
			system("cls");
			cin.ignore();

			cout << "Available playlists are..." << endl;
			player.print();
			cout << endl;
			string playlistName;
			cout << "Enter the playlist you want to delete : ";
			getline(cin, playlistName);
			int pos = player.returnPos(playlistName);
			player.deleteAt(pos);
		}
		else if (choice == 3) {
			//code for searching through the playlist
			system("cls");

			string element;
			cout << "Enter the playlist name: ";
			cin >> element;

			player.searchString(element);
		}
		else if (choice == 4) {
			//code for printing the playlist
			system("cls");
			cout << "The available playlists are..." << endl;
			player.print();
		}
		else if (choice == 5) {
			//code for inserting a new song
			system("cls");

			cout << "Available playlsist are..." << endl;
			player.print();
			cout << endl;

			cin.ignore();
			string song;
			cout << "Enter the song name : ";
			getline(cin, song);

			//cin.ignore();
			string playlist;
			cout << "Enter the playlist : ";
			getline(cin, playlist);
			
			if (player.searchBool(playlist))
				player.returnNode(playlist)->PlayListWithSongs.insertLast(song);
			else {
				cout << "There is no playlist named " << song << endl;
			}
		}
		else if (choice == 6) {
			//code for viewing songs in playlist
			system("cls");

			cout << "Available playlsist are..." << endl;
			player.print();

			cin.ignore();
			string playlist;
			cout << "Enter the name of playlist : ";
			getline(cin, playlist);

			if (player.searchBool(playlist)){
				cout << "Available songs are..." << endl;
				cout << endl;
				player.returnNode(playlist)->PlayListWithSongs.print();
		}
			else {
				cout << "There is no playlist named " << playlist << endl;
			}
		}
		else if (choice == 7)
		{
			//delete song
			system("cls");

			cout << "Available playlsist are..." << endl;
			player.print();

			cin.ignore();
			string playlist;
			cout << "Enter the name of playlist : ";
			getline(cin, playlist);
			cout << endl;

			if (player.searchBool(playlist))
				player.returnNode(playlist)->PlayListWithSongs.print();
			else {
				cout << "There is no playlist named " << playlist << endl;
			}

			cout << endl;
			//cin.ignore();
			string song;
			cout << "Enter the name of song : ";
			getline(cin, song);

			if (player.searchBool(playlist))
			{
				int pos = player.returnNode(playlist)->PlayListWithSongs.returnDpos(song);
				player.returnNode(playlist)->PlayListWithSongs.deleteAt(pos);
				cout << "Song succesfully deleted" << endl;
			}
			else {
				cout << "There is no playlist named " << playlist << endl;
			}
		}
		else if (choice == 8) {
			system("cls");
			basicMenu(Mainmenu(),player,RecentPlayList);
		}
		else if (choice == 9) {
			exit(0);
		}
		else {
			system("cls");
			cout << "Invalid operation" << endl;
		}
		choice = options();
	}
}

//////////////////////////////////////////////////////////////////////////////////

int Mainmenu() {

	system("cls");

	cout << "\t\t\t\tMUSIC PLAYER WITH PLAYLISTS" << endl;
	cout << "\t\t\t\t---------------------------" << endl;
	cout << "Please select the operation you want to proceed;" << endl;
	cout << endl;

	cout << "\t\t\t\t1=Listen a song" << endl;
	cout << "\t\t\t\t2=Edit your playlists" << endl;
	cout << "\t\t\t\t3=Exit" << endl;

	int selectMain;
	cin >> selectMain;

	return selectMain;
}

int optionsPlayerMenu() {
	system("cls");
	cout << endl;

	cout << "PLAYER MENU" << endl;
	cout << "-----------" << endl;
	cout << endl;

	cout << "Please select the operation you want to proceed;" << endl;

	cout << "\t\t\t\t1=Play a playlist" << endl;
	cout << "\t\t\t\t2=Recent playlist" << endl;
	cout << "\t\t\t\t3=Back to previous menu" << endl;
	
	int selectPlayerMenu;
	cin >> selectPlayerMenu;

	return selectPlayerMenu;
}



//code for selecting a playlist

void selectAplayList(linkedList player,StackClass RecentPlayList) {
	system("cls");
	cin.ignore();
	string select;
	player.print();
	
	cout << endl;
	cout << "------------------------------------" << endl;
	cout << "Select a playlist from above list : ";
	getline(cin, select);

	while (!player.searchBool(select))
	{
		cout << "Invalid choice" << endl;
		player.print();
		cout << endl;
		cout << "------------------------------------" << endl;
		cout << "Select a playlist from above list : ";
		getline(cin, select);
	}

	system("Cls");
	cout << endl;
	string playlist = select;
	cout << playlist << " playlist has following songs" << endl;
	cout << endl;

	cout << "------------------------------------" << endl;
	player.returnNode(playlist)->PlayListWithSongs.print();
	cout << endl;

	string song;
	cout << "Select a song : ";
	getline(cin, song);
	cout << endl;

	while (!player.returnNode(playlist)->PlayListWithSongs.searchBool(song))
	{
		cout << "Please select a valid playlist or check your spellings" << endl;
		player.returnNode(playlist)->PlayListWithSongs.print();
		//cin.ignore();
		cout << "Select a song from above list" << endl;
		getline(cin, song);
	}

	system("cls");

	cout << "Playing " << song << " ..." << endl;

	RecentPlayList.push(song);
	int skip = skipOrprevious();
	system("cls");
	Dnode* current = player.returnNode(playlist)->PlayListWithSongs.returnDNode(song);
	DoublylinkedList playing = player.returnNode(playlist)->PlayListWithSongs;

	while (skip < 4)
	{
		switch (skip) {
		case 1:
			song = playing.playNext(current,playing);
			cout << "Playing " << song << " ...";
			current = playing.returnDNode(song);
			RecentPlayList.push(song);

			break;
		case 2:
			song = playing.playPrevious(current,playing);
			cout << "Playing " << song << " ...";
			RecentPlayList.push(song);
			current = playing.returnDNode(song);
			break;
		case 3:
			PlayerMenu(player, RecentPlayList);
			break;
		default:
			basicMenu(Mainmenu(), player, RecentPlayList);
			break;
		}
		skip = skipOrprevious();
		system("cls");
	}
	//a selected playlist will be returned
}

void PlayerMenu(linkedList player,StackClass RecentPlaylist)
{
	int choicePlayer = optionsPlayerMenu();

	while (choicePlayer < 4) {

		if (choicePlayer == 1) {

			//code for playing a playlist
			selectAplayList(player,RecentPlaylist);
			break;

		}

		else if (choicePlayer == 2) {
			//code for recent playlist
			RecentPlaylist.traverse();
			break;
		}

		else if(choicePlayer == 3){
			//code for previous window
			basicMenu(Mainmenu(), player,RecentPlaylist);
			break;
		}
	}
}


//code for take input for next and previous songs
int skipOrprevious() {
	cout << endl;

	cout << "\t\t\t\t1=Next song" << endl;
	cout << "\t\t\t\t2=Previous song" << endl;
	cout << "\t\t\t\t3=Back to previous menu" << endl;
	cout << "\t\t\t\t4=Back to main menu" << endl;

	int selectSkip;
	cin >> selectSkip;

	return selectSkip;

}

