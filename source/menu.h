/****************************************************************************
 * libwiigui Template
 * Tantric 2009
 *
 * menu.h
 * Menu flow routines - handles all menu logic
 ***************************************************************************/

#ifndef _MENU_H_
#define _MENU_H_

#include <ogcsys.h>

#ifdef __cplusplus
//extern "C"
//{
#endif
void InitGUIThreads(void);
void ExitGUIThreads(void);
#ifdef __cplusplus
//}
#endif

int MainMenu (int menuitem);
void wiilight(int enable);
int GameSettings(struct discHdr *);
enum
{
	MENU_EXIT = -1,
	MENU_NONE,
	MENU_SETTINGS,
	MENU_DISCLIST,
	MENU_FORMAT,
	MENU_INSTALL,
	MENU_CHECK,
	MENU_GAME_SETTINGS,
	MENU_OGG
};

#endif