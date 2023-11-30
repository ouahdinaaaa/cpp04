/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:56:19 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 22:56:19 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class WrongAnimal
{
    protected :
    std::string     type;

    public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &objet);
    WrongAnimal&    operator=(const WrongAnimal &objet);

    void    makeSound(void) const;

};

#endif