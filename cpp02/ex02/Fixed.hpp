/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:11:16 by louismdv          #+#    #+#             */
/*   Updated: 2024/10/14 11:32:23 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {

	private:
		int                 _fpValue;					//convert to fixed point value
		static const int    _pointPos;			  		//store the number of fractional bits. value always be the integer literal 8.
	public:
		Fixed( void );									//dc: default constructor: creates a class struct
		Fixed(const float toFixed);						//sc: secondary constructor: converts float value to fixed-point value
        Fixed(const int toFixed);		
        Fixed(const Fixed& original);					//cc: copy constructor:  creates a copy of class struct of the passed class struct
		~Fixed();										//d: destructor
		Fixed& operator=(const Fixed& original);		//ao: assignment operator
		int				getRawBits( void ) const;       //returns _fpValue
		void			setRawBits( int const raw );    //sets _fpValue
		int				toInt( void ) const;            //that converts the fixed-point value to an integer value
		float			toFloat( void ) const;          //that converts the fixed-point value to a floating-point value
		
	//comparison fn
	    static const    Fixed&	min(const Fixed &a, const Fixed &b);
	    static          Fixed&	min(Fixed &a, Fixed &b);
	    static const    Fixed&	max(const Fixed &a, const Fixed &b);
	    static          Fixed&	max(Fixed &a, Fixed &b);

	//operators
		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		int operator+(const Fixed &other) const;
		int operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
        Fixed &operator++();       // Pre-increment
        Fixed operator++(int);     // Post-increment
        Fixed &operator--();       // Pre-decrement
        Fixed operator--(int);     // Post-decrement
};

	std::ostream & operator<<(std::ostream &os,const Fixed & fixed);

#endif //FIXED_HPP
