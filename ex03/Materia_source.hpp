/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia_source.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:25:30 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 18:54:23 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
#include "Materia.hpp"


class IMateriaSource : public 
{
    private :
    AMateria    *source[4];
    
    public:
    
    IMateriaSource();
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif