#include "Card.h"
#include "StraightDeckGenerator.h"
#include "SimpleDeck.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Models;
using namespace Logic;

int main()
{
	auto card = Card();
	cout << static_cast<string>(card);
	auto generator = StraightDeckGenerator();
	auto deck = SimpleDeck{ &generator,52 };
	deck.Generate();
	getchar();
}