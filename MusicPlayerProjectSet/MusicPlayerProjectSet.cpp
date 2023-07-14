#include <iostream>
#include "DoublyLinkedList.h"
#include "LinkedList.h"
#include "PlaylistMenu.h"
#include "PlayerMenu.h"
#include "StackClass.h"

using namespace std;

int main()
{
	linkedList player;
	StackClass RecentPlayList(100);

	player.insertFirst("Mashup");
	player.insertFirst("Spanish");
	player.insertFirst("Arabic");
	player.insertFirst("Hindi");
	player.insertFirst("Tamil");
	player.insertFirst("English");
	player.insertFirst("Sinhala"); 
	player.insertFirst("Default");
	
	player.returnNode("Default")->PlayListWithSongs.insertLast("Despacito");
	player.returnNode("Default")->PlayListWithSongs.insertLast("Ra tharakawo");
	player.returnNode("Default")->PlayListWithSongs.insertLast("Datha dara");
	player.returnNode("Default")->PlayListWithSongs.insertLast("Mage adara landu");
	player.returnNode("Default")->PlayListWithSongs.insertLast("One night in dubai");
	player.returnNode("Default")->PlayListWithSongs.insertLast("Mulawe");
	player.returnNode("Default")->PlayListWithSongs.insertLast("Ran kendiyakin");
	player.returnNode("Default")->PlayListWithSongs.insertLast("Dura akahe");
	player.returnNode("Default")->PlayListWithSongs.insertLast("J town story");
	player.returnNode("Default")->PlayListWithSongs.insertLast("Hitha assata");

	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Hawasaka ma");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Handa allanna asa gamane");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Mana bandu hada randu");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Mandira sadaluthala");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Aduru kutiyathula");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Hama heenema");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Mandaram kathawa");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Ra sihinen");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Liyathabara");
	player.returnNode("Sinhala")->PlayListWithSongs.insertLast("Hemin sare piya wida");

	player.returnNode("English")->PlayListWithSongs.insertLast("See you again");
	player.returnNode("English")->PlayListWithSongs.insertLast("Let me love you");
	player.returnNode("English")->PlayListWithSongs.insertLast("Shape of you");
	player.returnNode("English")->PlayListWithSongs.insertLast("Until i found you");
	player.returnNode("English")->PlayListWithSongs.insertLast("Thank you see what to");
	player.returnNode("English")->PlayListWithSongs.insertLast("Unstoppable");
	player.returnNode("English")->PlayListWithSongs.insertLast("Rockabye");
	player.returnNode("English")->PlayListWithSongs.insertLast("In the end");
	player.returnNode("English")->PlayListWithSongs.insertLast("Pure love");
	player.returnNode("English")->PlayListWithSongs.insertLast("Headlights");

	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Sooniye sun sara");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Badtamezdil");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Kamooshiyaan");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Kacha badam");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Selfie pula");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Halamathi habibo");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Rowdy baby");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Ranjithame");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Buttabomma");
	player.returnNode("Tamil")->PlayListWithSongs.insertLast("Guleba");

	player.returnNode("Hindi")->PlayListWithSongs.insertLast("O jaane jaana");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("Tara rum pum");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("O jaane jaana");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("Milne hai mujhse aayi");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("Tu hi meri shab hai");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("Sanam re");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("O jaane jaana");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("Mitwa");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("Vaseegara");
	player.returnNode("Hindi")->PlayListWithSongs.insertLast("Sunn raha hai na tu");

	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Min awel dekika");
	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Ma baaref");
	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Ser alhayah");
	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Ahebbak");
	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Ya banat");
	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Ensay");
	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Habibi");
	player.returnNode("Arabic")->PlayListWithSongs.insertLast("Ghazali");

	player.returnNode("Spanish")->PlayListWithSongs.insertLast("La gozadera");
	player.returnNode("Spanish")->PlayListWithSongs.insertLast("Simples corazones");
	player.returnNode("Spanish")->PlayListWithSongs.insertLast("Loca");
	player.returnNode("Spanish")->PlayListWithSongs.insertLast("Limbo");
	player.returnNode("Spanish")->PlayListWithSongs.insertLast("Hips dont lie");
	player.returnNode("Spanish")->PlayListWithSongs.insertLast("Calypso");
	player.returnNode("Spanish")->PlayListWithSongs.insertLast("Nota de amor");
	player.returnNode("Spanish")->PlayListWithSongs.insertLast("Gasolina");

	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Arcade X Milne hai mujhse");
	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Infinity X Anbe en anbe");
	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Kadr X Esraworld");
	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Sawaha X Faded");
	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Zindagi ne zindagi X Kabira");
	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Brown munde X Aao sunao pyar ki");
	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Let me down slowly X Allan yanna bari athak");
	player.returnNode("Mashup")->PlayListWithSongs.insertLast("Multilingual");

	int operation = Mainmenu();

	basicMenu(operation, player,RecentPlayList);

}

