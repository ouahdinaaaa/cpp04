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

IMateriaSource::IMateriaSource()
{
    int i = -1;
    while (++i < 4)
        source[i] = nullptr;
}

IMateriaSource::~IMateriaSource()
{
    int i = -1;
    while (++i < 4)
        delete source[i];
}

void IMateriaSource::learnMateria(AMateria *m)
{
    int i = -1;
    while (++i < 4){
        if (this->source[i] == nullptr){
            this->source[i] = m->clone();
            return;
        }
    }
}

AMateria *IMateriaSource::createMateria(const std::string &type)
{
    int i = -1;
    while (++i < 4){
        if (this->source[i] != nullptr && this->source[i]->getType() == type)
            return (this->source[i]->clone());
    }
    return nullptr;
}