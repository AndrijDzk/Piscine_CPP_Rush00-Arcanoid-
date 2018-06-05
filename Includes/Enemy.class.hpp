/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 17:57:25 by adzikovs          #+#    #+#             */
/*   Updated: 2017/11/04 17:57:29 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP
#include "AUnit.class.hpp"
#include <iostream>

class Window;

class Enemy : public AUnit
{
public:
					Enemy(void);
					Enemy(Enemy const &src);
					Enemy(Window const &window, Enemy **begin, int y);
					Enemy(Window const &window, Enemy **begin);
	virtual			~Enemy(void);
	Enemy			&operator=(Enemy const &src);
	bool			print(void) const;
	static bool		print(Enemy *enemies);
	static Enemy*	del(Enemy **enemy);
	bool			checkCollision(AUnit const &Gref);
	Enemy*			&getNext(void);

protected:
	Enemy		*next;
	Enemy		*prev;
};

#endif