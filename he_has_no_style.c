#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
//check the size of the array
#define NOELMS(X) (sizeof(X) / sizeof(X[0]))
//why doesn't c have bools :angery:
typedef int bool;
#define true 1
#define false 0

char* dkArray[] = {"so", "theyre", "finally", "here", "and", "about", "time", "too",
"if", "you", "know", "the", "words", "you", "can", "be", "so", "dank",
"put", "your", "hands", "together", "if", "you", "want", "to", "pee",
"as", "we", "take", "you", "through", "this", "carl", "wheezer",

"hes", "the", "leader", "of", "the", "bunch", "you", "know", "him", "well",
"hes", "finally", "back", "to", "make", "a", "sparta", "remix",
"his", "coconut", "gun", "can", "fire", "in", "spurts",
"if", "he", "shoots", "ya", "so", "lou", "gubrious",
"hes", "bigger", "faster", "and", "much", "more", "gay",
"hes", "the", "lastest", "member", "of", "the", "dick", "crew",

"this", "kong", "is", "gay", "and", "voiced", "by", "dee", "bradley", "baker",
"she", "can", "do", "deep", "voices", "like", "maddie", "blaustien",
"shes", "gay", "and", "racist", "when", "she", "needs", "to", "poo",
"she", "can", "float", "with", "ball", "gown", "and", "climb", "up", "mountians",
"if", "you", "choose", "her", "youll", "not", "choose", "him",
"with", "a", "skip", "and", "a", "clip", "shes", "one", "cool", "man",

"he", "is", "super", "sad", "he", "his", "super", "depressed",
"this", "kong", "has", "the", "saddest", "face",
"he", "can", "handstand", "when", "he", "needs", "to", "die",
"and", "stretch", "his", "ass", "out", "just", "like", "joe",
"inflate", "himself", "just", "like", "a", "blimp",
"this", "crazy", "kong", "just", "poops", "on", "you",

"hes", "back", "again", "and", "about", "time", "dies",
"and", "this", "time", "he", "bounces", "with", "his", "tail",
"he", "can", "fly", "real", "high", "with", "his", "air", "plane",
"with", "his", "pistols", "out", "hes", "one", "dank", "kong",
"hell", "make", "you", "frown", "when", "he", "plays", "his", "balls",
"but", "kremlings", "beware", "cause", "hes", "very", "fat",

"finally", "hes", "here", "for", "us",
"its", "the", "last", "member", "of", "the", "dic", "fan", "club",
"this", "kongs", "so", "fat", "it", "is", "funny", "as", "fuck",
"can", "make", "a", "kremling", "cry", "a", "big", "river",
"can", "pick", "up", "a", "boulder", "with", "jim", "cummings",
"makes", "crushing", "rocks", "seem", "such", "a", "freeze",
"he", "may", "move", "slow", "he", "cant", "jump", "ever",
"but", "this", "kongs", "one", "fuck", "of", "a", "guy",

"cmon", "cranky", "take", "it", "to", "the", "max",

"walnuts", "peanuts", "pineapple", "smells",
"grapes", "melons", "oranges", "and", "crotch", "shots",
"ahh", "shir"};

//Dynamic size of the array in C ;_;
int sizeOfDKArray = NOELMS(dkArray);

//Skips in the code
bool everySecond = false;
bool skip = false;
bool skipALot = false;

//Basically a number used for accessing wordNumberDependencies[] 
int globalCounter = 0;

//I think I counted the amount of words in every line xD
int wordNumberDependencies[] = {7, 9, 9, 8,
                10, 7, 7, 7, 6, 8,
                8, 9, 9, 10, 8, 10,
                8, 6, 7, 8, 6, 7,
                7, 7, 9, 8, 9, 7,
                5, 8, 7, 8, 8, 7, 8, 8,
                7,
                4, 6, 2
};

//Defining function in advance
void printVerses(int sizeOfVerse);

void printRap() {
	//Picking a random seed
	srand(time(NULL));
	//Legit part of the song
	printVerses(4);
	printVerses(6);
	printVerses(6);
	printVerses(6);
	//Okay stairs start up here
	printVerses(6);
	printf("Huh!\n");
	skip=true;
	printVerses(8);
	//Aaand the final part
	printVerses(1);
	printf("\n");
	printVerses(3);
	globalCounter-=3;
	printf("\n");
	printVerses(3);
}
void printVerses(int sizeOfVerse) {
	for (int i=0; i<sizeOfVerse; i++) {
		for (int j=0; j<wordNumberDependencies[globalCounter]; j++) {
			//Just print j random words
			printf("%s ", dkArray[rand()%(sizeOfDKArray)]);
		}
		//Advance counter of lines and print new line
		globalCounter++;
		printf("\n");
	}
	
	//SHIT
	if(!skipALot) printf("Huh!\n\n");

	//KD! Konkey Dong!
	if(!skip) {
		char* word1 = dkArray[rand()%(sizeOfDKArray)];
		char* word2 = dkArray[rand()%(sizeOfDKArray)];
		printf("%c%c! %s %s!\n", toupper(word1[0]), toupper(word2[0]), word1, word2);
		
		//DK! Donkey Kong is gay!
		if(everySecond==false) everySecond=true;
		else {
			printf("%c%c! %s %s is here!\n", toupper(word1[0]), toupper(word2[0]), word1, word2);
			everySecond=false;
		}
		
		//And a New Line
		printf("\n");
	//That just determines the flow that if the flag skip is toggled, in the next iteration it skipsALot too xD
	} else skipALot=true;
}

int main() {
	//woop woop
	printRap();
}

