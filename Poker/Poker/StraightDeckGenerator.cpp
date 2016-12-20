#include "StraightDeckGenerator.h"
#include<iostream>
#include "MapUtils.h"

namespace Logic {

	StraightDeckGenerator::StraightDeckGenerator()
	{
	}


	StraightDeckGenerator::~StraightDeckGenerator()
	{
	}

	void StraightDeckGenerator::Generate(std::vector<Card>& a_target, int a_count)
	{
		auto suits_count{ m_deckType->GetSuitsCount()};
		auto vals_count{ m_deckType->GetValuesCount()};
		auto max_generation = a_count > suits_count*vals_count ? suits_count*vals_count : a_count;
		
		auto suit_Map{ m_deckType->GetSuits() };
		auto value_Map{ m_deckType->GetValues() };

		//	vector<int> v_keys = keys(suit_Map.get());
		
		for (auto count_generated{ 0u }; count_generated < max_generation; count_generated++)
		{
			//auto suit = suit_Map->at(count_generated)+(count_generated / vals_count);
			//auto value = static_cast<int>(count_generated % vals_count);
			//auto card = Card(suit, value,m_deckType);
			//cout << card.toString() << endl;
		}

		return void();
	}
}