#include "Card.h"
#include <memory>
#include <map>

namespace Models {


	std::string Card::toString()
	{
		std::stringstream ss;
		ss << "<Card><Suit: " << m_deckType->GetSuits()->at(m_suit) << "><Value: " << m_deckType->GetValues()->at(m_value) << ">" << endl;
		return ss.str();
	}

	Card::Card(int a_suit, int a_value, DeckType * a_type):m_suit(a_suit), m_value(a_value), m_deckType(a_type)
	{
	}

	Card::~Card()
	{
	}
}