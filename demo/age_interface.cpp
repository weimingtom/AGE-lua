#include "age_interface.h"
#include <QGLShader>

#include <../include/age_texture.h>
#include <../include/age_sprite.h>
#include <../include/age_vector2d.h>
#include <age_lua.h>
#include <qdebug.h>

namespace AGE2D {

void *ATextureCreate(const char *string)
{
    ATexture * texture =new ATexture(QString(string));
    return texture;
}
static int ATextureCreate_bind(lua_State *L)
{
    if(lua_isstring(L,1))
    {
     const char * str=lua_tostring(L,1);
    lua_pushlightuserdata(L,ATextureCreate(str));
    }
    return 1;
}

void *ASpriteCreate()
{
    ASprite * sprite =new ASprite();
    return sprite;
}

static int ASpriteCreate_bind(lua_State *L)
{
    lua_pushlightuserdata(L,ASpriteCreate());
    return 1;
}

void ASpriteSetSize(void *sprite_handle, int width, int height)
{
    ASprite * sprite= (ASprite* )sprite_handle;
       sprite->setWidth(width);
       sprite->setHeight(height);
}

static int ASpriteSetSize_bind(lua_State *L)
{
    if(lua_islightuserdata(L,1) && lua_isnumber(L,2) && lua_isnumber(L,3))
    {
    ASpriteSetSize(lua_touserdata(L,1),lua_tointeger(L,2),lua_tointeger(L,3));
    }
    return 0;
}

void ASpriteSetPos(void *sprite_handle, int x, int y)
{
    ASprite * sprite= (ASprite* )sprite_handle;
    sprite->setPos(AVector2D(x,y));
}

static int ASpriteSetPos_bind(lua_State *L)
{
    if(lua_islightuserdata(L,1) && lua_isnumber(L,2) && lua_isnumber(L,3))
    {
    ASpriteSetSize(lua_touserdata(L,1),lua_tointeger(L,2),lua_tointeger(L,3));
    }
    return 0;
}

void ASpriteRotate(void *sprite_handle, double angle)
{
    ASprite * sprite= (ASprite* )sprite_handle;
    sprite->rotate(angle);
}


static int ASpriteRotate_bind(lua_State *L)
{
    if(lua_islightuserdata(L,1) && lua_isnumber(L,2))
    {
    ASpriteRotate(lua_touserdata(L,1),lua_tonumber(L,2));
    }
    return 0;
}


void ASpriteColor(void *sprite_handle, double r, double g, double b, double a)
{
    ASprite * sprite= (ASprite* )sprite_handle;
    sprite->setColor(r,g,b);
    sprite->setAlpha(a);
}

static int ASpriteColor_bind(lua_State *L)
{
    if(lua_islightuserdata(L,1) && lua_isnumber(L,2)
            &&lua_isnumber(L,3)&& lua_isnumber(L,4)&&lua_isnumber(L,5))
    {
    ASpriteColor(lua_touserdata(L,1),lua_tonumber(L,2),lua_tonumber(L,3),lua_tonumber(L,4),lua_tonumber(L,5));
    }
    return 0;
}



void ASpriteBindTexture(void *sprite_handle, void *texture_handle)
{
    ASprite * sprite= (ASprite* )sprite_handle;
    ATexture * texture= (ATexture * )texture_handle;
    sprite->bindTexture(texture);
}

static int ASpriteBindTexture_bind(lua_State *L)
{
    if(lua_islightuserdata(L,1) && lua_islightuserdata(L,2))
    {
    ASpriteBindTexture(lua_touserdata(L,1),lua_touserdata(L,2));
    }
    return 0;
}

void ASpriteDestory(void *sprite_handle)
{
    ASprite * sprite= (ASprite* )sprite_handle;
    delete sprite;
}

static int ASpriteDestory_bind(lua_State *L)
{

    if(lua_islightuserdata(L,1))
    {
    ASpriteDestory(lua_touserdata(L,1));
    }
    return 0;
}

void ASpriteRender(void *sprite_handle)
{

    ASprite * sprite= (ASprite* )sprite_handle;
    sprite->render();
}

static int ASpriteRender_bind(lua_State *L)
{
    qDebug()<<"sdsd"<<lua_type(L,1);
    if(lua_islightuserdata(L,1))
    {
    ASpriteRender(lua_touserdata(L,1));
    }
    return 0;
}


void ARegisterToLua()
{
    lua_register(ALua::getLua(),"ATextureCreate",ATextureCreate_bind);
    lua_register(ALua::getLua(),"ASpriteCreate",ASpriteCreate_bind);
    lua_register(ALua::getLua(),"ASpriteSetSize",ASpriteSetSize_bind);
    lua_register(ALua::getLua(),"ASpriteSetPos",ASpriteSetPos_bind);
    lua_register(ALua::getLua(),"ASpriteRotate",ASpriteRotate_bind);
    lua_register(ALua::getLua(),"ASpriteColor",ASpriteColor_bind);
    lua_register(ALua::getLua(),"ASpriteBindTexture",ASpriteBindTexture_bind);
    lua_register(ALua::getLua(),"ASpriteDestory",ASpriteDestory_bind);
    lua_register(ALua::getLua(),"ASpriteRender",ASpriteRender_bind);
}
}