
#include "../headers/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "🧠 Out of nowhere braaaaain has appeared! PADUMS🧠 " << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "No more brain. Full chaos now!🤯" << std::endl;
}

Brain::Brain(const Brain &cls)
{
	std::cout << "Copy of the Brain Called" << std::endl;
	*this = cls;
}

Brain &Brain::operator=(const Brain &cls)
{
	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &cls)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = cls.ideas[i];
		}
	}
	return (*this);
}
const std::string &Brain::getIdea(int index) const
{
	static const std::string empty = ""; // Used for out-of-bounds access
	if (index >= 0 && index < 100)
	{
		return (ideas[index]);
	}
	else
	{
		return (empty);
	}
}

void Brain::_setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
	{
		ideas[index] = idea;
	}
}