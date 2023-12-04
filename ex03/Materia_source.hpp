/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia_source.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:25:30 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 15:09:33 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
#include "Materia.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private :
    AMateria    *source[4];
    
    public:
    
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &objs);
    MateriaSource   &operator=(const MateriaSource &objs);
    
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};

#endif