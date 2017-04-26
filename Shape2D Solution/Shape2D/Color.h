#pragma once
#include <string>

class Color
{
public:
	// -- RGB A Constructor -- //
	Color(unsigned char red, unsigned char green, unsigned char blue,
		unsigned char alpha = 255);

	// -- HEX value constructor -- //
	Color(unsigned int RGBA, unsigned char alpha = 255);

	// -- Set the current OpenGL color to be this color -- //
	void tellOpenGL() const;

	// --  Getters for the different components of the color -- //
	unsigned char Color::getRed() const
	{
		return vals[0];
	}
	unsigned char Color::getGreen() const
	{
		return vals[1];
	}
	unsigned char Color::getBlue() const
	{
		return vals[2];
	}
	unsigned char Color::getAlpha() const
	{
		return vals[3];
	}

	// -- Function to achieve gradual color animation -- //
	void colorAnimation(int R, int G, int B, int rate);

	// -- Sets the current color -- //
	void setColor(int R, int G, int B);

protected:
	unsigned char vals[4];
	void gammaEncode();
};

// Helpful HEX color values defined for web use.
// Use these like this: Color(COLOR_WHITE)
// (source: http://www.w3schools.com/colors/colors_hex.asp)
#define COLOR_BLACK 				(0x000000)
#define COLOR_NAVY 					(0x000080)
#define COLOR_DARKBLUE 				(0x00008B)
#define COLOR_MEDIUMBLUE 			(0x0000CD)
#define COLOR_BLUE 					(0x0000FF)
#define COLOR_DARKGREEN 			(0x006400)
#define COLOR_GREEN 				(0x008000)
#define COLOR_TEAL 					(0x008080)
#define COLOR_DARKCYAN 				(0x008B8B)
#define COLOR_DEEPSKYBLUE 			(0x00BFFF)
#define COLOR_DARKTURQUOISE			(0x00CED1)
#define COLOR_MEDIUMSPRINGGREEN 	(0x00FA9A)
#define COLOR_LIME 					(0x00FF00)
#define COLOR_SPRINGGREEN 			(0x00FF7F)
#define COLOR_AQUA 					(0x00FFFF)
#define COLOR_CYAN 					(0x00FFFF)
#define COLOR_MIDNIGHTBLUE 			(0x191970)
#define COLOR_DODGERBLUE 			(0x1E90FF)
#define COLOR_LIGHTSEAGREEN 		(0x20B2AA)
#define COLOR_FORESTGREEN 			(0x228B22)
#define COLOR_SEAGREEN 				(0x2E8B57)
#define COLOR_DARKSLATEGRAY 		(0x2F4F4F)
#define COLOR_DARKSLATEGREY 		(0x2F4F4F)
#define COLOR_LIMEGREEN 			(0x32CD32)
#define COLOR_MEDIUMSEAGREEN 		(0x3CB371)
#define COLOR_TURQUOISE 			(0x40E0D0)
#define COLOR_ROYALBLUE				(0x4169E1)
#define COLOR_STEELBLUE				(0x4682B4)
#define COLOR_DARKSLATEBLUE 		(0x483D8B)
#define COLOR_MEDIUMTURQUOISE		(0x48D1CC)
#define COLOR_INDIGO				(0x4B0082)
#define COLOR_DARKOLIVEGREEN		(0x556B2F)
#define COLOR_CADETBLUE				(0x5F9EA0)
#define COLOR_CORNFLOWERBLUE		(0x6495ED)
#define COLOR_REBECCAPURPLE 		(0x663399)
#define COLOR_MEDIUMAQUAMARINE	 	(0x66CDAA)
#define COLOR_DIMGRAY 				(0x696969)
#define COLOR_DIMGREY 				(0x696969)
#define COLOR_SLATEBLUE				(0x6A5ACD)
#define COLOR_OLIVEDRAB				(0x6B8E23)
#define COLOR_SLATEGRAY				(0x708090)
#define COLOR_SLATEGREY 			(0x708090)
#define COLOR_LIGHTSLATEGRAY 		(0x778899)
#define COLOR_LIGHTSLATEGREY 		(0x778899)
#define COLOR_MEDIUMSLATEBLUE 		(0x7B68EE)
#define COLOR_LAWNGREEN 			(0x7CFC00)
#define COLOR_CHARTREUSE 			(0x7FFF00)
#define COLOR_AQUAMARINE 			(0x7FFFD4)
#define COLOR_MAROON 				(0x800000)
#define COLOR_PURPLE 				(0x800080)
#define COLOR_OLIVE 				(0x808000)
#define COLOR_GRAY 					(0x808080)
#define COLOR_GREY 					(0x808080)
#define COLOR_SKYBLUE 				(0x87CEEB)
#define COLOR_LIGHTSKYBLUE 			(0x87CEFA)
#define COLOR_BLUEVIOLET 			(0x8A2BE2)
#define COLOR_DARKRED 				(0x8B0000)
#define COLOR_DARKMAGENTA 			(0x8B008B)
#define COLOR_SADDLEBROWN 			(0x8B4513)
#define COLOR_DARKSEAGREEN 			(0x8FBC8F)
#define COLOR_LIGHTGREEN 			(0x90EE90)
#define COLOR_MEDIUMPURPLE 			(0x9370DB)
#define COLOR_DARKVIOLET 			(0x9400D3)
#define COLOR_PALEGREEN 			(0x98FB98)
#define COLOR_DARKORCHID 			(0x9932CC)
#define COLOR_YELLOWGREEN 			(0x9ACD32)
#define COLOR_SIENNA 				(0xA0522D)
#define COLOR_BROWN 				(0xA52A2A)
#define COLOR_DARKGRAY 				(0xA9A9A9)
#define COLOR_DARKGREY 				(0xA9A9A9)
#define COLOR_LIGHTBLUE 			(0xADD8E6)
#define COLOR_GREENYELLOW 			(0xADFF2F)
#define COLOR_PALETURQUOISE 		(0xAFEEEE)
#define COLOR_LIGHTSTEELBLUE 		(0xB0C4DE)
#define COLOR_POWDERBLUE 			(0xB0E0E6)
#define COLOR_FIREBRICK 			(0xB22222)
#define COLOR_DARKGOLDENROD 		(0xB8860B)
#define COLOR_MEDIUMORCHID 			(0xBA55D3)
#define COLOR_ROSYBROWN 			(0xBC8F8F)
#define COLOR_DARKKHAKI 			(0xBDB76B)
#define COLOR_SILVER 				(0xC0C0C0)
#define COLOR_MEDIUMVIOLETRED 		(0xC71585)
#define COLOR_INDIANRED  			(0xCD5C5C)
#define COLOR_PERU					(0xCD853F)
#define COLOR_CHOCOLATE 			(0xD2691E)
#define COLOR_TAN 					(0xD2B48C)
#define COLOR_LIGHTGRAY 			(0xD3D3D3)
#define COLOR_LIGHTGREY 			(0xD3D3D3)
#define COLOR_THISTLE 				(0xD8BFD8)
#define COLOR_ORCHID 				(0xDA70D6)
#define COLOR_GOLDENROD 			(0xDAA520)
#define COLOR_PALEVIOLETRED 		(0xDB7093)
#define COLOR_CRIMSON 				(0xDC143C)
#define COLOR_GAINSBORO 			(0xDCDCDC)
#define COLOR_PLUM 					(0xDDA0DD)
#define COLOR_BURLYWOOD 			(0xDEB887)
#define COLOR_LIGHTCYAN 			(0xE0FFFF)
#define COLOR_LAVENDER 				(0xE6E6FA)
#define COLOR_DARKSALMON 			(0xE9967A)
#define COLOR_VIOLET 				(0xEE82EE)
#define COLOR_PALEGOLDENROD 		(0xEEE8AA)
#define COLOR_LIGHTCORAL 			(0xF08080)
#define COLOR_KHAKI 				(0xF0E68C)
#define COLOR_ALICEBLUE 			(0xF0F8FF)
#define COLOR_HONEYDEW 				(0xF0FFF0)
#define COLOR_AZURE 				(0xF0FFFF)
#define COLOR_SANDYBROWN 			(0xF4A460)
#define COLOR_WHEAT 				(0xF5DEB3)
#define COLOR_BEIGE 				(0xF5F5DC)
#define COLOR_WHITESMOKE 			(0xF5F5F5)
#define COLOR_MINTCREAM 			(0xF5FFFA)
#define COLOR_GHOSTWHITE 			(0xF8F8FF)
#define COLOR_SALMON 				(0xFA8072)
#define COLOR_ANTIQUEWHITE			(0xFAEBD7)
#define COLOR_LINEN 				(0xFAF0E6)
#define COLOR_LIGHTGOLDENRODYELLOW 	(0xFAFAD2)
#define COLOR_OLDLACE 				(0xFDF5E6)
#define COLOR_RED 					(0xFF0000)
#define COLOR_FUCHSIA 				(0xFF00FF)
#define COLOR_MAGENTA 				(0xFF00FF)
#define COLOR_DEEPPINK 				(0xFF1493)
#define COLOR_ORANGERED 			(0xFF4500)
#define COLOR_TOMATO 				(0xFF6347)
#define COLOR_HOTPINK 				(0xFF69B4)
#define COLOR_CORAL 				(0xFF7F50)
#define COLOR_DARKORANGE 			(0xFF8C00)
#define COLOR_LIGHTSALMON 			(0xFFA07A)
#define COLOR_ORANGE 				(0xFFA500)
#define COLOR_LIGHTPINK 			(0xFFB6C1)
#define COLOR_PINK 					(0xFFC0CB)
#define COLOR_GOLD 					(0xFFD700)
#define COLOR_PEACHPUFF 			(0xFFDAB9)
#define COLOR_NAVAJOWHITE 			(0xFFDEAD)
#define COLOR_MOCCASIN 				(0xFFE4B5)
#define COLOR_BISQUE 				(0xFFE4C4)
#define COLOR_MISTYROSE 			(0xFFE4E1)
#define COLOR_BLANCHEDALMOND 		(0xFFEBCD)
#define COLOR_PAPAYAWHIP 			(0xFFEFD5)
#define COLOR_LAVENDERBLUSH 		(0xFFF0F5)
#define COLOR_SEASHELL 				(0xFFF5EE)
#define COLOR_CORNSILK 				(0xFFF8DC)
#define COLOR_LEMONCHIFFON 			(0xFFFACD)
#define COLOR_FLORALWHITE 			(0xFFFAF0)
#define COLOR_SNOW 					(0xFFFAFA)
#define COLOR_YELLOW 				(0xFFFF00)
#define COLOR_LIGHTYELLOW 			(0xFFFFE0)
#define COLOR_IVORY 				(0xFFFFF0)
#define COLOR_WHITE 				(0xFFFFFF)