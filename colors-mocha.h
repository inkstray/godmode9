#pragma once

#define RGB(r,g,b) \
	(((u32)(r) >> 3) << 11 | \
	((u32)(g) >> 2) << 5 | \
	((u32)(b) >> 3))

// a base set of colors below
// everything marked with a ? im unsure whether to use a specific color
#define COLOR_BLACK         RGB(0x18, 0x18, 0x25) // Mantle
#define COLOR_WHITE         RGB(0xCD, 0xD6, 0xF4) // Text 
#define COLOR_GREY          RGB(0x58, 0x5B, 0x70) // Surface2

#define COLOR_RED           RGB(0xF3, 0x8B, 0xA8) // Red
#define COLOR_GREEN         RGB(0xA6, 0xE3, 0xA1) // Green
#define COLOR_BLUE          RGB(0x89, 0xB4, 0xFA) // Blue
#define COLOR_YELLOW        RGB(0xF9, 0xE2, 0xAF) // Yellow
#define COLOR_CYAN          RGB(0x94, 0xE2, 0xD5) // Teal
#define COLOR_ORANGE        RGB(0xFA, 0xB3, 0x87) // Peach

#define COLOR_BRIGHTRED     RGB(0xF3, 0x8B, 0xA8) // Red
#define COLOR_DARKRED       RGB(0xEB, 0x8B, 0xA8) // Maroon
#define COLOR_BRIGHTYELLOW  RGB(0xF9, 0xE2, 0xAF) // Yellow
#define COLOR_BRIGHTGREEN   RGB(0xA6, 0xE3, 0xA1) // Green
#define COLOR_BRIGHTBLUE    RGB(0x89, 0xB4, 0xFA) // Blue

#define COLOR_TINTEDBLUE    RGB(0xB4, 0xBE, 0xFE) // Lavender
#define COLOR_TINTEDYELLOW  RGB(0xF9, 0xE2, 0xAF) // Yellow
#define COLOR_TINTEDGREEN   RGB(0xA6, 0xE3, 0xA1) // Green
#define COLOR_LIGHTGREY     RGB(0x6C, 0x70, 0x86) // overlay0
#define COLOR_LIGHTERGREY   RGB(0x93, 0x99, 0xB2) // overlay2
#define COLOR_DARKGREY      RGB(0x45, 0x47, 0x5A) // surface1
#define COLOR_DARKESTGREY   RGB(0x31, 0x32, 0x44) // Surface0
#define COLOR_SUPERFUCHSIA  RGB(0xCB, 0xA6, 0xF7) // Mauve

// standard colors - used everywhere
#ifndef COLOR_STD_BG
#define COLOR_STD_BG        RGB(0x1E, 0x1E, 0x2E) // Base
#endif
#ifndef COLOR_STD_FONT
#define COLOR_STD_FONT      RGB(0xCD, 0xD6, 0xF4) // Text
#endif

// colors for GodMode9 file browser
#define COLOR_SIDE_BAR      RGB(0x11, 0x11, 0x1b) // Crust
#define COLOR_MARKED        COLOR_TINTEDYELLOW // yellow
#define COLOR_FILE          COLOR_TINTEDGREEN // green
#define COLOR_DIR           RGB(0x89, 0xB4, 0xFA) // Blue
#define COLOR_ROOT          RGB(0xA6, 0xAD, 0xC8) // Subtext0
#define COLOR_ENTRY(e)  (((e)->marked) ? COLOR_MARKED : ((e)->type == T_DIR) ? COLOR_DIR : ((e)->type == T_FILE) ? COLOR_FILE : ((e)->type == T_ROOT) ?  COLOR_ROOT : COLOR_GREY)

// hex viewer colors
#define COLOR_HVOFFS        RGB(0xA6, 0xAD, 0xC8) // subtext0
#define COLOR_HVOFFSI       RGB(0x7E, 0x84, 0x9C) // Overlay1
#define COLOR_HVASCII       RGB(0xBA, 0xC2, 0xDE) // subtext1
#define COLOR_HVHEX(i)      ((i % 2) ? RGB(0xCD, 0xD6, 0xF4) : RGB(0xBA, 0xC2, 0xDE))

// text viewer / script viewer colors
#define COLOR_TVOFFS        RGB(0x40, 0x40, 0x40)
#define COLOR_TVOFFSL       RGB(0x30, 0x30, 0x30)
#define COLOR_TVTEXT        RGB(0xA0, 0xA0, 0xA0)
#define COLOR_TVRUN         RGB(0xF3, 0x8B, 0xA8) // Red
#define COLOR_TVCMT         RGB(0x60, 0x60, 0x70)
#define COLOR_TVCMD         RGB(0xA0, 0xA0, 0xA0)

// battery symbol colors
#define COLOR_BATTERY_CHARGING  RGB(0x74, 0xC7, 0xEC) // Sapphire
#define COLOR_BATTERY_FULL      RGB(0xA6, 0xE3, 0xA1) // Green
#define COLOR_BATTERY_MEDIUM    RGB(0xFA, 0xB3, 0x87) // Peach
#define COLOR_BATTERY_LOW       RGB(0xEB, 0xA0, 0xAC) // Maroon
