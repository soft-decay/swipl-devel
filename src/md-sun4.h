/*  $Id$

    Copyright (c) 1990 Jan Wielemaker. All rights reserved.
    See ../LICENCE to find out about your rights.
    jan@swi.psy.uva.nl

    Purpose: Machine description for SUN-4 (SPARC)
*/

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Note: when using gcc, make sure you have patched the SUN include files
using the shell script fixincludes  provided with gcc.   If you don't,
the terminal interface does not operate properly.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


#define M_CC			gcc
/*#define M_OPTIMIZE		-g -DO_DEBUG*/
#define M_OPTIMIZE	        -O2
/*#define M_OPTIMIZE	        -O -finline-functions*/
#define M_LDFLAGS		-static
#define M_CFLAGS		-Wall
#define M_LIBS			-lm -ltermcap

			/* compiler */
#define ANSI			__GNUC__
#define O_NO_LEFT_CAST		0
#define O_NO_VOID_POINTER	0
#define O_SHORT_SYMBOLS		0
			/* Operating system */
#define O_PROFILE		1
#define O_SIG_AUTO_RESET	0
#define O_SHARED_MEMORY		0
#define O_CAN_MAP		1

#define O_NO_SEGV_ADDRESS	0
#define MAX_VIRTUAL_ADDRESS	(512 * 1024 *1024)
#define O_FOREIGN		1
#define O_SAVE			1
#define DEFAULT_PATH		":.:/usr/ucb:/bin:/usr/bin:";

			/* terminal driver */
#define O_TERMIOS 		1
#define O_EXTEND_ATOMS 		1
#define O_LINE_EDIT 		1
#define O_MAP_TAB_ON_ESC	1
#define O_FOLD 			0
			/* Interfaces */
#define O_PCE 			1

#define MACHINE			"sun4"
#define OPERATING_SYSTEM	"sunos"
