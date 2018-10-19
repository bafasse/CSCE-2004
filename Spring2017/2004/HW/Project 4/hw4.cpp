// hw4.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
//------------------------------------------------------------
// Purpose: Program to simulate the classic 1970s adventure game.
//          Rooms in the maze are described by separate functions.
//          The user finds gold/food as they travel, fights a
//          variety of creatures, and eventually finds the exit.
//
// Authors: John Gauch, Blake Fasse
//------------------------------------------------------------

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

// Food constants
const int CANDY = 0;
const int STEAK = 1;
const int POTION = 2;
const int CANDY_RESTORE = 10;
const int STEAK_RESTORE = 20;
const int POTION_RESTORE = 40;

// Creature constants
const int BUNNY = 0;
const int DWARF = 1;
const int TROLL = 2;
const int BUNNY_DAMAGE = 5;
const int DWARF_DAMAGE = 10;
const int TROLL_DAMAGE = 20;

// Other constants
const int TUITION = 50;
const int BEER = 10;

// Function prototypes
int FindTreasure(const int max_gold);
void EatFood(const int food, int &health);
int FightBattle(const int creature);
char GetDirection();
void Exit(int &gold, int &health);
void StartingPoint(int &gold, int &health);
void ThroneRoom(int &gold, int &health);
void pub(int &gold, int &health);
void StorageRoom(int &gold, int &health);
void BedRoom(int &gold, int &health);
void Room6(int &gold, int &health);
void Room7(int &gold, int &health);
void MemorialRoom(int &gold, int &health);



//------------------------------------------------------------
// Purpose: To calculate how much treasure is found
// Input:   Maximum amount of gold possible
// Output:  Actual amount of gold found
//------------------------------------------------------------
int FindTreasure(const int max_gold)
{
	int gold = 1 + rand() % max_gold;
	if (gold < max_gold / 2)
		cout << "\nYou find " << gold << " gold pieces on the floor.\n";
	else
		cout << "\nYou find a huge mound of " << gold << " gold pieces!\n";
	return gold;
}

//------------------------------------------------------------
// Purpose: To eating food item to restore health.
// Input:   Food item number between [0..2]
// Output:  Health value after eating food.
//------------------------------------------------------------
void EatFood(const int food, int & health)
{
	switch (food)
	{
	case CANDY:
		health = health + CANDY_RESTORE;
		cout << "\nYou find a half eaten energy bar on the floor "
			<< "which restores your health by " << CANDY_RESTORE << endl;
		break;
	case STEAK:
		health = health + STEAK_RESTORE;
		cout << "\nYou find a warm and jucy steak on the table "
			<< "which restores your health by " << STEAK_RESTORE << endl;
		break;
	case POTION:
		health = health + POTION_RESTORE;
		cout << "\nYou find a green glowing potion on a shelf "
			<< "which restores your health by " << POTION_RESTORE << endl;
		break;
	default:
		cout << "\nYour stomach is rumbling, but there is nothing to eat\n";
		break;
	}

	// Check maximum value for health
	if (health > 100)
		health = 100;
}

//------------------------------------------------------------
// Purpose: To simulate battle with a creature
// Input:   Creature number between [0..3]
// Output:  Amount of damage done to your health.
//------------------------------------------------------------
int FightBattle(const int creature)
{
	int damage = 0;
	switch (creature)
	{
	case BUNNY:
		damage = 1 + rand() % BUNNY_DAMAGE;
		cout << "\nYou trip over a cute bunny and do "
			<< damage << " damage to your health.\n";
		break;
	case DWARF:
		damage = 1 + rand() % DWARF_DAMAGE;
		cout << "\nA drunken dwarf hits you with a beer mug and does "
			<< damage << " damage to your health.\n";
		break;
	case TROLL:
		damage = 1 + rand() % TROLL_DAMAGE;
		cout << "\nAn angry troll kicks you in the rear and does "
			<< damage << " damage to your health.\n";
		break;
	default:
		cout << "\nIt is ghostly quiet here, you must be alone\n";
		break;
	}
	return damage;
}

//------------------------------------------------------------
// Purpose: To get direction from user
// Input:   None
// Output:  Character code for N,S,E,W direction
//------------------------------------------------------------
char GetDirection()
{
	cout << "\nWhat direction would you like to go (W,A,S,D): ";
	char direction;
	cin >> direction;
	direction = toupper(direction);
	while ((direction != 'W' && direction != 'w') && (direction != 'A' && direction != 'a') &&
		(direction != 'S' && direction != 's') && (direction != 'D' && direction != 'd'))
	{
		cout << "Sorry, You can not go that way...\n";
		cout << "What direction would you like to go (W,A,S,D): ";
		cin >> direction;
		direction = toupper(direction);
	}
	return direction;
}

//------------------------------------------------------------
// Purpose: To find the cave exit
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void Exit(int &gold, int &health)
{
	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou crawl out of the cave and blink your eyes to\n";
	cout << "adjust to the bright sunshine. Congratulations,\n";
	cout << "you made it out of the cave with " << health << " health!\n";

	if (gold >= TUITION)
	{
		cout << "\nYou empty your pockets and discover " << gold + FindTreasure(gold) << " gold coins.\n";
		cout << "This will pay for tuition next semester!!!\n";
	}
	else if (gold >= BEER)
	{
		cout << "\nYou notice that you have " << gold + FindTreasure(gold) << " gold coins in your pocket.\n";
		cout << "This will pay for beer and pizza next semester!!!\n";
	}
	else
	{
		cout << "\nYou check your pocket and find " << gold + FindTreasure(gold) << " gold coins.\n";
		cout << "Exploring caves sure is a hard way to make money!!!\n";
	}

	// Leave program
	exit(0);
}

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void StartingPoint(int &gold, int &health)
{
	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou just stumbled into a hole in the ground. When you\n";
	cout << "shake off the dirt and leaves you realize you are in\n";
	cout << "the entrance to a cave that looks man made. As you\n";
	cout << "take a look around, you decide it might be fun to explore.\n";

	// ADD CODE HERE
	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void ThroneRoom(int &gold, int &health)
{
	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou have entered the throne room. In the middle\n";
	cout << "of the room there is a giant wooden throne with\n";
	cout << "intricate carvings. As you take a closer look at the\n";
	cout << "carvings, you see that they show trolls chasing humans.\n";
	cout << "Hmmm, maybe this is not a great place to stop for a rest.\n";

	// ADD CODE HERE
	GetDirection();

	if (GetDirection() == 'W' && GetDirection() == 'w')
		Exit(gold, health);
	else if (GetDirection() == 'A' && GetDirection() == 'a')
		StorageRoom(gold, health);
	else if (GetDirection() == 'S' && GetDirection() == 's')
		BedRoom(gold, health);
	else if (GetDirection() == 'D' && GetDirection() == 'd')
		pub(gold, health);

	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void pub(int &gold, int &health)
{
	char move;

	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou have entered an abandoned pub. There are piles\n";
	cout << "of dirty dishes and empty beer mugs all over the place.\n";
	cout << "You hear someone coming and duck behind a table to hide.\n";
	cout << "Would you like to go up, down, left, or right? (WASD):";
	cin >> move;
	move = toupper(move);

	//While loop will only work for first attempt then registers every input as false (FIXED)
	while (move != 'W' && move != 'w' && move != 'A' && move != 'a' && move != 'S' && move != 's' && move != 'D' && move != 'd') {
		cout << "That is not a movement key. Try again.\n";
		cout << "Would you like to go up, down, left, or right? (WASD):";
		cin >> move;
	}

	if (move == 'W')
		ThroneRoom(gold, health);
	else if (move == 'A')
		MemorialRoom(gold, health);
	else if (move == 'S')
		StorageRoom(gold, health);
	else if (move == 'D')
		pub(gold, health);

	// ADD CODE HERE
	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void StorageRoom(int &gold, int &health)
{
	char move;

	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou have entered a huge storage room filled with empty boxes.\n";
	cout << "Looking at the side of one box, you see 'ACME troll food'.\n";
	cout << "You better get out of here before you end up on the menu.\n";
	cout << "Would you like to go up, down, left, or right? (WASD):";
	cin >> move;
	move = toupper(move);

	//While loop will only work for first attempt then registers every input as false (FIXED)
	while (move != 'W' && move != 'w' && move != 'A' && move != 'a' && move != 'S' && move != 's' && move != 'D' && move != 'd') {
		cout << "That is not a movement key. Try again.\n";
		cout << "Would you like to go up, down, left, or right? (WASD):";
		cin >> move;
	}

	if (move == 'W')
		pub(gold, health);
	else if (move == 'A')
		StorageRoom(gold, health);
	else if (move == 'S')
		BedRoom(gold, health);
	else if (move == 'D')
		Room7(gold, health);
	

	// ADD CODE HERE
	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}

// ADD MORE FUNCTIONS HERE

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void BedRoom(int &gold, int &health)
{
	char treasure;

	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou have entered the bed room. Along the wall\n";
	cout << "is giant king sized bed with very nice sheets on it \n";
	cout << "however the sheets do look like they haven't been washed\n";
	cout << "in a very long time. You feel tired and wish to lay of the bed.\n";

	// ADD CODE HERE
	cout << "There appears to be a treasure chest next to the bed.\n";
	cout << "Would you like to open it? (Y/N): ";
	cin >> treasure;

	while (treasure != 'Y' && treasure != 'y' && treasure != 'N' && treasure != 'n') {
		cout << "That is not a valid input. Please Try Again.\n";
		cout << "There appears to be a treasure chest next to the bed.\n";
		cout << "Would you like to open it? (Y/N): ";
		cin >> treasure;
	}

	if (treasure == 'Y' && treasure == 'y')
		FindTreasure(5);
	else if (treasure != 'N' && treasure == 'n')
		cout << "You chose to ignore the treasure and move on.\n";

	GetDirection();


	if (GetDirection() == 'W' && GetDirection() == 'w')
		StorageRoom(gold, health);
	else if (GetDirection() == 'A' && GetDirection() == 'D' && GetDirection() == 'a' && GetDirection() == 'd')
		BedRoom(gold, health);
	else if (GetDirection() == 'S' && GetDirection() == 's')
		ThroneRoom(gold, health);

	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void Room6(int &gold, int &health)
{
	char move;

	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou have entered the throne room. In the middle\n";
	cout << "of the room there is a giant wooden throne with\n";
	cout << "intricate carvings. As you take a closer look at the\n";
	cout << "carvings, you see that they show trolls chasing humans.\n";
	cout << "Hmmm, maybe this is not a great place to stop for a rest.\n";
	cout << "Would you like to go up, down, left, or right? (WASD):";
	cin >> move;
	move = toupper(move);

	//While loop will only work for first attempt then registers every input as false (FIXED)
	while (move != 'W' && move != 'w' && move != 'A' && move != 'a' && move != 'S' && move != 's' && move != 'D' && move != 'd') {
		cout << "That is not a movement key. Try again.\n";
		cout << "Would you like to go up, down, left, or right? (WASD):";
		cin >> move;
	}

	if (move == 'W')
		Exit(gold, health);
	else if (move == 'A')
		StorageRoom(gold, health);
	else if (move == 'S')
		pub(gold, health);
	else if (move == 'D')
		ThroneRoom(gold, health);

	// ADD CODE HERE
	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void Room7(int &gold, int &health)
{
	char move;

	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou have entered the throne room. In the middle\n";
	cout << "of the room there is a giant wooden throne with\n";
	cout << "intricate carvings. As you take a closer look at the\n";
	cout << "carvings, you see that they show trolls chasing humans.\n";
	cout << "Hmmm, maybe this is not a great place to stop for a rest.\n";
	cout << "Would you like to go up, down, left, or right? (WASD):";
	cin >> move;
	move = toupper(move);

	//While loop will only work for first attempt then registers every input as false (FIXED)
	while (move != 'W' && move != 'w' && move != 'A' && move != 'a' && move != 'S' && move != 's' && move != 'D' && move != 'd') {
		cout << "That is not a movement key. Try again.\n";
		cout << "Would you like to go up, down, left, or right? (WASD):";
		cin >> move;
	}

	if (move == 'W')
		Exit(gold, health);
	else if (move == 'A')
		StorageRoom(gold, health);
	else if (move == 'S')
		pub(gold, health);
	else if (move == 'D')
		ThroneRoom(gold, health);

	// ADD CODE HERE
	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}

//------------------------------------------------------------
// Purpose: To visit a room in the cave
// Input:   The gold and health variables
// Output:  None
//------------------------------------------------------------
void MemorialRoom(int &gold, int &health)
{
	char move;

	cout << "\n------------------------------------------------------------\n";
	cout << "\nYou have entered what appears to be a memorial room.\n";
	cout << "Every inch of the wall is covered in pictures of kings\n";
	cout << "long past. You get the feeling that walls have eyes\n";
	cout << "Hmmm, maybe this is not a great place to stop for a rest.\n";
	cout << "Would you like to go up, down, left, or right? (WASD):";
	cin >> move;
	move = toupper(move);

	//While loop will only work for first attempt then registers every input as false (FIXED)
	while (move != 'W' && move != 'w' && move != 'A' && move != 'a' && move != 'S' && move != 's' && move != 'D' && move != 'd') {
		cout << "That is not a movement key. Try again.\n";
		cout << "Would you like to go up, down, left, or right? (WASD):";
		cin >> move;
	}

	if (move == 'W')
		Exit(gold, health);
	else if (move == 'A')
		StorageRoom(gold, health);
	else if (move == 'S')
		pub(gold, health);
	else if (move == 'D')
		ThroneRoom(gold, health);

	// ADD CODE HERE
	cout << "\nHealth: " << health << " Gold: " << gold << endl;
}


//------------------------------------------------------------
// Purpose: The main program
// Input:   None
// Output:  None
//------------------------------------------------------------
int main()
{
	// Initialize game
	int gold = 0;
	int health = 100;
	//char move;
	srand(time(NULL));

	// Test the room functions
	StartingPoint(gold, health);
	ThroneRoom(gold, health);
	//pub(gold, health);
	//StorageRoom(gold, health);
	BedRoom(gold, health);
	Room6(gold, health);
	Room7(gold, health);
	MemorialRoom(gold, health);

	// ADD CODE HERE

	// Exit the maze
	Exit(gold, health);
	return 0;
}

