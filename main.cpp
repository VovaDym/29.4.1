#include <iostream>
#include <string>
#include <vector>


class Talent
{
public:
	
	virtual void show_talents() = 0;

};

class Swimming : public Talent
{
public:
	void show_talents() override
	{

		std::cout << "            It can \"Swiming\" " << std::endl;
	}
};

class Dancing : public Talent
{
public:
	void show_talents() override
	{
		std::cout  << "            It can \"Dancing\" " << std::endl;
	}
};

class Counting : public Talent
{
public:
	void show_talents() override
	{
		std::cout << "            It can \"Counting\" " << std::endl;
	}
};

class Dog
{
	std::string name;
	std::vector <Talent*> vecTalents;
	
public:
	
	Dog(std::string inName)
	{
		name = inName;
	}

	std::string getName()
	{
		return name;
	}

	std::vector<Talent*> getVector()
	{
		return vecTalents;
	}

	void atTalent(std::string talent)
	{
		
		if (talent == "dancing")
		{
			vecTalents.push_back(new Dancing);
		}
		if (talent == "swimming")
		{
			vecTalents.push_back(new Swimming);
		}
		if (talent == "counting")
		{
			vecTalents.push_back(new Counting);
		}
	}
};

int main()
{
	Dog dog1("Stive");
	dog1.atTalent("dancing");
	dog1.atTalent("counting");
	
	std::cout << "This is " << dog1.getName() << " and it has some talents:" << std::endl;
	for (int i = 0; i < dog1.getVector().size(); ++i)
	{
		dog1.getVector()[i]->show_talents();
	}
}