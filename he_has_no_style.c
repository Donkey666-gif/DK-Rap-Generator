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

char* dkArray[] = {"so", "theyre", "finally", "here", "and", "about", "time", "too"
"if", "you", "know", "the", "words", "you", "can", "be", "gay", "too",
"put", "your", "hands", "together", "if", "you", "want", "to", "die",
"as", "we", "take", "you", "through", "this", "janice", "kawaye",

"hes", "the", "leader", "of", "the", "hundreds", "we", "know", "him", "well",
"hes", "finally", "back", "to", "kick", "some", "ass",
"so", "lou", "gubrious", "can", "cry", "a", "sea",
"if", "he", "shoots", "ya", "its", "gonna", "rock",
"hes", "bigger", "faster", "and", "racist", "too",
"hes", "the", "first", "member", "of", "this", "youtube", "poop",

"this", "girl", "is", "cute", "so", "listen", "up", "dudes",
"she", "is", "voiced", "by", "dee", "bradley", "baker", "bro", "together",
"shes", "quick", "and", "nimble", "when", "she", "needs", "to", "pee",
"she", "can", "float", "through", "the", "air", "and", "climb", "up", "dededes",
"if", "you", "choose", "her", "youll", "not", "choose", "fong",
"with", "a", "skip", "and", "a", "hop", "shes", "one", "doctor", "wong",

"he", "is", "so", "sad", "he", "has", "no", "friends",
"this", "kong", "has", "the", "funniest", "face",
"he", "can", "handstand", "in", "the", "swimming", "pool",
"and", "stretch", "his", "arms", "out", "just", "for", "us",
"inflate", "himself", "just", "like", "dedede",
"this", "crazy", "kong", "just", "digs", "this", "day",

"hes", "back", "again", "and", "about", "time", "yo",
"and", "this", "time", "he", "bounced", "with", "his", "tail",
"he", "can", "fly", "real", "high", "with", "his", "toilet", "on",
"with", "his", "guns", "out", "hes", "one", "gay", "simp",
"hell", "make", "you", "smile", "when", "he", "plays", "his", "rasist",
"but", "kremlings", "beware", "cause", "hes", "dead",

"finally", "hes", "back", "for", "you",
"chunky", "kong", "is", "back", "after", "a", "twenty", "one", "year", "absence",
"this", "kongs", "so", "obese", "it", "is", "the", "funniest",
"can", "make", "a", "kremling", "poop",
"can", "pick", "up", "three", "boulders", "with", "his", "pinky",
"makes", "crushing", "rocks", "seem", "such", "a", "freeze",
"he", "moves", "fast", "he", "can", "jump", "high",
"but", "this", "kongs", "one", "fuck", "of", "a", "guy",

"cmon", "cranky", "take", "it", "to", "the", "max",

"eggs", "fall", "guys", "memes", "poop",
"grapes", "men", "chris", "and", "crotch", "shots",
"ahh", "shit"};

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
	
	//YO
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

