#ifndef AGE_COLOR_H
#define AGE_COLOR_H
#include <QGLFunctions>
namespace AGE2D {
class AColor : public QGLFunctions
{
public:
    AColor(){}
    GLfloat red,green,blue;
    AColor(GLfloat r,GLfloat g,GLfloat b)
        :red(r),green(g),blue(b){}
    void setColor(float r,float g,float b)
    {
        red = r;green = g;blue = b;
    }
};

#define PI 3.1415926535898
#define ARGB(r,g,b) ((UINT32)((BYTE)(r)|((BYTE)(g) << 8)|((BYTE)(b) << 16)))
#define AGE_GetRValue(rgb)      ((rgb))
#define AGE_GetGValue(rgb)      ((rgb) >> 8)
#define AGE_GetBValue(rgb)      ((rgb)>>16)

#define AGE_RGB_PINK ARGB(255,192,203) //(粉红)
#define AGE_RGB_CRIMSON ARGB(220,20,60) //(腥红)
#define AGE_RGB_lavenderblush ARGB(255,240,245) //(苍白的紫罗兰红)
#define AGE_RGB_PALEVIOLETRED ARGB(219,112,147) //(脸红的淡紫红)
#define AGE_RGB_HOTPINK ARGB(255,105,180) //(热情的粉红)
#define AGE_RGB_mediumvioletred ARGB(199,21,133) //(适中的紫罗兰红)
#define AGE_RGB_ORCHID ARGB(218,112,214) //(兰花紫)
#define AGE_RGB_THISTLE ARGB(216,191,216) //(苍紫)
#define AGE_RGB_PLUM ARGB(221,160,221) //(轻紫)
#define AGE_RGB_VIOLET ARGB(238,130,238) //(紫罗兰)
#define AGE_RGB_MAGENTA ARGB(255,0,255) //(洋紫)
#define AGE_RGB_FUCHSIA ARGB(255,0,255) //(紫红)
#define AGE_RGB_DARKMAGENTA ARGB(139,0,139) //(深洋紫)
#define AGE_RGB_PURPLE ARGB(128,0,128) //(紫)
#define AGE_RGB_MEDIUMORCHID ARGB(186,85,211) //(适中的兰花紫)
#define AGE_RGB_DARKVIOLET ARGB(148,0,211) //(深紫罗兰)
#define AGE_RGB_INDIGO ARGB(75,0,130) //(靓青)
#define AGE_RGB_BLUEVIOLET ARGB(138,43,226) //(蓝紫罗兰)
#define AGE_RGB_MEDIUMPURPLE ARGB(147,112,219) //(适中的紫)
#define AGE_RGB_mediumslateblue ARGB(123,104,238) //(适中的的板岩蓝)
#define AGE_RGB_SLATEBLUE ARGB(106,90,205) //(板岩蓝)
#define AGE_RGB_DARKSLATEBLUE ARGB(72,61,139) //(深板岩蓝)
#define AGE_RGB_lavender ARGB(230,230,250) //(熏衣草花的淡紫)
#define AGE_RGB_GHOSTWHITE ARGB(248,248,255) //(幽灵白)
#define AGE_RGB_BLUE ARGB(0,0,255) //(蓝)
#define AGE_RGB_MEDIUMBLUE ARGB(0,0,205) //(适中的蓝)
#define AGE_RGB_MIDNIGHTBLUE ARGB(25,25,112) //(午夜蓝)
#define AGE_RGB_DARKBLUE ARGB(0,0,139) //(深蓝)
#define AGE_RGB_NAVY ARGB(0,0,128) //(海军蓝)
#define AGE_RGB_ROYALBLUE ARGB(65,105,225) //(皇家蓝)
#define AGE_RGB_CORNFLOWERBLUE ARGB(100,149,237) //(矢车菊蓝)
#define AGE_RGB_LIGHTSTEELBLUE ARGB(176,196,222) //(淡钢蓝)
#define AGE_RGB_LIGHTSLATEGRAY ARGB(119,136,153) //(浅石板灰)
#define AGE_RGB_SLATEGRAY ARGB(112,128,144) //(石板灰)
#define AGE_RGB_DODGERBLUE ARGB(30,144,255) //(道奇蓝)
#define AGE_RGB_ALICEBLUE ARGB(240,248,255) //(爱丽丝蓝)
#define AGE_RGB_STEELBLUE ARGB(70,130,180) //(钢蓝)
#define AGE_RGB_LIGHTSKYBLUE ARGB(135,206,250) //(淡天蓝)
#define AGE_RGB_SKYBLUE ARGB(135,206,235) //(天蓝)
#define AGE_RGB_DEEPSKYBLUE ARGB(0,191,255) //(深天蓝)
#define AGE_RGB_LIGHTBLUE ARGB(173,216,230) //(淡蓝)
#define AGE_RGB_POWDERBLUE ARGB(176,224,230) //(火药蓝)
#define AGE_RGB_CADETBLUE ARGB(95,158,160) //(军校蓝)
#define AGE_RGB_AZURE ARGB(240,255,255) //(蔚蓝)
#define AGE_RGB_LIGHTCYAN ARGB(224,255,255) //(淡青)
#define AGE_RGB_PALETURQUOISE ARGB(175,238,238) //(苍白的宝石绿)
#define AGE_RGB_CYAN ARGB(0,255,255) //(青)
#define AGE_RGB_AQUA ARGB(0,255,255) //(水绿)
#define AGE_RGB_DARKTURQUOISE ARGB(0,206,209) //(深宝石绿)
#define AGE_RGB_DARKSLATEGRAY ARGB(47,79,79) //(深石板灰)
#define AGE_RGB_DARKCYAN ARGB(0,139,139) //(深青色)
#define AGE_RGB_TEAL ARGB(0,128,128) //(水鸭色)
#define AGE_RGB_MEDIUMTURQUOISE ARGB(72,209,204) //(适中的宝石绿)
#define AGE_RGB_LIGHTSEAGREEN ARGB(32,178,170) //(浅海洋绿)
#define AGE_RGB_TURQUOISE ARGB(64,224,208) //(宝石绿)
#define AGE_RGB_AQUAMARINE ARGB(127,255,212) //(碧绿)
#define AGE_RGB_MEDIUMAQUAMARINE ARGB(102,205,170)  //(适中的碧绿)
#define AGE_RGB_MEDIUMSPRINGGREEN ARGB(0,250,154) //(适中的春天绿)
#define AGE_RGB_MINTCREAM ARGB(245,255,250) //(薄荷奶油)
#define AGE_RGB_SPRINGGREEN ARGB(0,255,127) //(春天绿)
#define AGE_RGB_MEDIUMSEAGREEN ARGB(60,179,113) //(适中的海洋绿)
#define AGE_RGB_SEAGREEN ARGB(46,139,87) //(海洋绿)
#define AGE_RGB_HONEYDEW ARGB(240,255,240) //(浅粉红)
#define AGE_RGB_LIGHTGREEN ARGB(144,238,144) //(浅绿)
#define AGE_RGB_PALEGREEN ARGB(152,251,152) //(苍白绿)
#define AGE_RGB_DARKSEAGREEN ARGB(143,188,143) //(深海洋绿)
#define AGE_RGB_LIMEGREEN ARGB(50,205,50) //(柠檬绿)
#define AGE_RGB_LIME ARGB(0,255,0) //(柠檬)
#define AGE_RGB_FORESTGREEN ARGB(34,139,34) //(森林绿)
#define AGE_RGB_CHARTREUSE ARGB(127,255,0) //(查特酒绿)
#define AGE_RGB_LAWNGREEN ARGB(124,252,0) //(草坪绿)
#define AGE_RGB_GREENYELLOW ARGB(173,255,47) //(绿黄)
#define AGE_RGB_DARKOLIVEGREEN ARGB(85,107,47) //(深橄榄绿)
#define AGE_RGB_YELLOWGREEN ARGB(154,205,50) //(黄绿)
#define AGE_RGB_OLIVEDRAB ARGB(107,142,35) //(橄榄褐)
#define AGE_RGB_BEIGE ARGB(245,245,220) //(米色)
#define AGE_RGB_LIGHTGOLDENRODYELLOW ARGB(250,250,210)//(浅秋黄)
#define AGE_RGB_IVORY ARGB(255,255,240) //(象牙白)
#define AGE_RGB_LIGHTYELLOW ARGB(255,255,224) //(浅黄)
#define AGE_RGB_YELLOW ARGB(255,255,0) //(黄)
#define AGE_RGB_OLIVE ARGB(128,128,0) //(橄榄)
#define AGE_RGB_DARKKHAKI ARGB(189,183,107) //(深卡其布)
#define AGE_RGB_LEMONCHIFFON ARGB(255,250,205) //(柠檬沙)
#define AGE_RGB_PALEGOLDENROD ARGB(238,232,170) //(灰秋)
#define AGE_RGB_KHAKI ARGB(240,230,140) //(卡其布)
#define AGE_RGB_GOLD ARGB(255,215,0) //(金)
#define AGE_RGB_CORNSILK ARGB(255,248,220) //(玉米)
#define AGE_RGB_GOLDENROD ARGB(218,165,32) //(秋)
#define AGE_RGB_DARKGOLDENROD ARGB(184,134,11) //(深秋)
#define AGE_RGB_FLORALWHITE ARGB(255,250,240) //(白花)
#define AGE_RGB_OLDLACE ARGB(253,245,230) //(浅米色)
#define AGE_RGB_WHEAT ARGB(245,222,179) //(小麦)
#define AGE_RGB_MOCCASIN ARGB(255,228,181) //(鹿皮)
#define AGE_RGB_ORANGE ARGB(255,165,0) //(橙)
#define AGE_RGB_PAPAYAWHIP ARGB(255,239,213) //(木瓜)
#define AGE_RGB_BLANCHEDALMOND ARGB(255,235,205) //(漂白后的杏仁)
#define AGE_RGB_NAVAJOWHITE ARGB(255,222,173) //(耐而节白)
#define AGE_RGB_ANTIQUEWHITE ARGB(250,235,215) //(古白)
#define AGE_RGB_TAN ARGB(210,180,140) //(晒)
#define AGE_RGB_BURLYWOOD ARGB(222,184,135) //(树干)
#define AGE_RGB_BISQUE ARGB(255,228,196) //(乳脂)
#define AGE_RGB_DARKORANGE ARGB(255,140,0) //(深橙色)
#define AGE_RGB_LINEN ARGB(250,240,230) //(亚麻)
#define AGE_RGB_PERU ARGB(205,133,63) //(秘鲁)
#define AGE_RGB_SANDYBROWN ARGB(244,164,96) //(沙棕)
#define AGE_RGB_CHOCOLATE ARGB(210,105,30) //(巧克力)
#define AGE_RGB_CHOCOLATESADDLEBROWN rown ARGB(192,14,235) //(马鞍棕)
#define AGE_RGB_SEASHELL ARGB(255,245,238) //(海贝)
#define AGE_RGB_SIENNA ARGB(160,82,45) //(土黄赭)
#define AGE_RGB_LIGHTSALMON ARGB(255,160,122) //(浅肉)
#define AGE_RGB_CORAL ARGB(255,127,80) //(珊瑚)
#define AGE_RGB_ORANGERED ARGB(255,69,0) //(橙红)
#define AGE_RGB_TOMATO ARGB(255,99,71) //(番茄色)
#define AGE_RGB_MISTYROSE ARGB(255,228,225) //(雾中玫瑰)
#define AGE_RGB_SALMON ARGB(250,128,114) //(肉)
#define AGE_RGB_SNOW ARGB(255,250,250) //(雪)
#define AGE_RGB_LIGHTCORAL ARGB(240,128,128) //(浅珊瑚)
#define AGE_RGB_ROSYBROWN ARGB(188,143,143) //(玫瑰棕)
#define AGE_RGB_INDIANRED ARGB(205,92,92) //(浅粉红)
#define AGE_RGB_RED ARGB(255,0,0) //(红)
#define AGE_RGB_BROWN ARGB(165,42,42) //(棕)
#define AGE_RGB_FIREBRICK ARGB(178,34,34) //(火砖)
#define AGE_RGB_DARKRED ARGB(139,0,0) //(深红)
#define AGE_RGB_MAROON ARGB(128,0,0) //(粟色)
#define AGE_RGB_WHITE ARGB(255,255,255) //(白)
#define AGE_RGB_WHITESMOKE ARGB(245,245,245) //(烟白)
#define AGE_RGB_GAINSBORO ARGB(220,220,220) //(赶死部落)
#define AGE_RGB_LIGHTGREY ARGB(211,211,211) //(浅灰)
#define AGE_RGB_SILVER ARGB(192,192,192) //(银白)
#define AGE_RGB_DARKGRAY ARGB(169,169,169) //(深灰)
#define AGE_RGB_DIMGRAY ARGB(105,105,105) //(暗灰)
#define AGE_RGB_BLACK ARGB(0,0,0) //(黑)

}


#endif // AGE_COLOR_H