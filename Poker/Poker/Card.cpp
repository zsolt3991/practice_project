#include "Card.h"

namespace Models {

	Card::Card() :Card(Suit::Clubs, CardValue::Ace)
	{
	}

	Card::Card(Suit a_suit, CardValue a_val) : m_suit(a_suit), m_value(a_val)
	{}

	//I would say that other than init, you shouldn't be able to set values => shouldn't have default () constructor
	void Card::SetSuit(Suit a_suit)
	{
		m_suit = a_suit;
	}

	void Card::SetValue(CardValue a_val)
	{
		m_value = a_val;
	}

	Card::operator std::string() const
	{
		std::stringstream ss;
		ss << "<Card><Suit: " << static_cast<int>(m_suit) << "><Value: " << static_cast<int>(m_value) << ">\n";
		return ss.str();
	}

	Card::~Card()
	{
	}

}