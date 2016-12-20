#include "Card.h"
#include "StraightDeckGenerator.h"
#include "SimpleDeck.h"
#include "DeckType.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Models;
using namespace Logic;

int main()
{
	auto deckType = MagyarDeck();
//  auto card = Card(1,8,&deckType);
//	cout << card.toString()<<endl;
	auto generator = StraightDeckGenerator(&deckType);
	auto deck = SimpleDeck{ &generator,52 };
	deck.Generate();
	for (Card c : deck.GetCards())
	{
		cout << c.toString() << endl;
	}
	getchar();
}