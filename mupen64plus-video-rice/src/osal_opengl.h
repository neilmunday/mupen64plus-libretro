/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *   Mupen64plus - osal_opengl.h                                           *
 *   Mupen64Plus homepage: http://code.google.com/p/mupen64plus/           *
 *   Copyright (C) 2013 Richard Goedeken                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#if !defined(OSAL_OPENGL_H)
#define OSAL_OPENGL_H

#include <SDL_config.h>
#include <SDL_opengles2.h>

#ifdef GLES

#define GLSL_VERSION "100"
// Constant substitutions
#define GL_CLAMP                            GL_CLAMP_TO_EDGE
#define GL_MAX_TEXTURE_UNITS_ARB            GL_MAX_TEXTURE_IMAGE_UNITS
#define GL_MIRRORED_REPEAT_ARB              GL_MIRRORED_REPEAT
#define GL_TEXTURE0_ARB                     GL_TEXTURE0
#define GL_TEXTURE1_ARB                     GL_TEXTURE1
#define GL_TEXTURE2_ARB                     GL_TEXTURE2
#define GL_TEXTURE3_ARB                     GL_TEXTURE3
#define GL_TEXTURE4_ARB                     GL_TEXTURE4
#define GL_TEXTURE5_ARB                     GL_TEXTURE5
#define GL_TEXTURE6_ARB                     GL_TEXTURE6
#define GL_TEXTURE7_ARB                     GL_TEXTURE7

#define GL_ADD                              0x0104
#define GL_MODULATE                         0x2100
#define GL_INTERPOLATE_ARB                  0x8575
#define GL_CONSTANT_ARB                     0x8576
#define GL_PREVIOUS_ARB                     0x8578

#else
#define GLSL_VERSION "120"
#endif

// Vertex shader params
#define VS_POSITION                         0
#define VS_COLOR                            1
#define VS_TEXCOORD0                        2
#define VS_TEXCOORD1                        3

#endif // OSAL_OPENGL_H
