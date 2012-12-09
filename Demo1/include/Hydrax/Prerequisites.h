/*
--------------------------------------------------------------------------------
This source file is part of Hydrax.
Visit ---

Copyright (C) 2007 Xavier Vergu�n Gonz�lez <xavierverguin@hotmail.com>
                                           <xavyiy@gmail.com>

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software Foundation, Inc.,
59 Temple Place - Suite 330, Boston, MA  02111-1307, USA, or go to
http://www.gnu.org/copyleft/gpl.html.
--------------------------------------------------------------------------------
*/

#ifndef _Hydrax_Prerequisites_H_
#define _Hydrax_Prerequisites_H_

/// Include external headers
#include <Ogre.h>

/// Define the dll export qualifier if compiling for Windows
#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
#ifdef HYDRAX_LIB
#define DllExport __declspec (dllexport)
#else
#ifdef __MINGW32__
#define DllExport
#else
#define DllExport __declspec (dllimport)
#endif
#endif
#else
#define DllExport
#endif

/// Log macro
#define HydraxLOG(msg) Ogre::LogManager::getSingleton().logMessage("[Hydrax] " + Ogre::String(msg));

/// Hydrax defines
#define HYDRAX_VERSION_MAJOR 0
#define HYDRAX_VERSION_MINOR 2
#define HYDRAX_VERSION_PATCH 0

#define HYDRAX_RESOURCE_GROUP "Hydrax"

#define HYDRAX_IMAGE_CHECK_PIXELS 0 // See Image.cpp, 1 = Check pixels / 0 = No check pixels
                                    // Use it for debug mode

#endif
