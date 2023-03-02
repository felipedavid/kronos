#pragma once

// Object manager offsets
#define CLIENT_CONNECTION_PTR 0xDBE7E0
#define CURR_OBJECT_MANAGER   0x463C
#define LOCAL_PLAYER_GUID     0xC8
#define FIRST_OBJECT          0xC0

// Object structure 
#define NEXT_OBJECT    0x3C
#define OBJECT_TYPE    0x14
#define OBJECT_DESCRIPTOR 0xC

// Object descriptor fields
#define OBJECT_FIELD_GUID    0x0
#define OBJECT_FIELD_DATA    0x8
#define OBJECT_FIELD_TYPE    0x10
#define OBJECT_FIELD_ENTRY   0x14
#define OBJECT_FIELD_SCALE_X 0x18
#define OBJECT_FIELD_PADDING 0x1C

// GameObject descriptor fields
#define GAMEOBJECT_CREATOR_GUID   0x20
#define GAMEOBJECT_DISPLAYID      0x28
#define GAMEOBJECT_FLAGS          0x2C
#define GAMEOBJECT_PARENTROTATION 0x30
#define GAMEOBJECT_DYNAMIC		  0x40
#define GAMEOBJECT_FACTION		  0x44
#define GAMEOBJECT_LEVEL		  0x48
#define GAMEOBJECT_BYTES_1		  0x4C

// Unit descriptor fields
#define UNIT_FIELD_CHARM          0x20
#define UNIT_FIELD_SUMMON         0x28
#define UNIT_FIELD_CRITTER        0x30
#define UNIT_FIELD_CHARMEDBY      0x38
#define UNIT_FIELD_SUMMONEDBY     0x40
#define UNIT_FIELD_CREATEDBY      0x48
#define UNIT_FIELD_TARGET         0x50
#define UNIT_FIELD_CHANNEL_OBJECT 0x58
#define UNIT_CHANNEL_SPELL        0x60
#define UNIT_FIELD_BYTES_0        0x64

#define CONSOLEPRINTF_FUN_PTR          0x653900
#define CONSOLECOMMANDREGISTER_FUN_PTR 0x654C90
#define SPELL_C_CASTSPELL_FUN_PTR      0x8B9060
#define CLNTOBJMGROBJECTPTR_FUN_PTR    0x48E5C0
#define CGGAMEOBJECT_C__ONRIGHTCLICK_FUN_PTR 0x5A1560
