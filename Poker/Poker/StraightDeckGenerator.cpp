#include "StraightDeckGenerator.h"
#include<iostream>

namespace Logic {

	StraightDeckGenerator::StraightDeckGenerator()
	{
	}


	StraightDeckGenerator::~StraightDeckGenerator()
	{
	}

	void StraightDeckGenerator::Generate(std::vector<Card>& a_target, int a_count)
	{
		for (auto count_generated{ 0u }; count_generated < a_count; count_generated++)
		{
			auto suit = static_cast<Suit>(count_generated/13);
			auto value = static_cast<CardValue>(count_generated % 13);
			auto card = Card(suit, value);
			cout << static_cast<string>(card) << endl;
		}

		return void();
	}
}