/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AUnit.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:01:23 by adzikovs          #+#    #+#             */
/*   Updated: 2017/11/04 16:01:25 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUNIT_CLASS_HPP
#define AUNIT_CLASS_HPP
#include <curses.h>

class Window;

class AUnit
{
public:
					AUnit(void);
					AUnit(AUnit const &src);
					AUnit(int x, int y);
					~AUnit(void);
	AUnit			&operator=(AUnit const &src);
	bool			mv(Window const &window, int dir);
	bool			mv(Window const &window, int x, int y);
	virtual bool	print(void) const = 0;
	int				getX(void) const;
	int				getY(void) const;
	int				getAction(void) const;

protected:
	int			x;
	int			y;
	int			symb;
	int			action;
};

#endif