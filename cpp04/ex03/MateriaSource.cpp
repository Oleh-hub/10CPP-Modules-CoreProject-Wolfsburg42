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
/* 
learnMateria() attempts to add a new AMateria to the _sources array
 by finding an empty slot, cloning the materia, and storing the clone. If 
the array is full, it deletes the materia and prints an error message.
NOTE - always delete -s the object m became as the parameter ! 
 */
void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] == NULL)
		{
			_source[i] = m->clone();
			std::cout << "The Materia " << m->getType() << " was learned into _source[" << i << "]" << std::endl;
			delete m;
			return;
		}
	}
	std::cout << "The Materia" << m->getType() << " WAS NOT learned because of _source space leckerge" << std::endl;
	delete m;
}

//  under construction. finished.
 /* function searches the _source array for an AMateria object that matches the specified type. 
 If it finds a match, it returns a new instance of that AMateria by cloning it. 
 If no match is found, it returns NULL. */

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
		{
			std::cout << "Materia " << RED << type << RESET  << " was created " << i << std::endl;
			return _source[i]->clone();
		}
	}
	std::cout << "_source[4] " << "is full, could not add Materia " << RED << type << RESET << std::endl;
	return NULL;
}
