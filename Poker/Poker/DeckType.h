#pragma once
#include<map>
#include<memory>
#include<string>

struct DeckType
{
	virtual std::shared_ptr<std::map<int, std::string>> GetSuits() = 0;
	virtual std::shared_ptr<std::map<int, std::string>> GetValues() = 0;
	virtual int GetSuitsCount() = 0;
	virtual int GetValuesCount() = 0;
};

class MagyarDeck :public DeckType
{
	const std::map<int, std::string> m_suits{ {1,"Sziv"},{2,"Makk"},{3,"Tok"},{4,"Lapi"} };
	const std::map<int, std::string> m_vals{ { 7,"Het" },{ 8,"Nyolc" },{ 9,"Kilenc" },{ 10,"Tiz" },{2,"Also"},{3,"Felso"},{4,"Kiraly"},{11,"Asz"} };

	virtual std::shared_ptr<std::map<int, std::string>> GetSuits() override
	{
		return std::make_shared<std::map<int, std::string>>(m_suits);
	};
	virtual std::shared_ptr<std::map<int, std::string>> GetValues() override
	{
		return std::make_shared<std::map<int, std::string>>(m_vals);
	};

	int GetSuitsCount() override { return m_suits.size(); }
	int GetValuesCount() override { return m_vals.size(); }
};