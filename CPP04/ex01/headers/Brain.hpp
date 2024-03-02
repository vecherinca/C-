
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"

class Brain
{
  private:
	std::string ideas[100];

  public:
	Brain(void);
	~Brain(void);
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
    const std::string& getIdea(int index) const ;
    void _setIdea(int index, const std::string& idea);
};

#endif // BRAIN_HPP
