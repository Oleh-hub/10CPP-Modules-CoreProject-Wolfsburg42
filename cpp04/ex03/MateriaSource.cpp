#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _source[i] = NULL;
}

//  copy consturctor. is not finished
MateriaSource::MateriaSource( const MateriaSource &other)
{
    if (this != &other)
        for (int i = 0; i < 4; i++)
            if (other._source[i])
                _source[i] = other._source[i];
            else
                _source[i] = NULL;
}

MateriaSource::~MateriaSource();
{
    for (int i = 0; i < 4; i++)
        if (_source[i])
            delete _source[i];
}
