/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:11:16 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/08 16:24:40 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {

    private:
        int                 _fpValue;           //convert to fixed_point integer value
        static const int    _fracBits = 8;      //number of fractional bits; always be 8
    public:
        Fixed();                                    //dc: default constructor
        Fixed(const Fixed& original);               //cc: copy constructor
        ~Fixed();                                   //d: destructor
        Fixed& operator=(const Fixed& original);    //ao: assignment operator   
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif //FIXED_HPP
