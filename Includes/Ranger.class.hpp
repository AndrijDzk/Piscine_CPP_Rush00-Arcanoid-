/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ranger.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:43:57 by adzikovs          #+#    #+#             */
/*   Updated: 2017/11/04 15:43:58 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANGER_CLASS_HPP
#define RANGER_CLASS_HPP
#include "AUnit.class.hpp"

class AUnit;
class Projectile;

class Ranger : public AUnit
{
public:
					Ranger(void);
					Ranger(Ranger const &src);
					Ranger(int x, int y);
					~Ranger(void);
	Ranger			&operator=(Ranger const &src);
	bool			print(void) const;
	bool			setAction(Window const &window, int action);
	int				justDoIT(Window const &window, Projectile **projectiles);
	bool			takeDamage(int damage);
	int				getHP(void) const;
private:
	int				HP;
};
#undef RANGER_COMP
#endif