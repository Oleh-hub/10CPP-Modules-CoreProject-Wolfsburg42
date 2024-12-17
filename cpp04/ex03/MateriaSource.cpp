#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

//  copy consturctor
MateriaSource::MateriaSource( const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
		if (other._source[i])
			_source[i] = other._source[i]->clone();
		else
			_source[i] = NULL;
}

/* // assignment operator=
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_source[i])
				delete _source[i];
			_source[i] = NULL;
			if (other._source[i])
				_source[i] = other._source[i]->clone();
			else
				_source[i] = NULL;
		}
	}
	return *this;
} */

// assignment operator=
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        // First, delete the current resources
        for (int i = 0; i < 4; i++)
        {
            if (_source[i])
            {
                delete _source[i];
                _source[i] = NULL; // Set to NULL to avoid dangling pointers
            }
        }
        // Then, copy the resources from the other object
        for (int i = 0; i < 4; i++)
        {
            if (other._source[i])
                _source[i] = other._source[i]->clone();
            else
                _source[i] = NULL; // Set to NULL if other._source[i] is NULL
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_source[i])
			delete _source[i];
}

// under construction
void learnMateria(AMateria*)
{

}

//  under construction
AMateria* createMateria(std::string const & type)
{

}