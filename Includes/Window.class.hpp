/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:53:45 by adzikovs          #+#    #+#             */
/*   Updated: 2017/11/04 14:53:51 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_CLASS_HPP
#define WINDOW_CLASS_HPP
#include <curses.h>
#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
#define _OK 0
#define EXIT 1
#define FREE 2
#define PLAYER 1
#define BULLET 2
#define ENEMY 3
#define STAR 4

class Ranger;
class Enemy;
class Projectile;

class Window
{
public:
					Window(void);
					Window(Window const &src);
					~Window(void) {}
	Window			&operator=(Window const &src);
	void			setSizes(WINDOW *window);
	bool			checkSizes(void) const;
	bool			checkCrd(int x, int y) const;
	int				loop(void);
	int				proceedInput(Ranger &Gref);
	int				Update(Ranger &Gref, Enemy* &Klissans, Projectile* &Bullets, Enemy* &Background);
	int				Draw(Ranger &Gref, Enemy *Klissans, Projectile *projectiles, Enemy *Background);
	int				getX(void) const;
	int				getY(void) const;
	static int		getKey(void);
	static int		finishFrame(void);
	void			GameOver(void);
	int				score;

private:
	int		x;
	int		y;
	WINDOW	*window;
};

#endif