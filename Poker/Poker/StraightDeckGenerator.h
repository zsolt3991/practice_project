#pragma once
#include "IDeckgenerator.h"
#include"DeckType.h"

using namespace Models;

namespace Logic {

	class StraightDeckGenerator :
		public IDeckGenerator
	{
	public:
		StraightDeckGenerator();
		StraightDeckGenerator(DeckType* a_deckType) :m_deckType(a_deckType) {}
		~StraightDeckGenerator();
		void Generate(std::vector<Card>& a_target, int a_count) override;
	private:
		DeckType* m_deckType;
	};
}

