/*
 * fprint_demo: Demonstration of libfprint's capabilities
 * Copyright (C) 2007 Daniel Drake <dsd@gentoo.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __FPRINT_DEMO_H__
#define __FPRINT_DEMO_H__

/* main.c */
extern struct fp_dev *fpdev;
extern GtkWidget *mwin_window;

/* tabs */
struct fpd_tab {
	const char *name;
	GtkWidget *(*create)(void);
	void (*activate_dev)(void);
	void (*clear)(void);
	void (*exit)(void);
};

extern struct fpd_tab enroll_tab;
extern struct fpd_tab verify_tab;
extern struct fpd_tab img_tab;

#endif