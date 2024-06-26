#pragma once

#include <cstdint>

typedef struct
{
  int pak_num;
  int map_flg;
  int pad[2];
} MANMPK_HEADER;

struct PK2_HEAD
{
  int pack_num;
  int pad[3];
  unsigned int offset[1];
};

int PakAlign128(int address);
int GetNumInPak(int param_1);
void* GetFileInPak(PK2_HEAD *pak_file, int pak_id);
int GetFileSizeInPak(int *file, int fileId);
void* GetPakTaleAddr(PK2_HEAD *pakHead);
int Pk2GetNum(PK2_HEAD *pakHead);
int Pk2GetAddr(PK2_HEAD *pakHead, int pakId);
