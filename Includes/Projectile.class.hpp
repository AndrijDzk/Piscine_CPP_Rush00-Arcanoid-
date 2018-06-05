/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:10:33 by adzikovs          #+#    #+#             */
/*   Updated: 2017/11/05 15:10:35 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_CLASS_HPP
#define PROJECTILE_CLASS_HPP
#include "AUnit.class.hpp"

class Enemy;

class Projectile: public AUnit
{
public:
							Projectile(void);
							Projectile(Projectile const &src);
							Projectile(Projectile **begin, int x, int y);
	virtual					~Projectile(void);
	Projectile				&operator=(Projectile const &src);
	bool					print(void) const;
	static bool				print(Projectile *projectiles);
	bool					setAction(int Action);
	static Projectile*		del(Projectile **bull);
	bool					checkCollision(Enemy* &enemy, int &score);
	Projectile*				&getNext(void);

protected:
	Projectile				*prev;
	Projectile				*next;
};

#endif