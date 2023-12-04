/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia_source.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:00:12 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 12:00:12 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia_source.hpp"

MateriaSource::MateriaSource()
{
    int i = -1;
    while (++i < 4)
        this->source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    int i = -1;
    while (++i < 4)
        if (this->source[i])
            delete this->source[i];
}

MateriaSource::MateriaSource(const MateriaSource &objs)
{
    int i = -1;
    while (++i < 4){
        if (this->source[i])
            this->source[i] = objs.source[i]->clone();
        else
            this->source[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &objs)
{
    if (this != &objs)
    {
        this->~MateriaSource();
        int i = -1;
        while (++i < 4){
            if (objs.source[i])
                this->source[i] = objs.source[i]->clone();
            else
                this->source[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = -1;
    while (++i < 4){
        if (!this->source[i])
        {
            this->source[i] = m;
            break ;
        }
    }
    if (this->source[0])
        std::cout << this->source[0]->getType() << std::endl;
    if (this->source[1])
        std::cout << this->source[1]->getType() << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    int i = -1;
    while (++i < 4){
        if (this->source[i] != NULL && this->source[i]->getType() == type)
            return (this->source[i]->clone());
    }
    return NULL;
}