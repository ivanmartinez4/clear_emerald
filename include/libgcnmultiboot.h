#ifndef GUARD_LIBGCNMULTIBOOT_H
#define GUARD_LIBGCNMULTIBOOT_H

struct GcmbStruct
{
    u16 gcmb_field_0;
    vu8 gcmb_field_2;
};

void GameCubeMultiBoot_Main(struct GcmbStruct *pStruct);
void GameCubeMultiBoot_ExecuteProgram(struct GcmbStruct *pStruct);
void GameCubeMultiBoot_Init(struct GcmbStruct *pStruct);
void GameCubeMultiBoot_HandleSerialInterrupt(struct GcmbStruct *pStruct);
void GameCubeMultiBoot_Quit(void);

#endif // GUARD_LIBGCNMULTIBOOT_H
