//#pragma once
//#include "DoublyLinkedList.h"
//#include "LinkedList.h"
//#include <iostream>
//#include "PlayerMenu.h"
//
//void playListMenu(linkedList player);
//
//int options() {
//	cout << endl;
//	cout << "Please select the operation you want to proceed;" << endl;
//
//	cout << "\t\t\t\t1=Add playlist" << endl;
//	cout << "\t\t\t\t2=Delete playlist" << endl;
//	cout << "\t\t\t\t3=Find playlist" << endl;
//	cout << "\t\t\t\t4=View list of playlists" << endl;
//	cout << "\t\t\t\t5=Add a song" << endl;
//	cout << "\t\t\t\t6=View playlist" << endl;
//	cout << "\t\t\t\t7=Main menu" << endl;
//	cout << "\t\t\t\t8=Exit" << endl;
//
//
//	int select;
//	cin >> select;
//
//	return select;
//
//}
//
//void playListMenu(linkedList player)
//{
//	int choice = options();
//
//	while (choice < 9) {
//
//		//cout <<"Size : " << player.size << endl;//wena operation ekak deepu gmn list eka clear wenawa
//		//linked list eka aththatama delete wenne na eth size eka zero wena nisa anik operations aul ynwa
//		//me error eka haduwa
//
//		if (choice == 1) {
//			//code for adding a playlist
//			string val;
//			cin.ignore();
//			cout << "Enter the playlist name : ";
//			getline(cin, val);
//			player.insertFirst(val);
//
//		}
//		else if (choice == 2) {
//			//code for deleting a playlist
//			cin.ignore();
//
//			string playlistName;
//			cout << "Enter the playlist : ";
//			getline(cin, playlistName);
//			int pos = player.returnPos(playlistName);
//
//			
//			player.deleteAt(pos);
//
//		}
//		else if (choice == 3) {
//			//code for searching through the playlist
//			string element;
//			cout << "Enter the playlist name: ";
//			cin >> element;
//			player.searchString(element);
//
//		}
//		else if (choice == 4) {
//			//code for printing the playlist
//			player.print();
//
//		}
//		else if (choice == 5) {
//			//code for inserting a new song
//			cin.ignore();
//			string song;
//			cout << "Enter the song name : ";
//			getline(cin, song);
//
//			//cin.ignore();
//			string playlist;
//			cout << "Enter the playlist : ";
//			getline(cin, playlist);
//			//mekata if else statement ekak danna
//			if (player.searchBool(playlist))
//				player.returnNode(playlist)->PlayListWithSongs.insertLast(song);
//			else {
//				cout << "There is no playlist" << endl;
//			}
//
//		}
//
//		else if (choice == 6) {
//			//code for viewing songs in playlist
//			cin.ignore();
//			string playlist;
//			cout << "Enter the name of playlist : ";
//			getline(cin, playlist);
//
//			if (player.searchBool(playlist))
//				player.returnNode(playlist)->PlayListWithSongs.print();
//			else {
//				cout << "There is no playlist" << endl;
//			}
//
//		}
//		else if (choice == 7) {
//			Mainmenu();
//		}
//		else if (choice == 8) {
//			exit(0);
//		}
//		else {
//			cout << "Invalid operation" << endl;
//		}
//
//
//		choice = options();
//	}
//}
