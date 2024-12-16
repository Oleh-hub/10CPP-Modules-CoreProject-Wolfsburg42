#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_source[4];

    public:
        MateriaSource();
        MateriaSource( const MateriaSource &other);
        ~MateriaSource();
};
#endif  //MATERIASOURCE_HPP