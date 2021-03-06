#pragma once
#include "Card.h"
#include "IDeckgenerator.h"
#include <vector>

using namespace Logic;

namespace Models 
{
	class BaseDeck
	{
	public:
		BaseDeck(IDeckGenerator a_generator,int a_size):m_generator(a_generator),m_size(a_size){};
		virtual Card DrawCard() = 0;
		virtual int GetSize() { return m_size; }
		virtual void SetSize(int a_size) { m_size= a_size ; }
		virtual void Generate() {}
	protected:
		std::vector<Card> m_cards;
		IDeckGenerator m_generator;
		int m_size;
	};
}