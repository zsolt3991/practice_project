#include "SimpleDeck.h"

namespace Models {

	SimpleDeck::~SimpleDeck()
	{
	}

	Card SimpleDeck::DrawCard()
	{
		return m_cards[0];
	}

	void SimpleDeck::Generate()
	{
		m_generator->Generate(m_cards, m_size);
	}
}
