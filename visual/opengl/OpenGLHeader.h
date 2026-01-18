
#pragma once

#ifndef OpenGLHeaderH
#define OpenGLHeaderH

#if 0

#if (defined(KRKRZ_ENABLE_CANVAS) && defined(TVP_COMPILING_KRKRSDL2)) || (defined(WIN32) && !defined(TVP_COMPILING_KRKRSDL2))
#ifdef __EMSCRIPTEN__
#include <EGL/egl.h>
#include <GLES3/gl31.h>
#elif defined(TVP_COMPILING_KRKRSDL2)
#include "OpenGLHeaderSDL2.h"
#else
#ifdef WIN32
#include "OpenGLHeaderWin32.h"
#elif defined( ANDROID )
#include <android/native_window.h>
#include <EGL/egl.h>
#include <GLES/gl.h>
#include "gl3stub.h"
#endif
#endif


extern void TVPInitializeOpenGLPlatform();
#endif


TJS_EXP_FUNC_DEF(void*, TVPeglGetProcAddress, (const char * procname));

#endif

#ifdef __EMSCRIPTEN__
#include <SDL3/SDL.h>
#include <SDL3/SDL_opengles2.h>
#else
#include <glad/glad.h>
#define GL_BGRA_EXT 0x80E1
#define GL_BGRA8_EXT 0x93A1
#endif


#define TVPeglGetProcAddress SDL_GL_GetProcAddress

#endif
