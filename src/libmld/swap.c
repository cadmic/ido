#include "libmld.h"
#if 0
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm
)"");
#endif

#if 0
.rdata
RO_1000F430:
    # 00491140 swap_aux
    .asciz "swap of auxs not supported when destsex != hostsex\n"

    .balign 4
jtbl_1000F464:
    # 00491140 swap_aux
    .gpword .L004911C8
    .gpword .L004912E8
    .gpword .L0049135C
    .gpword .L0049135C
    .gpword .L0049135C
    .gpword .L0049135C
    .gpword .L0049135C
#endif


#if 0
__asm__(R""(

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel swap_filehdr
    .ent swap_filehdr
/* 0048F150 AFA50004 */  sw    $a1, 4($sp)
/* 0048F154 94820000 */  lhu   $v0, ($a0)
/* 0048F158 8C850004 */  lw    $a1, 4($a0)
/* 0048F15C 94830002 */  lhu   $v1, 2($a0)
/* 0048F160 00027A00 */  sll   $t7, $v0, 8
/* 0048F164 0002C202 */  srl   $t8, $v0, 8
/* 0048F168 01F8C825 */  or    $t9, $t7, $t8
/* 0048F16C 3C0800FF */  lui   $t0, 0xff
/* 0048F170 00057200 */  sll   $t6, $a1, 8
/* 0048F174 8C860008 */  lw    $a2, 8($a0)
/* 0048F178 A4990000 */  sh    $t9, ($a0)
/* 0048F17C 01C87824 */  and   $t7, $t6, $t0
/* 0048F180 00056E00 */  sll   $t5, $a1, 0x18
/* 0048F184 01AFC025 */  or    $t8, $t5, $t7
/* 0048F188 0005CA03 */  sra   $t9, $a1, 8
/* 0048F18C 00035200 */  sll   $t2, $v1, 8
/* 0048F190 00035A02 */  srl   $t3, $v1, 8
/* 0048F194 014B6025 */  or    $t4, $t2, $t3
/* 0048F198 3329FF00 */  andi  $t1, $t9, 0xff00
/* 0048F19C 03095025 */  or    $t2, $t8, $t1
/* 0048F1A0 00066A00 */  sll   $t5, $a2, 8
/* 0048F1A4 8C87000C */  lw    $a3, 0xc($a0)
/* 0048F1A8 01A87824 */  and   $t7, $t5, $t0
/* 0048F1AC 00067600 */  sll   $t6, $a2, 0x18
/* 0048F1B0 A48C0002 */  sh    $t4, 2($a0)
/* 0048F1B4 01CFC825 */  or    $t9, $t6, $t7
/* 0048F1B8 00055E02 */  srl   $t3, $a1, 0x18
/* 0048F1BC 0006C203 */  sra   $t8, $a2, 8
/* 0048F1C0 014B6025 */  or    $t4, $t2, $t3
/* 0048F1C4 3309FF00 */  andi  $t1, $t8, 0xff00
/* 0048F1C8 03295025 */  or    $t2, $t9, $t1
/* 0048F1CC 00077200 */  sll   $t6, $a3, 8
/* 0048F1D0 AC8C0004 */  sw    $t4, 4($a0)
/* 0048F1D4 01C87824 */  and   $t7, $t6, $t0
/* 0048F1D8 00065E02 */  srl   $t3, $a2, 0x18
/* 0048F1DC 0007CA03 */  sra   $t9, $a3, 8
/* 0048F1E0 00076E00 */  sll   $t5, $a3, 0x18
/* 0048F1E4 014B6025 */  or    $t4, $t2, $t3
/* 0048F1E8 01AFC025 */  or    $t8, $t5, $t7
/* 0048F1EC 3329FF00 */  andi  $t1, $t9, 0xff00
/* 0048F1F0 03095025 */  or    $t2, $t8, $t1
/* 0048F1F4 94820010 */  lhu   $v0, 0x10($a0)
/* 0048F1F8 94980012 */  lhu   $t8, 0x12($a0)
/* 0048F1FC AC8C0008 */  sw    $t4, 8($a0)
/* 0048F200 00075E02 */  srl   $t3, $a3, 0x18
/* 0048F204 014B6025 */  or    $t4, $t2, $t3
/* 0048F208 304E00FF */  andi  $t6, $v0, 0xff
/* 0048F20C 000E6A00 */  sll   $t5, $t6, 8
/* 0048F210 00027A02 */  srl   $t7, $v0, 8
/* 0048F214 00185202 */  srl   $t2, $t8, 8
/* 0048F218 00184A00 */  sll   $t1, $t8, 8
/* 0048F21C 01AFC825 */  or    $t9, $t5, $t7
/* 0048F220 012A5825 */  or    $t3, $t1, $t2
/* 0048F224 AC8C000C */  sw    $t4, 0xc($a0)
/* 0048F228 A4990010 */  sh    $t9, 0x10($a0)
/* 0048F22C 03E00008 */  jr    $ra
/* 0048F230 A48B0012 */   sh    $t3, 0x12($a0)
    .type swap_filehdr, @function
    .size swap_filehdr, .-swap_filehdr
    .end swap_filehdr

glabel swap_aouthdr
    .ent swap_aouthdr
/* 0048F234 AFA50004 */  sw    $a1, 4($sp)
/* 0048F238 84820000 */  lh    $v0, ($a0)
/* 0048F23C 84830002 */  lh    $v1, 2($a0)
/* 0048F240 8C850004 */  lw    $a1, 4($a0)
/* 0048F244 3058FFFF */  andi  $t8, $v0, 0xffff
/* 0048F248 0018CA02 */  srl   $t9, $t8, 8
/* 0048F24C 00027A00 */  sll   $t7, $v0, 8
/* 0048F250 01F94825 */  or    $t1, $t7, $t9
/* 0048F254 306CFFFF */  andi  $t4, $v1, 0xffff
/* 0048F258 3C0800FF */  lui   $t0, 0xff
/* 0048F25C 000C6A02 */  srl   $t5, $t4, 8
/* 0048F260 00035A00 */  sll   $t3, $v1, 8
/* 0048F264 00057A00 */  sll   $t7, $a1, 8
/* 0048F268 8C860008 */  lw    $a2, 8($a0)
/* 0048F26C A4890000 */  sh    $t1, ($a0)
/* 0048F270 016D7025 */  or    $t6, $t3, $t5
/* 0048F274 01E8C824 */  and   $t9, $t7, $t0
/* 0048F278 0005C600 */  sll   $t8, $a1, 0x18
/* 0048F27C 03194825 */  or    $t1, $t8, $t9
/* 0048F280 00055203 */  sra   $t2, $a1, 8
/* 0048F284 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F288 A48E0002 */  sh    $t6, 2($a0)
/* 0048F28C 012C5825 */  or    $t3, $t1, $t4
/* 0048F290 00056E02 */  srl   $t5, $a1, 0x18
/* 0048F294 0006C200 */  sll   $t8, $a2, 8
/* 0048F298 8C87000C */  lw    $a3, 0xc($a0)
/* 0048F29C 016D7025 */  or    $t6, $t3, $t5
/* 0048F2A0 0308C824 */  and   $t9, $t8, $t0
/* 0048F2A4 00067E00 */  sll   $t7, $a2, 0x18
/* 0048F2A8 01F95025 */  or    $t2, $t7, $t9
/* 0048F2AC 00064A03 */  sra   $t1, $a2, 8
/* 0048F2B0 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F2B4 AC8E0004 */  sw    $t6, 4($a0)
/* 0048F2B8 014C5825 */  or    $t3, $t2, $t4
/* 0048F2BC 00066E02 */  srl   $t5, $a2, 0x18
/* 0048F2C0 00077A00 */  sll   $t7, $a3, 8
/* 0048F2C4 8C820010 */  lw    $v0, 0x10($a0)
/* 0048F2C8 016D7025 */  or    $t6, $t3, $t5
/* 0048F2CC 01E8C824 */  and   $t9, $t7, $t0
/* 0048F2D0 0007C600 */  sll   $t8, $a3, 0x18
/* 0048F2D4 03194825 */  or    $t1, $t8, $t9
/* 0048F2D8 00075203 */  sra   $t2, $a3, 8
/* 0048F2DC 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F2E0 AC8E0008 */  sw    $t6, 8($a0)
/* 0048F2E4 012C5825 */  or    $t3, $t1, $t4
/* 0048F2E8 00076E02 */  srl   $t5, $a3, 0x18
/* 0048F2EC 0002C200 */  sll   $t8, $v0, 8
/* 0048F2F0 8C830014 */  lw    $v1, 0x14($a0)
/* 0048F2F4 016D7025 */  or    $t6, $t3, $t5
/* 0048F2F8 0308C824 */  and   $t9, $t8, $t0
/* 0048F2FC 00027E00 */  sll   $t7, $v0, 0x18
/* 0048F300 01F95025 */  or    $t2, $t7, $t9
/* 0048F304 00024A03 */  sra   $t1, $v0, 8
/* 0048F308 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F30C AC8E000C */  sw    $t6, 0xc($a0)
/* 0048F310 014C5825 */  or    $t3, $t2, $t4
/* 0048F314 00026E02 */  srl   $t5, $v0, 0x18
/* 0048F318 00037A00 */  sll   $t7, $v1, 8
/* 0048F31C 8C850018 */  lw    $a1, 0x18($a0)
/* 0048F320 016D7025 */  or    $t6, $t3, $t5
/* 0048F324 01E8C824 */  and   $t9, $t7, $t0
/* 0048F328 0003C600 */  sll   $t8, $v1, 0x18
/* 0048F32C 03194825 */  or    $t1, $t8, $t9
/* 0048F330 00035203 */  sra   $t2, $v1, 8
/* 0048F334 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F338 AC8E0010 */  sw    $t6, 0x10($a0)
/* 0048F33C 012C5825 */  or    $t3, $t1, $t4
/* 0048F340 00036E02 */  srl   $t5, $v1, 0x18
/* 0048F344 0005C200 */  sll   $t8, $a1, 8
/* 0048F348 8C86001C */  lw    $a2, 0x1c($a0)
/* 0048F34C 016D7025 */  or    $t6, $t3, $t5
/* 0048F350 0308C824 */  and   $t9, $t8, $t0
/* 0048F354 00057E00 */  sll   $t7, $a1, 0x18
/* 0048F358 01F95025 */  or    $t2, $t7, $t9
/* 0048F35C 00054A03 */  sra   $t1, $a1, 8
/* 0048F360 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F364 AC8E0014 */  sw    $t6, 0x14($a0)
/* 0048F368 014C5825 */  or    $t3, $t2, $t4
/* 0048F36C 00056E02 */  srl   $t5, $a1, 0x18
/* 0048F370 00067A00 */  sll   $t7, $a2, 8
/* 0048F374 8C820020 */  lw    $v0, 0x20($a0)
/* 0048F378 016D7025 */  or    $t6, $t3, $t5
/* 0048F37C 01E8C824 */  and   $t9, $t7, $t0
/* 0048F380 0006C600 */  sll   $t8, $a2, 0x18
/* 0048F384 03194825 */  or    $t1, $t8, $t9
/* 0048F388 00065203 */  sra   $t2, $a2, 8
/* 0048F38C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F390 AC8E0018 */  sw    $t6, 0x18($a0)
/* 0048F394 012C5825 */  or    $t3, $t1, $t4
/* 0048F398 00066E02 */  srl   $t5, $a2, 0x18
/* 0048F39C 0002C200 */  sll   $t8, $v0, 8
/* 0048F3A0 8C830024 */  lw    $v1, 0x24($a0)
/* 0048F3A4 016D7025 */  or    $t6, $t3, $t5
/* 0048F3A8 0308C824 */  and   $t9, $t8, $t0
/* 0048F3AC 00027E00 */  sll   $t7, $v0, 0x18
/* 0048F3B0 01F95025 */  or    $t2, $t7, $t9
/* 0048F3B4 00024A03 */  sra   $t1, $v0, 8
/* 0048F3B8 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F3BC AC8E001C */  sw    $t6, 0x1c($a0)
/* 0048F3C0 014C5825 */  or    $t3, $t2, $t4
/* 0048F3C4 00026E02 */  srl   $t5, $v0, 0x18
/* 0048F3C8 00037A00 */  sll   $t7, $v1, 8
/* 0048F3CC 8C850028 */  lw    $a1, 0x28($a0)
/* 0048F3D0 016D7025 */  or    $t6, $t3, $t5
/* 0048F3D4 01E8C824 */  and   $t9, $t7, $t0
/* 0048F3D8 0003C600 */  sll   $t8, $v1, 0x18
/* 0048F3DC 03194825 */  or    $t1, $t8, $t9
/* 0048F3E0 00035203 */  sra   $t2, $v1, 8
/* 0048F3E4 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F3E8 AC8E0020 */  sw    $t6, 0x20($a0)
/* 0048F3EC 012C5825 */  or    $t3, $t1, $t4
/* 0048F3F0 00036E02 */  srl   $t5, $v1, 0x18
/* 0048F3F4 0005C200 */  sll   $t8, $a1, 8
/* 0048F3F8 8C86002C */  lw    $a2, 0x2c($a0)
/* 0048F3FC 01AB7025 */  or    $t6, $t5, $t3
/* 0048F400 0308C824 */  and   $t9, $t8, $t0
/* 0048F404 00057E00 */  sll   $t7, $a1, 0x18
/* 0048F408 01F95025 */  or    $t2, $t7, $t9
/* 0048F40C 00054A03 */  sra   $t1, $a1, 8
/* 0048F410 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F414 AC8E0024 */  sw    $t6, 0x24($a0)
/* 0048F418 014C6825 */  or    $t5, $t2, $t4
/* 0048F41C 00055E02 */  srl   $t3, $a1, 0x18
/* 0048F420 00067A00 */  sll   $t7, $a2, 8
/* 0048F424 8C820030 */  lw    $v0, 0x30($a0)
/* 0048F428 016D7025 */  or    $t6, $t3, $t5
/* 0048F42C 01E8C824 */  and   $t9, $t7, $t0
/* 0048F430 0006C600 */  sll   $t8, $a2, 0x18
/* 0048F434 03194825 */  or    $t1, $t8, $t9
/* 0048F438 00065203 */  sra   $t2, $a2, 8
/* 0048F43C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F440 AC8E0028 */  sw    $t6, 0x28($a0)
/* 0048F444 012C5825 */  or    $t3, $t1, $t4
/* 0048F448 00066E02 */  srl   $t5, $a2, 0x18
/* 0048F44C 0002C200 */  sll   $t8, $v0, 8
/* 0048F450 8C830034 */  lw    $v1, 0x34($a0)
/* 0048F454 01AB7025 */  or    $t6, $t5, $t3
/* 0048F458 0308C824 */  and   $t9, $t8, $t0
/* 0048F45C 00027E00 */  sll   $t7, $v0, 0x18
/* 0048F460 01F95025 */  or    $t2, $t7, $t9
/* 0048F464 00024A03 */  sra   $t1, $v0, 8
/* 0048F468 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F46C AC8E002C */  sw    $t6, 0x2c($a0)
/* 0048F470 014C6825 */  or    $t5, $t2, $t4
/* 0048F474 00025E02 */  srl   $t3, $v0, 0x18
/* 0048F478 016D7025 */  or    $t6, $t3, $t5
/* 0048F47C 00037A00 */  sll   $t7, $v1, 8
/* 0048F480 01E8C824 */  and   $t9, $t7, $t0
/* 0048F484 00035203 */  sra   $t2, $v1, 8
/* 0048F488 0003C600 */  sll   $t8, $v1, 0x18
/* 0048F48C 03194825 */  or    $t1, $t8, $t9
/* 0048F490 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F494 AC8E0030 */  sw    $t6, 0x30($a0)
/* 0048F498 012C5825 */  or    $t3, $t1, $t4
/* 0048F49C 00036E02 */  srl   $t5, $v1, 0x18
/* 0048F4A0 016D7025 */  or    $t6, $t3, $t5
/* 0048F4A4 03E00008 */  jr    $ra
/* 0048F4A8 AC8E0034 */   sw    $t6, 0x34($a0)
    .type swap_aouthdr, @function
    .size swap_aouthdr, .-swap_aouthdr
    .end swap_aouthdr

glabel swap_scnhdr
    .ent swap_scnhdr
/* 0048F4AC AFA50004 */  sw    $a1, 4($sp)
/* 0048F4B0 8C820008 */  lw    $v0, 8($a0)
/* 0048F4B4 3C0800FF */  lui   $t0, 0xff
/* 0048F4B8 8C83000C */  lw    $v1, 0xc($a0)
/* 0048F4BC 00027A00 */  sll   $t7, $v0, 8
/* 0048F4C0 01E8C024 */  and   $t8, $t7, $t0
/* 0048F4C4 00027600 */  sll   $t6, $v0, 0x18
/* 0048F4C8 01D8C825 */  or    $t9, $t6, $t8
/* 0048F4CC 00024A03 */  sra   $t1, $v0, 8
/* 0048F4D0 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0048F4D4 032A5825 */  or    $t3, $t9, $t2
/* 0048F4D8 00026602 */  srl   $t4, $v0, 0x18
/* 0048F4DC 00037200 */  sll   $t6, $v1, 8
/* 0048F4E0 8C850010 */  lw    $a1, 0x10($a0)
/* 0048F4E4 016C6825 */  or    $t5, $t3, $t4
/* 0048F4E8 01C8C024 */  and   $t8, $t6, $t0
/* 0048F4EC 00037E00 */  sll   $t7, $v1, 0x18
/* 0048F4F0 01F84825 */  or    $t1, $t7, $t8
/* 0048F4F4 0003CA03 */  sra   $t9, $v1, 8
/* 0048F4F8 332AFF00 */  andi  $t2, $t9, 0xff00
/* 0048F4FC AC8D0008 */  sw    $t5, 8($a0)
/* 0048F500 012A5825 */  or    $t3, $t1, $t2
/* 0048F504 00036602 */  srl   $t4, $v1, 0x18
/* 0048F508 00057A00 */  sll   $t7, $a1, 8
/* 0048F50C 8C860014 */  lw    $a2, 0x14($a0)
/* 0048F510 016C6825 */  or    $t5, $t3, $t4
/* 0048F514 01E8C024 */  and   $t8, $t7, $t0
/* 0048F518 00057600 */  sll   $t6, $a1, 0x18
/* 0048F51C 01D8C825 */  or    $t9, $t6, $t8
/* 0048F520 00054A03 */  sra   $t1, $a1, 8
/* 0048F524 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0048F528 AC8D000C */  sw    $t5, 0xc($a0)
/* 0048F52C 032A5825 */  or    $t3, $t9, $t2
/* 0048F530 00056602 */  srl   $t4, $a1, 0x18
/* 0048F534 00067200 */  sll   $t6, $a2, 8
/* 0048F538 8C820018 */  lw    $v0, 0x18($a0)
/* 0048F53C 016C6825 */  or    $t5, $t3, $t4
/* 0048F540 01C8C024 */  and   $t8, $t6, $t0
/* 0048F544 00067E00 */  sll   $t7, $a2, 0x18
/* 0048F548 01F84825 */  or    $t1, $t7, $t8
/* 0048F54C 0006CA03 */  sra   $t9, $a2, 8
/* 0048F550 332AFF00 */  andi  $t2, $t9, 0xff00
/* 0048F554 AC8D0010 */  sw    $t5, 0x10($a0)
/* 0048F558 012A5825 */  or    $t3, $t1, $t2
/* 0048F55C 00066602 */  srl   $t4, $a2, 0x18
/* 0048F560 00027A00 */  sll   $t7, $v0, 8
/* 0048F564 8C83001C */  lw    $v1, 0x1c($a0)
/* 0048F568 016C6825 */  or    $t5, $t3, $t4
/* 0048F56C 01E8C024 */  and   $t8, $t7, $t0
/* 0048F570 00027600 */  sll   $t6, $v0, 0x18
/* 0048F574 01D8C825 */  or    $t9, $t6, $t8
/* 0048F578 00024A03 */  sra   $t1, $v0, 8
/* 0048F57C 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0048F580 AC8D0014 */  sw    $t5, 0x14($a0)
/* 0048F584 032A5825 */  or    $t3, $t9, $t2
/* 0048F588 00026602 */  srl   $t4, $v0, 0x18
/* 0048F58C 00037200 */  sll   $t6, $v1, 8
/* 0048F590 94850020 */  lhu   $a1, 0x20($a0)
/* 0048F594 016C6825 */  or    $t5, $t3, $t4
/* 0048F598 01C8C024 */  and   $t8, $t6, $t0
/* 0048F59C 00037E00 */  sll   $t7, $v1, 0x18
/* 0048F5A0 01F84825 */  or    $t1, $t7, $t8
/* 0048F5A4 0003CA03 */  sra   $t9, $v1, 8
/* 0048F5A8 94860022 */  lhu   $a2, 0x22($a0)
/* 0048F5AC 332AFF00 */  andi  $t2, $t9, 0xff00
/* 0048F5B0 8C870024 */  lw    $a3, 0x24($a0)
/* 0048F5B4 AC8D0018 */  sw    $t5, 0x18($a0)
/* 0048F5B8 012A5825 */  or    $t3, $t1, $t2
/* 0048F5BC 00036602 */  srl   $t4, $v1, 0x18
/* 0048F5C0 016C6825 */  or    $t5, $t3, $t4
/* 0048F5C4 0005C202 */  srl   $t8, $a1, 8
/* 0048F5C8 00057A00 */  sll   $t7, $a1, 8
/* 0048F5CC 01F8C825 */  or    $t9, $t7, $t8
/* 0048F5D0 00065A02 */  srl   $t3, $a2, 8
/* 0048F5D4 00065200 */  sll   $t2, $a2, 8
/* 0048F5D8 AC8D001C */  sw    $t5, 0x1c($a0)
/* 0048F5DC A4990020 */  sh    $t9, 0x20($a0)
/* 0048F5E0 014B6025 */  or    $t4, $t2, $t3
/* 0048F5E4 00077200 */  sll   $t6, $a3, 8
/* 0048F5E8 01C87824 */  and   $t7, $t6, $t0
/* 0048F5EC 0007CA03 */  sra   $t9, $a3, 8
/* 0048F5F0 00076E00 */  sll   $t5, $a3, 0x18
/* 0048F5F4 01AFC025 */  or    $t8, $t5, $t7
/* 0048F5F8 3329FF00 */  andi  $t1, $t9, 0xff00
/* 0048F5FC A48C0022 */  sh    $t4, 0x22($a0)
/* 0048F600 03095025 */  or    $t2, $t8, $t1
/* 0048F604 00075E02 */  srl   $t3, $a3, 0x18
/* 0048F608 014B6025 */  or    $t4, $t2, $t3
/* 0048F60C 03E00008 */  jr    $ra
/* 0048F610 AC8C0024 */   sw    $t4, 0x24($a0)
    .type swap_scnhdr, @function
    .size swap_scnhdr, .-swap_scnhdr
    .end swap_scnhdr

glabel swap_libscn
    .ent swap_libscn
/* 0048F614 AFA50004 */  sw    $a1, 4($sp)
/* 0048F618 8C820000 */  lw    $v0, ($a0)
/* 0048F61C 8C830004 */  lw    $v1, 4($a0)
/* 0048F620 3C0700FF */  lui   $a3, 0xff
/* 0048F624 00027A00 */  sll   $t7, $v0, 8
/* 0048F628 01E7C024 */  and   $t8, $t7, $a3
/* 0048F62C 00027600 */  sll   $t6, $v0, 0x18
/* 0048F630 01D8C825 */  or    $t9, $t6, $t8
/* 0048F634 00024203 */  sra   $t0, $v0, 8
/* 0048F638 3109FF00 */  andi  $t1, $t0, 0xff00
/* 0048F63C 8C850008 */  lw    $a1, 8($a0)
/* 0048F640 03295025 */  or    $t2, $t9, $t1
/* 0048F644 00025E02 */  srl   $t3, $v0, 0x18
/* 0048F648 00037A00 */  sll   $t7, $v1, 8
/* 0048F64C 014B6025 */  or    $t4, $t2, $t3
/* 0048F650 01E77024 */  and   $t6, $t7, $a3
/* 0048F654 00034203 */  sra   $t0, $v1, 8
/* 0048F658 00036E00 */  sll   $t5, $v1, 0x18
/* 0048F65C 01AEC025 */  or    $t8, $t5, $t6
/* 0048F660 3119FF00 */  andi  $t9, $t0, 0xff00
/* 0048F664 03194825 */  or    $t1, $t8, $t9
/* 0048F668 8C86000C */  lw    $a2, 0xc($a0)
/* 0048F66C AC8C0000 */  sw    $t4, ($a0)
/* 0048F670 00035602 */  srl   $t2, $v1, 0x18
/* 0048F674 00057A00 */  sll   $t7, $a1, 8
/* 0048F678 012A5825 */  or    $t3, $t1, $t2
/* 0048F67C 01E76824 */  and   $t5, $t7, $a3
/* 0048F680 00056600 */  sll   $t4, $a1, 0x18
/* 0048F684 00054203 */  sra   $t0, $a1, 8
/* 0048F688 3118FF00 */  andi  $t8, $t0, 0xff00
/* 0048F68C 018D7025 */  or    $t6, $t4, $t5
/* 0048F690 01D8C825 */  or    $t9, $t6, $t8
/* 0048F694 00054E02 */  srl   $t1, $a1, 0x18
/* 0048F698 8C820010 */  lw    $v0, 0x10($a0)
/* 0048F69C AC8B0004 */  sw    $t3, 4($a0)
/* 0048F6A0 03295025 */  or    $t2, $t9, $t1
/* 0048F6A4 00067A00 */  sll   $t7, $a2, 8
/* 0048F6A8 01E76024 */  and   $t4, $t7, $a3
/* 0048F6AC 00065E00 */  sll   $t3, $a2, 0x18
/* 0048F6B0 00064203 */  sra   $t0, $a2, 8
/* 0048F6B4 310EFF00 */  andi  $t6, $t0, 0xff00
/* 0048F6B8 016C6825 */  or    $t5, $t3, $t4
/* 0048F6BC 8C830014 */  lw    $v1, 0x14($a0)
/* 0048F6C0 AC8A0008 */  sw    $t2, 8($a0)
/* 0048F6C4 01AEC025 */  or    $t8, $t5, $t6
/* 0048F6C8 0006CE02 */  srl   $t9, $a2, 0x18
/* 0048F6CC 00027A00 */  sll   $t7, $v0, 8
/* 0048F6D0 03194825 */  or    $t1, $t8, $t9
/* 0048F6D4 01E75824 */  and   $t3, $t7, $a3
/* 0048F6D8 00025600 */  sll   $t2, $v0, 0x18
/* 0048F6DC 014B6025 */  or    $t4, $t2, $t3
/* 0048F6E0 00024203 */  sra   $t0, $v0, 8
/* 0048F6E4 8C850018 */  lw    $a1, 0x18($a0)
/* 0048F6E8 AC89000C */  sw    $t1, 0xc($a0)
/* 0048F6EC 310DFF00 */  andi  $t5, $t0, 0xff00
/* 0048F6F0 00037A00 */  sll   $t7, $v1, 8
/* 0048F6F4 018D7025 */  or    $t6, $t4, $t5
/* 0048F6F8 01E75024 */  and   $t2, $t7, $a3
/* 0048F6FC 0002C602 */  srl   $t8, $v0, 0x18
/* 0048F700 00034E00 */  sll   $t1, $v1, 0x18
/* 0048F704 01D8C825 */  or    $t9, $t6, $t8
/* 0048F708 012A5825 */  or    $t3, $t1, $t2
/* 0048F70C 00034203 */  sra   $t0, $v1, 8
/* 0048F710 310CFF00 */  andi  $t4, $t0, 0xff00
/* 0048F714 8C86001C */  lw    $a2, 0x1c($a0)
/* 0048F718 AC990010 */  sw    $t9, 0x10($a0)
/* 0048F71C 016C6825 */  or    $t5, $t3, $t4
/* 0048F720 00057A00 */  sll   $t7, $a1, 8
/* 0048F724 01E74824 */  and   $t1, $t7, $a3
/* 0048F728 00037602 */  srl   $t6, $v1, 0x18
/* 0048F72C 0005CE00 */  sll   $t9, $a1, 0x18
/* 0048F730 00054203 */  sra   $t0, $a1, 8
/* 0048F734 01AEC025 */  or    $t8, $t5, $t6
/* 0048F738 310BFF00 */  andi  $t3, $t0, 0xff00
/* 0048F73C 03295025 */  or    $t2, $t9, $t1
/* 0048F740 014B6025 */  or    $t4, $t2, $t3
/* 0048F744 AC980014 */  sw    $t8, 0x14($a0)
/* 0048F748 00067A00 */  sll   $t7, $a2, 8
/* 0048F74C 01E7C824 */  and   $t9, $t7, $a3
/* 0048F750 00056E02 */  srl   $t5, $a1, 0x18
/* 0048F754 0006C600 */  sll   $t8, $a2, 0x18
/* 0048F758 00064203 */  sra   $t0, $a2, 8
/* 0048F75C 018D7025 */  or    $t6, $t4, $t5
/* 0048F760 310AFF00 */  andi  $t2, $t0, 0xff00
/* 0048F764 03194825 */  or    $t1, $t8, $t9
/* 0048F768 012A5825 */  or    $t3, $t1, $t2
/* 0048F76C 00066602 */  srl   $t4, $a2, 0x18
/* 0048F770 016C6825 */  or    $t5, $t3, $t4
/* 0048F774 AC8E0018 */  sw    $t6, 0x18($a0)
/* 0048F778 03E00008 */  jr    $ra
/* 0048F77C AC8D001C */   sw    $t5, 0x1c($a0)
    .type swap_libscn, @function
    .size swap_libscn, .-swap_libscn
    .end swap_libscn
)"");
#endif

/*
0048D0E0 st_readst
*/
void swap_hdr(HDRR *phdr, int hostsex) {
    phdr->magic         = swap_half(phdr->magic);        
    phdr->vstamp        = swap_half(phdr->vstamp);       
    phdr->ilineMax      = swap_word(phdr->ilineMax);
    phdr->cbLine        = swap_word(phdr->cbLine);
    phdr->cbLineOffset  = swap_word(phdr->cbLineOffset);
    phdr->idnMax        = swap_word(phdr->idnMax);
    phdr->cbDnOffset    = swap_word(phdr->cbDnOffset);
    phdr->ipdMax        = swap_word(phdr->ipdMax);
    phdr->cbPdOffset    = swap_word(phdr->cbPdOffset);
    phdr->isymMax       = swap_word(phdr->isymMax);
    phdr->cbSymOffset   = swap_word(phdr->cbSymOffset);
    phdr->ioptMax       = swap_word(phdr->ioptMax);
    phdr->cbOptOffset   = swap_word(phdr->cbOptOffset);
    phdr->iauxMax       = swap_word(phdr->iauxMax);
    phdr->cbAuxOffset   = swap_word(phdr->cbAuxOffset);
    phdr->issMax        = swap_word(phdr->issMax);
    phdr->cbSsOffset    = swap_word(phdr->cbSsOffset);
    phdr->issExtMax     = swap_word(phdr->issExtMax);
    phdr->cbSsExtOffset = swap_word(phdr->cbSsExtOffset);
    phdr->ifdMax        = swap_word(phdr->ifdMax);
    phdr->cbFdOffset    = swap_word(phdr->cbFdOffset);
    phdr->crfd          = swap_word(phdr->crfd);
    phdr->cbRfdOffset   = swap_word(phdr->cbRfdOffset);
    phdr->iextMax       = swap_word(phdr->iextMax);
    phdr->cbExtOffset   = swap_word(phdr->cbExtOffset);
}

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel swap_fd
    .ent swap_fd
    # 0048D0E0 st_readst
/* 0048FBB0 3C1C0FB9 */  .cpload $t9
/* 0048FBB4 279CA6E0 */  
/* 0048FBB8 0399E021 */  
/* 0048FBBC 27BDFF70 */  addiu $sp, $sp, -0x90
/* 0048FBC0 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048FBC4 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0048FBC8 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0048FBCC AFB40028 */  sw    $s4, 0x28($sp)
/* 0048FBD0 AFB00018 */  sw    $s0, 0x18($sp)
/* 0048FBD4 00808025 */  move  $s0, $a0
/* 0048FBD8 00A0A025 */  move  $s4, $a1
/* 0048FBDC 00C0A825 */  move  $s5, $a2
/* 0048FBE0 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0048FBE4 AFB30024 */  sw    $s3, 0x24($sp)
/* 0048FBE8 AFB20020 */  sw    $s2, 0x20($sp)
/* 0048FBEC 0320F809 */  jalr  $t9
/* 0048FBF0 AFB1001C */   sw    $s1, 0x1c($sp)
/* 0048FBF4 1A80015F */  blez  $s4, .L00490174
/* 0048FBF8 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048FBFC 001470C0 */  sll   $t6, $s4, 3
/* 0048FC00 01D47021 */  addu  $t6, $t6, $s4
/* 0048FC04 000E70C0 */  sll   $t6, $t6, 3
/* 0048FC08 01D09821 */  addu  $s3, $t6, $s0
/* 0048FC0C 02001825 */  move  $v1, $s0
/* 0048FC10 3C1200FF */  lui   $s2, 0xff
/* 0048FC14 27B10040 */  addiu $s1, $sp, 0x40
/* 0048FC18 3C0400FF */  lui   $a0, 0xff
/* 0048FC1C 0060C825 */  move  $t9, $v1
.L0048FC20:
/* 0048FC20 02207025 */  move  $t6, $s1
/* 0048FC24 24610048 */  addiu $at, $v1, 0x48
.L0048FC28:
/* 0048FC28 8F380000 */  lw    $t8, ($t9)
/* 0048FC2C 2739000C */  addiu $t9, $t9, 0xc
/* 0048FC30 25CE000C */  addiu $t6, $t6, 0xc
/* 0048FC34 ADD8FFF4 */  sw    $t8, -0xc($t6)
/* 0048FC38 8F2FFFF8 */  lw    $t7, -8($t9)
/* 0048FC3C ADCFFFF8 */  sw    $t7, -8($t6)
/* 0048FC40 8F38FFFC */  lw    $t8, -4($t9)
/* 0048FC44 1721FFF8 */  bne   $t9, $at, .L0048FC28
/* 0048FC48 ADD8FFFC */   sw    $t8, -4($t6)
/* 0048FC4C 8FB90040 */  lw    $t9, 0x40($sp)
/* 0048FC50 8FA50054 */  lw    $a1, 0x54($sp)
/* 0048FC54 8FA60058 */  lw    $a2, 0x58($sp)
/* 0048FC58 00197A00 */  sll   $t7, $t9, 8
/* 0048FC5C 01F2C024 */  and   $t8, $t7, $s2
/* 0048FC60 00197600 */  sll   $t6, $t9, 0x18
/* 0048FC64 01D87825 */  or    $t7, $t6, $t8
/* 0048FC68 00197202 */  srl   $t6, $t9, 8
/* 0048FC6C 31D8FF00 */  andi  $t8, $t6, 0xff00
/* 0048FC70 01F87025 */  or    $t6, $t7, $t8
/* 0048FC74 00197E02 */  srl   $t7, $t9, 0x18
/* 0048FC78 8FB90044 */  lw    $t9, 0x44($sp)
/* 0048FC7C 01CFC025 */  or    $t8, $t6, $t7
/* 0048FC80 AFB80040 */  sw    $t8, 0x40($sp)
/* 0048FC84 00197A00 */  sll   $t7, $t9, 8
/* 0048FC88 01E4C024 */  and   $t8, $t7, $a0
/* 0048FC8C 00197600 */  sll   $t6, $t9, 0x18
/* 0048FC90 01D87825 */  or    $t7, $t6, $t8
/* 0048FC94 00197203 */  sra   $t6, $t9, 8
/* 0048FC98 31D8FF00 */  andi  $t8, $t6, 0xff00
/* 0048FC9C 8FAE0044 */  lw    $t6, 0x44($sp)
/* 0048FCA0 01F8C825 */  or    $t9, $t7, $t8
/* 0048FCA4 8FA7005C */  lw    $a3, 0x5c($sp)
/* 0048FCA8 000E7E02 */  srl   $t7, $t6, 0x18
/* 0048FCAC 8FAE0048 */  lw    $t6, 0x48($sp)
/* 0048FCB0 032FC025 */  or    $t8, $t9, $t7
/* 0048FCB4 AFB80044 */  sw    $t8, 0x44($sp)
/* 0048FCB8 000E7A00 */  sll   $t7, $t6, 8
/* 0048FCBC 01E4C024 */  and   $t8, $t7, $a0
/* 0048FCC0 000ECE00 */  sll   $t9, $t6, 0x18
/* 0048FCC4 03387825 */  or    $t7, $t9, $t8
/* 0048FCC8 000ECA03 */  sra   $t9, $t6, 8
/* 0048FCCC 3338FF00 */  andi  $t8, $t9, 0xff00
/* 0048FCD0 8FB90048 */  lw    $t9, 0x48($sp)
/* 0048FCD4 01F87025 */  or    $t6, $t7, $t8
/* 0048FCD8 8FA80060 */  lw    $t0, 0x60($sp)
/* 0048FCDC 00197E02 */  srl   $t7, $t9, 0x18
/* 0048FCE0 8FB9004C */  lw    $t9, 0x4c($sp)
/* 0048FCE4 01CFC025 */  or    $t8, $t6, $t7
/* 0048FCE8 AFB80048 */  sw    $t8, 0x48($sp)
/* 0048FCEC 00197A00 */  sll   $t7, $t9, 8
/* 0048FCF0 01E4C024 */  and   $t8, $t7, $a0
/* 0048FCF4 00197600 */  sll   $t6, $t9, 0x18
/* 0048FCF8 01D87825 */  or    $t7, $t6, $t8
/* 0048FCFC 00197203 */  sra   $t6, $t9, 8
/* 0048FD00 31D8FF00 */  andi  $t8, $t6, 0xff00
/* 0048FD04 8FAE004C */  lw    $t6, 0x4c($sp)
/* 0048FD08 01F8C825 */  or    $t9, $t7, $t8
/* 0048FD0C 8FA90064 */  lw    $t1, 0x64($sp)
/* 0048FD10 000E7E02 */  srl   $t7, $t6, 0x18
/* 0048FD14 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0048FD18 032FC025 */  or    $t8, $t9, $t7
/* 0048FD1C AFB8004C */  sw    $t8, 0x4c($sp)
/* 0048FD20 000E7A00 */  sll   $t7, $t6, 8
/* 0048FD24 01E4C024 */  and   $t8, $t7, $a0
/* 0048FD28 000ECE00 */  sll   $t9, $t6, 0x18
/* 0048FD2C 03387825 */  or    $t7, $t9, $t8
/* 0048FD30 000ECA03 */  sra   $t9, $t6, 8
/* 0048FD34 3338FF00 */  andi  $t8, $t9, 0xff00
/* 0048FD38 8FB90050 */  lw    $t9, 0x50($sp)
/* 0048FD3C 01F87025 */  or    $t6, $t7, $t8
/* 0048FD40 8FAA006C */  lw    $t2, 0x6c($sp)
/* 0048FD44 00197E02 */  srl   $t7, $t9, 0x18
/* 0048FD48 01CFC025 */  or    $t8, $t6, $t7
/* 0048FD4C 00057200 */  sll   $t6, $a1, 8
/* 0048FD50 01C47824 */  and   $t7, $t6, $a0
/* 0048FD54 AFB80050 */  sw    $t8, 0x50($sp)
/* 0048FD58 0005CE00 */  sll   $t9, $a1, 0x18
/* 0048FD5C 032FC025 */  or    $t8, $t9, $t7
/* 0048FD60 00057203 */  sra   $t6, $a1, 8
/* 0048FD64 31D9FF00 */  andi  $t9, $t6, 0xff00
/* 0048FD68 03197825 */  or    $t7, $t8, $t9
/* 0048FD6C 00057602 */  srl   $t6, $a1, 0x18
/* 0048FD70 01EE2825 */  or    $a1, $t7, $t6
/* 0048FD74 0006CA00 */  sll   $t9, $a2, 8
/* 0048FD78 03247824 */  and   $t7, $t9, $a0
/* 0048FD7C 0006C600 */  sll   $t8, $a2, 0x18
/* 0048FD80 030F7025 */  or    $t6, $t8, $t7
/* 0048FD84 0006CA03 */  sra   $t9, $a2, 8
/* 0048FD88 3338FF00 */  andi  $t8, $t9, 0xff00
/* 0048FD8C 01D87825 */  or    $t7, $t6, $t8
/* 0048FD90 0006CE02 */  srl   $t9, $a2, 0x18
/* 0048FD94 01F93025 */  or    $a2, $t7, $t9
/* 0048FD98 0007C200 */  sll   $t8, $a3, 8
/* 0048FD9C 03047824 */  and   $t7, $t8, $a0
/* 0048FDA0 00077600 */  sll   $t6, $a3, 0x18
/* 0048FDA4 01CFC825 */  or    $t9, $t6, $t7
/* 0048FDA8 0007C203 */  sra   $t8, $a3, 8
/* 0048FDAC 330EFF00 */  andi  $t6, $t8, 0xff00
/* 0048FDB0 032E7825 */  or    $t7, $t9, $t6
/* 0048FDB4 0007C602 */  srl   $t8, $a3, 0x18
/* 0048FDB8 01F83825 */  or    $a3, $t7, $t8
/* 0048FDBC 00087200 */  sll   $t6, $t0, 8
/* 0048FDC0 01C47824 */  and   $t7, $t6, $a0
/* 0048FDC4 0008CE00 */  sll   $t9, $t0, 0x18
/* 0048FDC8 032FC025 */  or    $t8, $t9, $t7
/* 0048FDCC 00087203 */  sra   $t6, $t0, 8
/* 0048FDD0 31D9FF00 */  andi  $t9, $t6, 0xff00
/* 0048FDD4 03197825 */  or    $t7, $t8, $t9
/* 0048FDD8 00087602 */  srl   $t6, $t0, 0x18
/* 0048FDDC 01EE4025 */  or    $t0, $t7, $t6
/* 0048FDE0 0009CA00 */  sll   $t9, $t1, 8
/* 0048FDE4 03247824 */  and   $t7, $t9, $a0
/* 0048FDE8 0009C600 */  sll   $t8, $t1, 0x18
/* 0048FDEC 030F7025 */  or    $t6, $t8, $t7
/* 0048FDF0 0009CA03 */  sra   $t9, $t1, 8
/* 0048FDF4 3338FF00 */  andi  $t8, $t9, 0xff00
/* 0048FDF8 01D87825 */  or    $t7, $t6, $t8
/* 0048FDFC 0009CE02 */  srl   $t9, $t1, 0x18
/* 0048FE00 01F94825 */  or    $t1, $t7, $t9
/* 0048FE04 97B90068 */  lhu   $t9, 0x68($sp)
/* 0048FE08 87B80068 */  lh    $t8, 0x68($sp)
/* 0048FE0C 8FAB0070 */  lw    $t3, 0x70($sp)
/* 0048FE10 00197202 */  srl   $t6, $t9, 8
/* 0048FE14 00187A00 */  sll   $t7, $t8, 8
/* 0048FE18 01EEC025 */  or    $t8, $t7, $t6
/* 0048FE1C A7B80068 */  sh    $t8, 0x68($sp)
/* 0048FE20 97B8006A */  lhu   $t8, 0x6a($sp)
/* 0048FE24 87AF006A */  lh    $t7, 0x6a($sp)
/* 0048FE28 8FAC0074 */  lw    $t4, 0x74($sp)
/* 0048FE2C 0018CA02 */  srl   $t9, $t8, 8
/* 0048FE30 000F7200 */  sll   $t6, $t7, 8
/* 0048FE34 01D97825 */  or    $t7, $t6, $t9
/* 0048FE38 000A7200 */  sll   $t6, $t2, 8
/* 0048FE3C 01C4C824 */  and   $t9, $t6, $a0
/* 0048FE40 A7AF006A */  sh    $t7, 0x6a($sp)
/* 0048FE44 000AC600 */  sll   $t8, $t2, 0x18
/* 0048FE48 03197825 */  or    $t7, $t8, $t9
/* 0048FE4C 000A7203 */  sra   $t6, $t2, 8
/* 0048FE50 31D8FF00 */  andi  $t8, $t6, 0xff00
/* 0048FE54 01F8C825 */  or    $t9, $t7, $t8
/* 0048FE58 000A7602 */  srl   $t6, $t2, 0x18
/* 0048FE5C 032E5025 */  or    $t2, $t9, $t6
/* 0048FE60 000BC200 */  sll   $t8, $t3, 8
/* 0048FE64 0304C824 */  and   $t9, $t8, $a0
/* 0048FE68 000B7E00 */  sll   $t7, $t3, 0x18
/* 0048FE6C 01F97025 */  or    $t6, $t7, $t9
/* 0048FE70 000BC203 */  sra   $t8, $t3, 8
/* 0048FE74 330FFF00 */  andi  $t7, $t8, 0xff00
/* 0048FE78 01CFC825 */  or    $t9, $t6, $t7
/* 0048FE7C 000BC602 */  srl   $t8, $t3, 0x18
/* 0048FE80 03385825 */  or    $t3, $t9, $t8
/* 0048FE84 000C7A00 */  sll   $t7, $t4, 8
/* 0048FE88 01E4C824 */  and   $t9, $t7, $a0
/* 0048FE8C 000C7600 */  sll   $t6, $t4, 0x18
/* 0048FE90 01D9C025 */  or    $t8, $t6, $t9
/* 0048FE94 000C7A03 */  sra   $t7, $t4, 8
/* 0048FE98 8FAD0078 */  lw    $t5, 0x78($sp)
/* 0048FE9C 31EEFF00 */  andi  $t6, $t7, 0xff00
/* 0048FEA0 030EC825 */  or    $t9, $t8, $t6
/* 0048FEA4 000C7E02 */  srl   $t7, $t4, 0x18
/* 0048FEA8 032F6025 */  or    $t4, $t9, $t7
/* 0048FEAC 000D7200 */  sll   $t6, $t5, 8
/* 0048FEB0 01C4C824 */  and   $t9, $t6, $a0
/* 0048FEB4 000DC600 */  sll   $t8, $t5, 0x18
/* 0048FEB8 03197825 */  or    $t7, $t8, $t9
/* 0048FEBC 000D7203 */  sra   $t6, $t5, 8
/* 0048FEC0 8FBF0080 */  lw    $ra, 0x80($sp)
/* 0048FEC4 31D8FF00 */  andi  $t8, $t6, 0xff00
/* 0048FEC8 01F8C825 */  or    $t9, $t7, $t8
/* 0048FECC 000D7602 */  srl   $t6, $t5, 0x18
/* 0048FED0 032E6825 */  or    $t5, $t9, $t6
/* 0048FED4 001FC200 */  sll   $t8, $ra, 8
/* 0048FED8 0304C824 */  and   $t9, $t8, $a0
/* 0048FEDC 001F7E00 */  sll   $t7, $ra, 0x18
/* 0048FEE0 01F97025 */  or    $t6, $t7, $t9
/* 0048FEE4 001FC203 */  sra   $t8, $ra, 8
/* 0048FEE8 8FB00084 */  lw    $s0, 0x84($sp)
/* 0048FEEC 330FFF00 */  andi  $t7, $t8, 0xff00
/* 0048FEF0 01CFC825 */  or    $t9, $t6, $t7
/* 0048FEF4 001FC602 */  srl   $t8, $ra, 0x18
/* 0048FEF8 0338F825 */  or    $ra, $t9, $t8
/* 0048FEFC 00107A00 */  sll   $t7, $s0, 8
/* 0048FF00 01E4C824 */  and   $t9, $t7, $a0
/* 0048FF04 00107600 */  sll   $t6, $s0, 0x18
/* 0048FF08 01D9C025 */  or    $t8, $t6, $t9
/* 0048FF0C 00107A03 */  sra   $t7, $s0, 8
/* 0048FF10 31EEFF00 */  andi  $t6, $t7, 0xff00
/* 0048FF14 030EC825 */  or    $t9, $t8, $t6
/* 0048FF18 00107E02 */  srl   $t7, $s0, 0x18
/* 0048FF1C 032F8025 */  or    $s0, $t9, $t7
/* 0048FF20 AFB00084 */  sw    $s0, 0x84($sp)
/* 0048FF24 AFBF0080 */  sw    $ra, 0x80($sp)
/* 0048FF28 AFAD0078 */  sw    $t5, 0x78($sp)
/* 0048FF2C AFAC0074 */  sw    $t4, 0x74($sp)
/* 0048FF30 AFAB0070 */  sw    $t3, 0x70($sp)
/* 0048FF34 AFAA006C */  sw    $t2, 0x6c($sp)
/* 0048FF38 AFA90064 */  sw    $t1, 0x64($sp)
/* 0048FF3C AFA80060 */  sw    $t0, 0x60($sp)
/* 0048FF40 AFA7005C */  sw    $a3, 0x5c($sp)
/* 0048FF44 AFA60058 */  sw    $a2, 0x58($sp)
/* 0048FF48 16A20043 */  bne   $s5, $v0, .L00490058
/* 0048FF4C AFA50054 */   sw    $a1, 0x54($sp)
/* 0048FF50 0220C825 */  move  $t9, $s1
/* 0048FF54 00607825 */  move  $t7, $v1
/* 0048FF58 26210048 */  addiu $at, $s1, 0x48
.L0048FF5C:
/* 0048FF5C 8F2E0000 */  lw    $t6, ($t9)
/* 0048FF60 2739000C */  addiu $t9, $t9, 0xc
/* 0048FF64 25EF000C */  addiu $t7, $t7, 0xc
/* 0048FF68 ADEEFFF4 */  sw    $t6, -0xc($t7)
/* 0048FF6C 8F38FFF8 */  lw    $t8, -8($t9)
/* 0048FF70 ADF8FFF8 */  sw    $t8, -8($t7)
/* 0048FF74 8F2EFFFC */  lw    $t6, -4($t9)
/* 0048FF78 1721FFF8 */  bne   $t9, $at, .L0048FF5C
/* 0048FF7C ADEEFFFC */   sw    $t6, -4($t7)

/* 0048FF80 8FB9007C */  lw    $t9, 0x7c($sp)
/* 0048FF84 0019C200 */  sll   $t8, $t9, 8
/* 0048FF88 03127024 */  and   $t6, $t8, $s2
/* 0048FF8C 00197E00 */  sll   $t7, $t9, 0x18
/* 0048FF90 01EEC025 */  or    $t8, $t7, $t6
/* 0048FF94 00197A02 */  srl   $t7, $t9, 8
/* 0048FF98 31EEFF00 */  andi  $t6, $t7, 0xff00
/* 0048FF9C 030E7825 */  or    $t7, $t8, $t6
/* 0048FFA0 0019C602 */  srl   $t8, $t9, 0x18

/* 0048FFA4 01F8C825 */  or    $t9, $t7, $t8    # swap_word(sp7C)
/* 0048FFA8 AFB9007C */  sw    $t9, 0x7c($sp)
/* 0048FFAC 906E003C */  lbu   $t6, 0x3c($v1)
/* 0048FFB0 0019C0C0 */  sll   $t8, $t9, 3      # lang
/* 0048FFB4 31D9FF07 */  andi  $t9, $t6, 0xff07
/* 0048FFB8 03197825 */  or    $t7, $t8, $t9
/* 0048FFBC A06F003C */  sb    $t7, 0x3c($v1)

/* 0048FFC0 8FAE007C */  lw    $t6, 0x7c($sp)   # wtf
/* 0048FFC4 000EC680 */  sll   $t8, $t6, 0x1a
/* 0048FFC8 0018CFC2 */  srl   $t9, $t8, 0x1f
/* 0048FFCC 9078003C */  lbu   $t8, 0x3c($v1)
/* 0048FFD0 00197880 */  sll   $t7, $t9, 2
/* 0048FFD4 31EE0004 */  andi  $t6, $t7, 4
/* 0048FFD8 3319FFFB */  andi  $t9, $t8, 0xfffb
/* 0048FFDC 01D97825 */  or    $t7, $t6, $t9
/* 0048FFE0 A06F003C */  sb    $t7, 0x3c($v1)

/* 0048FFE4 8FB8007C */  lw    $t8, 0x7c($sp)
/* 0048FFE8 00187640 */  sll   $t6, $t8, 0x19
/* 0048FFEC 000ECFC2 */  srl   $t9, $t6, 0x1f
/* 0048FFF0 906E003C */  lbu   $t6, 0x3c($v1)
/* 0048FFF4 00197840 */  sll   $t7, $t9, 1
/* 0048FFF8 31F80002 */  andi  $t8, $t7, 2
/* 0048FFFC 31D9FFFD */  andi  $t9, $t6, 0xfffd
/* 00490000 03197825 */  or    $t7, $t8, $t9
/* 00490004 A06F003C */  sb    $t7, 0x3c($v1)

/* 00490008 93AE007F */  lbu   $t6, 0x7f($sp)
/* 0049000C 000EC1C2 */  srl   $t8, $t6, 7
/* 00490010 33190001 */  andi  $t9, $t8, 1
/* 00490014 31EEFFFE */  andi  $t6, $t7, 0xfffe
/* 00490018 032EC025 */  or    $t8, $t9, $t6

/* 0049001C A078003C */  sb    $t8, 0x3c($v1)
/* 00490020 93B9007E */  lbu   $t9, 0x7e($sp)
/* 00490024 906F003D */  lbu   $t7, 0x3d($v1)
/* 00490028 0019C180 */  sll   $t8, $t9, 6
/* 0049002C 31F9FF3F */  andi  $t9, $t7, 0xff3f
/* 00490030 03197025 */  or    $t6, $t8, $t9

/* 00490034 A06E003D */  sb    $t6, 0x3d($v1)
/* 00490038 8FAF007C */  lw    $t7, 0x7c($sp)
/* 0049003C 000FCA82 */  srl   $t9, $t7, 0xa
/* 00490040 946F003E */  lhu   $t7, 0x3e($v1)
/* 00490044 332E1FFF */  andi  $t6, $t9, 0x1fff
/* 00490048 31F8E000 */  andi  $t8, $t7, 0xe000
/* 0049004C 01D8C825 */  or    $t9, $t6, $t8
/* 00490050 10000045 */  b     .L00490168
/* 00490054 A479003E */   sh    $t9, 0x3e($v1)

.L00490058:
/* 00490058 8C6F003C */  lw    $t7, 0x3c($v1)
/* 0049005C 93B9007F */  lbu   $t9, 0x7f($sp)
/* 00490060 26210048 */  addiu $at, $s1, 0x48
/* 00490064 000F76C2 */  srl   $t6, $t7, 0x1b
/* 00490068 31D8001F */  andi  $t8, $t6, 0x1f
/* 0049006C 332FFFE0 */  andi  $t7, $t9, 0xffe0
/* 00490070 030F7025 */  or    $t6, $t8, $t7
/* 00490074 A3AE007F */  sb    $t6, 0x7f($sp)
/* 00490078 8C79003C */  lw    $t9, 0x3c($v1)
/* 0049007C 0019C140 */  sll   $t8, $t9, 5
/* 00490080 00187FC2 */  srl   $t7, $t8, 0x1f
/* 00490084 000FC940 */  sll   $t9, $t7, 5
/* 00490088 33380020 */  andi  $t8, $t9, 0x20
/* 0049008C 01C07825 */  move  $t7, $t6
/* 00490090 31F900DF */  andi  $t9, $t7, 0xdf
/* 00490094 03197025 */  or    $t6, $t8, $t9
/* 00490098 A3AE007F */  sb    $t6, 0x7f($sp)
/* 0049009C 8C6F003C */  lw    $t7, 0x3c($v1)
/* 004900A0 000FC180 */  sll   $t8, $t7, 6
/* 004900A4 0018CFC2 */  srl   $t9, $t8, 0x1f
/* 004900A8 00197980 */  sll   $t7, $t9, 6
/* 004900AC 31F80040 */  andi  $t8, $t7, 0x40
/* 004900B0 01C0C825 */  move  $t9, $t6
/* 004900B4 332F00BF */  andi  $t7, $t9, 0xbf
/* 004900B8 030F7025 */  or    $t6, $t8, $t7
/* 004900BC A3AE007F */  sb    $t6, 0x7f($sp)
/* 004900C0 9078003C */  lbu   $t8, 0x3c($v1)
/* 004900C4 0018C9C0 */  sll   $t9, $t8, 7
/* 004900C8 01C0C025 */  move  $t8, $t6
/* 004900CC 330F007F */  andi  $t7, $t8, 0x7f
/* 004900D0 032F7025 */  or    $t6, $t9, $t7
/* 004900D4 A3AE007F */  sb    $t6, 0x7f($sp)
/* 004900D8 9078003D */  lbu   $t8, 0x3d($v1)
/* 004900DC 93AE007E */  lbu   $t6, 0x7e($sp)
/* 004900E0 0018C982 */  srl   $t9, $t8, 6
/* 004900E4 332F0003 */  andi  $t7, $t9, 3
/* 004900E8 31D8FFFC */  andi  $t8, $t6, 0xfffc
/* 004900EC 01F8C825 */  or    $t9, $t7, $t8
/* 004900F0 A3B9007E */  sb    $t9, 0x7e($sp)
/* 004900F4 8FB8007C */  lw    $t8, 0x7c($sp)
/* 004900F8 8C6E003C */  lw    $t6, 0x3c($v1)
/* 004900FC 0018CA82 */  srl   $t9, $t8, 0xa
/* 00490100 31CF1FFF */  andi  $t7, $t6, 0x1fff
/* 00490104 01F97026 */  xor   $t6, $t7, $t9
/* 00490108 000E7A80 */  sll   $t7, $t6, 0xa
/* 0049010C 01F8C826 */  xor   $t9, $t7, $t8
/* 00490110 00197A00 */  sll   $t7, $t9, 8
/* 00490114 01F2C024 */  and   $t8, $t7, $s2
/* 00490118 00197600 */  sll   $t6, $t9, 0x18
/* 0049011C 01D87825 */  or    $t7, $t6, $t8
/* 00490120 00197202 */  srl   $t6, $t9, 8
/* 00490124 31D8FF00 */  andi  $t8, $t6, 0xff00
/* 00490128 01F87025 */  or    $t6, $t7, $t8
/* 0049012C 00197E02 */  srl   $t7, $t9, 0x18
/* 00490130 01CFC025 */  or    $t8, $t6, $t7
/* 00490134 AFB9007C */  sw    $t9, 0x7c($sp)
/* 00490138 AFB8007C */  sw    $t8, 0x7c($sp)
/* 0049013C 0060C025 */  move  $t8, $v1
/* 00490140 02207825 */  move  $t7, $s1
.L00490144:
/* 00490144 8DEE0000 */  lw    $t6, ($t7)
/* 00490148 25EF000C */  addiu $t7, $t7, 0xc
/* 0049014C 2718000C */  addiu $t8, $t8, 0xc
/* 00490150 AF0EFFF4 */  sw    $t6, -0xc($t8)
/* 00490154 8DF9FFF8 */  lw    $t9, -8($t7)
/* 00490158 AF19FFF8 */  sw    $t9, -8($t8)
/* 0049015C 8DEEFFFC */  lw    $t6, -4($t7)
/* 00490160 15E1FFF8 */  bne   $t7, $at, .L00490144
/* 00490164 AF0EFFFC */   sw    $t6, -4($t8)
.L00490168:
/* 00490168 24630048 */  addiu $v1, $v1, 0x48
/* 0049016C 5473FEAC */  bnel  $v1, $s3, .L0048FC20
/* 00490170 0060C825 */   move  $t9, $v1
.L00490174:
/* 00490174 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00490178 8FB00018 */  lw    $s0, 0x18($sp)
/* 0049017C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00490180 8FB20020 */  lw    $s2, 0x20($sp)
/* 00490184 8FB30024 */  lw    $s3, 0x24($sp)
/* 00490188 8FB40028 */  lw    $s4, 0x28($sp)
/* 0049018C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00490190 03E00008 */  jr    $ra
/* 00490194 27BD0090 */   addiu $sp, $sp, 0x90
    .type swap_fd, @function
    .size swap_fd, .-swap_fd
    .end swap_fd
)"");
#endif

/*
0048D0E0 st_readst
*/
void swap_fi(pFIT pfi, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pfi[i] = swap_word(pfi[i]);
    }
}

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel swap_sym
    .ent swap_sym
    # 0048D0E0 st_readst
/* 004902CC 3C1C0FB9 */  .cpload $t9
/* 004902D0 279C9FC4 */  
/* 004902D4 0399E021 */  
/* 004902D8 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 004902DC 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 004902E0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004902E4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004902E8 AFB00018 */  sw    $s0, 0x18($sp)
/* 004902EC 00A08025 */  move  $s0, $a1
/* 004902F0 00C08825 */  move  $s1, $a2
/* 004902F4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004902F8 0320F809 */  jalr  $t9
/* 004902FC AFA40048 */   sw    $a0, 0x48($sp)
/* 00490300 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00490304 1A00008D */  blez  $s0, .L0049053C
/* 00490308 8FA40048 */   lw    $a0, 0x48($sp)
/* 0049030C 00107080 */  sll   $t6, $s0, 2
/* 00490310 01D07023 */  subu  $t6, $t6, $s0
/* 00490314 000E7080 */  sll   $t6, $t6, 2
/* 00490318 01C44021 */  addu  $t0, $t6, $a0
/* 0049031C 00801825 */  move  $v1, $a0
/* 00490320 3C0700FF */  lui   $a3, 0xff
/* 00490324 3C0600FF */  lui   $a2, 0xff
/* 00490328 27A50034 */  addiu $a1, $sp, 0x34
/* 0049032C 8C780000 */  lw    $t8, ($v1)
.L00490330:
/* 00490330 ACB80000 */  sw    $t8, ($a1)
/* 00490334 8C6F0004 */  lw    $t7, 4($v1)
/* 00490338 ACAF0004 */  sw    $t7, 4($a1)
/* 0049033C 8C780008 */  lw    $t8, 8($v1)
/* 00490340 ACB80008 */  sw    $t8, 8($a1)
/* 00490344 8FB90034 */  lw    $t9, 0x34($sp)
/* 00490348 00195200 */  sll   $t2, $t9, 8
/* 0049034C 01465824 */  and   $t3, $t2, $a2
/* 00490350 00194E00 */  sll   $t1, $t9, 0x18
/* 00490354 012B6025 */  or    $t4, $t1, $t3
/* 00490358 8FAB0038 */  lw    $t3, 0x38($sp)
/* 0049035C 00196A03 */  sra   $t5, $t9, 8
/* 00490360 31AEFF00 */  andi  $t6, $t5, 0xff00
/* 00490364 018E7825 */  or    $t7, $t4, $t6
/* 00490368 00195602 */  srl   $t2, $t9, 0x18
/* 0049036C 000B6A00 */  sll   $t5, $t3, 8
/* 00490370 01EA4825 */  or    $t1, $t7, $t2
/* 00490374 01A66024 */  and   $t4, $t5, $a2
/* 00490378 000BCE00 */  sll   $t9, $t3, 0x18
/* 0049037C 000BC203 */  sra   $t8, $t3, 8
/* 00490380 330FFF00 */  andi  $t7, $t8, 0xff00
/* 00490384 032C7025 */  or    $t6, $t9, $t4
/* 00490388 01CF5025 */  or    $t2, $t6, $t7
/* 0049038C 000B6E02 */  srl   $t5, $t3, 0x18
/* 00490390 014DC825 */  or    $t9, $t2, $t5
/* 00490394 AFA90034 */  sw    $t1, 0x34($sp)
/* 00490398 16220032 */  bne   $s1, $v0, .L00490464
/* 0049039C AFB90038 */   sw    $t9, 0x38($sp)
/* 004903A0 8CAB0000 */  lw    $t3, ($a1)
/* 004903A4 AC6B0000 */  sw    $t3, ($v1)
/* 004903A8 8CAC0004 */  lw    $t4, 4($a1)
/* 004903AC AC6C0004 */  sw    $t4, 4($v1)
/* 004903B0 8CAB0008 */  lw    $t3, 8($a1)
/* 004903B4 AC6B0008 */  sw    $t3, 8($v1)
/* 004903B8 8FB8003C */  lw    $t8, 0x3c($sp)
/* 004903BC 00187A00 */  sll   $t7, $t8, 8
/* 004903C0 01E74824 */  and   $t1, $t7, $a3
/* 004903C4 00187600 */  sll   $t6, $t8, 0x18
/* 004903C8 00186A02 */  srl   $t5, $t8, 8
/* 004903CC 31B9FF00 */  andi  $t9, $t5, 0xff00
/* 004903D0 01C95025 */  or    $t2, $t6, $t1
/* 004903D4 01596025 */  or    $t4, $t2, $t9
/* 004903D8 00185E02 */  srl   $t3, $t8, 0x18
/* 004903DC 018B7025 */  or    $t6, $t4, $t3
/* 004903E0 AFAE003C */  sw    $t6, 0x3c($sp)
/* 004903E4 906A0008 */  lbu   $t2, 8($v1)
/* 004903E8 000E6880 */  sll   $t5, $t6, 2
/* 004903EC 3159FF03 */  andi  $t9, $t2, 0xff03
/* 004903F0 01B9C025 */  or    $t8, $t5, $t9
/* 004903F4 A0780008 */  sb    $t8, 8($v1)
/* 004903F8 8FAC003C */  lw    $t4, 0x3c($sp)
/* 004903FC 946A0008 */  lhu   $t2, 8($v1)
/* 00490400 000C5D40 */  sll   $t3, $t4, 0x15
/* 00490404 000B7EC2 */  srl   $t7, $t3, 0x1b
/* 00490408 000F7140 */  sll   $t6, $t7, 5
/* 0049040C 31C903E0 */  andi  $t1, $t6, 0x3e0
/* 00490410 314DFC1F */  andi  $t5, $t2, 0xfc1f
/* 00490414 012DC825 */  or    $t9, $t1, $t5
/* 00490418 A4790008 */  sh    $t9, 8($v1)
/* 0049041C 8FB8003C */  lw    $t8, 0x3c($sp)
/* 00490420 906A0009 */  lbu   $t2, 9($v1)
/* 00490424 00186500 */  sll   $t4, $t8, 0x14
/* 00490428 000C5FC2 */  srl   $t3, $t4, 0x1f
/* 0049042C 000B7900 */  sll   $t7, $t3, 4
/* 00490430 31EE0010 */  andi  $t6, $t7, 0x10
/* 00490434 3149FFEF */  andi  $t1, $t2, 0xffef
/* 00490438 01C96825 */  or    $t5, $t6, $t1
/* 0049043C A06D0009 */  sb    $t5, 9($v1)
/* 00490440 8FB9003C */  lw    $t9, 0x3c($sp)
/* 00490444 8C640008 */  lw    $a0, 8($v1)
/* 00490448 0019C302 */  srl   $t8, $t9, 0xc
/* 0049044C 03046026 */  xor   $t4, $t8, $a0
/* 00490450 000C5B00 */  sll   $t3, $t4, 0xc
/* 00490454 000B7B02 */  srl   $t7, $t3, 0xc
/* 00490458 01E45026 */  xor   $t2, $t7, $a0
/* 0049045C 10000034 */  b     .L00490530
/* 00490460 AC6A0008 */   sw    $t2, 8($v1)
.L00490464:
/* 00490464 8C6E0008 */  lw    $t6, 8($v1)
/* 00490468 93B9003F */  lbu   $t9, 0x3f($sp)
/* 0049046C 3C01000F */  lui   $at, 0xf
/* 00490470 000E4E82 */  srl   $t1, $t6, 0x1a
/* 00490474 312D003F */  andi  $t5, $t1, 0x3f
/* 00490478 3338FFC0 */  andi  $t8, $t9, 0xffc0
/* 0049047C 01B86025 */  or    $t4, $t5, $t8
/* 00490480 A3AC003F */  sb    $t4, 0x3f($sp)
/* 00490484 8C6B0008 */  lw    $t3, 8($v1)
/* 00490488 97B9003E */  lhu   $t9, 0x3e($sp)
/* 0049048C 3421FFFF */  ori   $at, $at, 0xffff
/* 00490490 000B7980 */  sll   $t7, $t3, 6
/* 00490494 000F56C2 */  srl   $t2, $t7, 0x1b
/* 00490498 000A7180 */  sll   $t6, $t2, 6
/* 0049049C 31C907C0 */  andi  $t1, $t6, 0x7c0
/* 004904A0 332DF83F */  andi  $t5, $t9, 0xf83f
/* 004904A4 012DC025 */  or    $t8, $t1, $t5
/* 004904A8 A7B8003E */  sh    $t8, 0x3e($sp)
/* 004904AC 8C6C0008 */  lw    $t4, 8($v1)
/* 004904B0 93B9003E */  lbu   $t9, 0x3e($sp)
/* 004904B4 000C5AC0 */  sll   $t3, $t4, 0xb
/* 004904B8 000B7FC2 */  srl   $t7, $t3, 0x1f
/* 004904BC 000F50C0 */  sll   $t2, $t7, 3
/* 004904C0 314E0008 */  andi  $t6, $t2, 8
/* 004904C4 3329FFF7 */  andi  $t1, $t9, 0xfff7
/* 004904C8 01C96825 */  or    $t5, $t6, $t1
/* 004904CC A3AD003E */  sb    $t5, 0x3e($sp)
/* 004904D0 8C780008 */  lw    $t8, 8($v1)
/* 004904D4 8FAB003C */  lw    $t3, 0x3c($sp)
/* 004904D8 03016024 */  and   $t4, $t8, $at
/* 004904DC 000B7B02 */  srl   $t7, $t3, 0xc
/* 004904E0 018F5026 */  xor   $t2, $t4, $t7
/* 004904E4 000ACB00 */  sll   $t9, $t2, 0xc
/* 004904E8 032B7026 */  xor   $t6, $t9, $t3
/* 004904EC 000E6A00 */  sll   $t5, $t6, 8
/* 004904F0 01A7C024 */  and   $t8, $t5, $a3
/* 004904F4 000E4E00 */  sll   $t1, $t6, 0x18
/* 004904F8 000E7A02 */  srl   $t7, $t6, 8
/* 004904FC 31EAFF00 */  andi  $t2, $t7, 0xff00
/* 00490500 01386025 */  or    $t4, $t1, $t8
/* 00490504 018AC825 */  or    $t9, $t4, $t2
/* 00490508 000E5E02 */  srl   $t3, $t6, 0x18
/* 0049050C AFAE003C */  sw    $t6, 0x3c($sp)
/* 00490510 032B6825 */  or    $t5, $t9, $t3
/* 00490514 AFAD003C */  sw    $t5, 0x3c($sp)
/* 00490518 8CB80000 */  lw    $t8, ($a1)
/* 0049051C AC780000 */  sw    $t8, ($v1)
/* 00490520 8CA90004 */  lw    $t1, 4($a1)
/* 00490524 AC690004 */  sw    $t1, 4($v1)
/* 00490528 8CB80008 */  lw    $t8, 8($a1)
/* 0049052C AC780008 */  sw    $t8, 8($v1)
.L00490530:
/* 00490530 2463000C */  addiu $v1, $v1, 0xc
/* 00490534 5468FF7E */  bnel  $v1, $t0, .L00490330
/* 00490538 8C780000 */   lw    $t8, ($v1)
.L0049053C:
/* 0049053C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00490540 8FB00018 */  lw    $s0, 0x18($sp)
/* 00490544 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00490548 03E00008 */  jr    $ra
/* 0049054C 27BD0048 */   addiu $sp, $sp, 0x48
    .type swap_sym, @function
    .size swap_sym, .-swap_sym
    .end swap_sym
)"");
#endif

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel swap_ext
    .ent swap_ext
    # 0048D0E0 st_readst
/* 00490550 3C1C0FB9 */  .cpload $t9
/* 00490554 279C9D40 */  
/* 00490558 0399E021 */  
/* 0049055C 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00490560 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 00490564 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00490568 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0049056C AFB00018 */  sw    $s0, 0x18($sp)
/* 00490570 00A08025 */  move  $s0, $a1
/* 00490574 00C08825 */  move  $s1, $a2
/* 00490578 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0049057C 0320F809 */  jalr  $t9
/* 00490580 AFA40048 */   sw    $a0, 0x48($sp)
/* 00490584 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00490588 1A0000E6 */  blez  $s0, .L00490924
/* 0049058C 8FA40048 */   lw    $a0, 0x48($sp)
/* 00490590 00107100 */  sll   $t6, $s0, 4
/* 00490594 01C44021 */  addu  $t0, $t6, $a0
/* 00490598 00801825 */  move  $v1, $a0
/* 0049059C 3C0700FF */  lui   $a3, 0xff
/* 004905A0 27A60030 */  addiu $a2, $sp, 0x30
/* 004905A4 3C0500FF */  lui   $a1, 0xff
/* 004905A8 8C780000 */  lw    $t8, ($v1)
.L004905AC:
/* 004905AC ACD80000 */  sw    $t8, ($a2)
/* 004905B0 8C6F0004 */  lw    $t7, 4($v1)
/* 004905B4 ACCF0004 */  sw    $t7, 4($a2)
/* 004905B8 8C780008 */  lw    $t8, 8($v1)
/* 004905BC ACD80008 */  sw    $t8, 8($a2)
/* 004905C0 8C6F000C */  lw    $t7, 0xc($v1)
/* 004905C4 ACCF000C */  sw    $t7, 0xc($a2)
/* 004905C8 8FB90034 */  lw    $t9, 0x34($sp)
/* 004905CC 00195200 */  sll   $t2, $t9, 8
/* 004905D0 01475824 */  and   $t3, $t2, $a3
/* 004905D4 00194E00 */  sll   $t1, $t9, 0x18
/* 004905D8 012B6025 */  or    $t4, $t1, $t3
/* 004905DC 8FAB0038 */  lw    $t3, 0x38($sp)
/* 004905E0 00196A03 */  sra   $t5, $t9, 8
/* 004905E4 31AEFF00 */  andi  $t6, $t5, 0xff00
/* 004905E8 018E7825 */  or    $t7, $t4, $t6
/* 004905EC 00195602 */  srl   $t2, $t9, 0x18
/* 004905F0 000B6A00 */  sll   $t5, $t3, 8
/* 004905F4 01EA4825 */  or    $t1, $t7, $t2
/* 004905F8 01A76024 */  and   $t4, $t5, $a3
/* 004905FC 000BCE00 */  sll   $t9, $t3, 0x18
/* 00490600 000BC203 */  sra   $t8, $t3, 8
/* 00490604 330FFF00 */  andi  $t7, $t8, 0xff00
/* 00490608 032C7025 */  or    $t6, $t9, $t4
/* 0049060C 01CF5025 */  or    $t2, $t6, $t7
/* 00490610 000B6E02 */  srl   $t5, $t3, 0x18
/* 00490614 014DC825 */  or    $t9, $t2, $t5
/* 00490618 AFA90034 */  sw    $t1, 0x34($sp)
/* 0049061C 1622005E */  bne   $s1, $v0, .L00490798
/* 00490620 AFB90038 */   sw    $t9, 0x38($sp)
/* 00490624 8CCB0000 */  lw    $t3, ($a2)
/* 00490628 AC6B0000 */  sw    $t3, ($v1)
/* 0049062C 8CCC0004 */  lw    $t4, 4($a2)
/* 00490630 AC6C0004 */  sw    $t4, 4($v1)
/* 00490634 8CCB0008 */  lw    $t3, 8($a2)
/* 00490638 AC6B0008 */  sw    $t3, 8($v1)
/* 0049063C 8CCC000C */  lw    $t4, 0xc($a2)
/* 00490640 AC6C000C */  sw    $t4, 0xc($v1)
/* 00490644 8FB8003C */  lw    $t8, 0x3c($sp)
/* 00490648 00187A00 */  sll   $t7, $t8, 8
/* 0049064C 01E54824 */  and   $t1, $t7, $a1
/* 00490650 00187600 */  sll   $t6, $t8, 0x18
/* 00490654 00186A02 */  srl   $t5, $t8, 8
/* 00490658 31B9FF00 */  andi  $t9, $t5, 0xff00
/* 0049065C 01C95025 */  or    $t2, $t6, $t1
/* 00490660 01596025 */  or    $t4, $t2, $t9
/* 00490664 00185E02 */  srl   $t3, $t8, 0x18
/* 00490668 018B7025 */  or    $t6, $t4, $t3
/* 0049066C AFAE003C */  sw    $t6, 0x3c($sp)
/* 00490670 906A000C */  lbu   $t2, 0xc($v1)
/* 00490674 000E6880 */  sll   $t5, $t6, 2
/* 00490678 3159FF03 */  andi  $t9, $t2, 0xff03
/* 0049067C 01B9C025 */  or    $t8, $t5, $t9
/* 00490680 A078000C */  sb    $t8, 0xc($v1)
/* 00490684 8FAC003C */  lw    $t4, 0x3c($sp)
/* 00490688 946A000C */  lhu   $t2, 0xc($v1)
/* 0049068C 000C5D40 */  sll   $t3, $t4, 0x15
/* 00490690 000B7EC2 */  srl   $t7, $t3, 0x1b
/* 00490694 000F7140 */  sll   $t6, $t7, 5
/* 00490698 31C903E0 */  andi  $t1, $t6, 0x3e0
/* 0049069C 314DFC1F */  andi  $t5, $t2, 0xfc1f
/* 004906A0 012DC825 */  or    $t9, $t1, $t5
/* 004906A4 A479000C */  sh    $t9, 0xc($v1)
/* 004906A8 8FB8003C */  lw    $t8, 0x3c($sp)
/* 004906AC 906A000D */  lbu   $t2, 0xd($v1)
/* 004906B0 00186500 */  sll   $t4, $t8, 0x14
/* 004906B4 000C5FC2 */  srl   $t3, $t4, 0x1f
/* 004906B8 000B7900 */  sll   $t7, $t3, 4
/* 004906BC 31EE0010 */  andi  $t6, $t7, 0x10
/* 004906C0 3149FFEF */  andi  $t1, $t2, 0xffef
/* 004906C4 01C96825 */  or    $t5, $t6, $t1
/* 004906C8 A06D000D */  sb    $t5, 0xd($v1)
/* 004906CC 8FB9003C */  lw    $t9, 0x3c($sp)
/* 004906D0 8C64000C */  lw    $a0, 0xc($v1)
/* 004906D4 0019C302 */  srl   $t8, $t9, 0xc
/* 004906D8 03046026 */  xor   $t4, $t8, $a0
/* 004906DC 000C5B00 */  sll   $t3, $t4, 0xc
/* 004906E0 000B7B02 */  srl   $t7, $t3, 0xc
/* 004906E4 01E45026 */  xor   $t2, $t7, $a0
/* 004906E8 AC6A000C */  sw    $t2, 0xc($v1)
/* 004906EC 8FAE0030 */  lw    $t6, 0x30($sp)
/* 004906F0 000E6A00 */  sll   $t5, $t6, 8
/* 004906F4 01A5C824 */  and   $t9, $t5, $a1
/* 004906F8 000E4E00 */  sll   $t1, $t6, 0x18
/* 004906FC 000E6202 */  srl   $t4, $t6, 8
/* 00490700 318BFF00 */  andi  $t3, $t4, 0xff00
/* 00490704 0139C025 */  or    $t8, $t1, $t9
/* 00490708 030B7825 */  or    $t7, $t8, $t3
/* 0049070C 000E5602 */  srl   $t2, $t6, 0x18
/* 00490710 01EA6825 */  or    $t5, $t7, $t2
/* 00490714 AFAD0030 */  sw    $t5, 0x30($sp)
/* 00490718 87A90030 */  lh    $t1, 0x30($sp)
/* 0049071C 946E0000 */  lhu   $t6, ($v1)
/* 00490720 A4690002 */  sh    $t1, 2($v1)
/* 00490724 97B90032 */  lhu   $t9, 0x32($sp)
/* 00490728 31CFF800 */  andi  $t7, $t6, 0xf800
/* 0049072C 0019C0C2 */  srl   $t8, $t9, 3
/* 00490730 330B07FF */  andi  $t3, $t8, 0x7ff
/* 00490734 016F5025 */  or    $t2, $t3, $t7
/* 00490738 A46A0000 */  sh    $t2, ($v1)
/* 0049073C 90780000 */  lbu   $t8, ($v1)
/* 00490740 8FA90030 */  lw    $t1, 0x30($sp)
/* 00490744 330EFF7F */  andi  $t6, $t8, 0xff7f
/* 00490748 000961C0 */  sll   $t4, $t1, 7
/* 0049074C 018EC025 */  or    $t8, $t4, $t6
/* 00490750 A0780000 */  sb    $t8, ($v1)
/* 00490754 8FAF0030 */  lw    $t7, 0x30($sp)
/* 00490758 330C00BF */  andi  $t4, $t8, 0xbf
/* 0049075C 000F5780 */  sll   $t2, $t7, 0x1e
/* 00490760 000A6FC2 */  srl   $t5, $t2, 0x1f
/* 00490764 000D4980 */  sll   $t1, $t5, 6
/* 00490768 31390040 */  andi  $t9, $t1, 0x40
/* 0049076C 032CC025 */  or    $t8, $t9, $t4
/* 00490770 A0780000 */  sb    $t8, ($v1)
/* 00490774 8FAB0030 */  lw    $t3, 0x30($sp)
/* 00490778 331900DF */  andi  $t9, $t8, 0xdf
/* 0049077C 000B7F40 */  sll   $t7, $t3, 0x1d
/* 00490780 000F57C2 */  srl   $t2, $t7, 0x1f
/* 00490784 000A6940 */  sll   $t5, $t2, 5
/* 00490788 31A90020 */  andi  $t1, $t5, 0x20
/* 0049078C 01396025 */  or    $t4, $t1, $t9
/* 00490790 10000061 */  b     .L00490918
/* 00490794 A06C0000 */   sb    $t4, ($v1)
.L00490798:
/* 00490798 8C6E000C */  lw    $t6, 0xc($v1)
/* 0049079C 93AA003F */  lbu   $t2, 0x3f($sp)
/* 004907A0 3C01000F */  lui   $at, 0xf
/* 004907A4 000E5E82 */  srl   $t3, $t6, 0x1a
/* 004907A8 316F003F */  andi  $t7, $t3, 0x3f
/* 004907AC 314DFFC0 */  andi  $t5, $t2, 0xffc0
/* 004907B0 01EDC025 */  or    $t8, $t7, $t5
/* 004907B4 A3B8003F */  sb    $t8, 0x3f($sp)
/* 004907B8 8C69000C */  lw    $t1, 0xc($v1)
/* 004907BC 97AA003E */  lhu   $t2, 0x3e($sp)
/* 004907C0 3421FFFF */  ori   $at, $at, 0xffff
/* 004907C4 0009C980 */  sll   $t9, $t1, 6
/* 004907C8 001966C2 */  srl   $t4, $t9, 0x1b
/* 004907CC 000C7180 */  sll   $t6, $t4, 6
/* 004907D0 31CB07C0 */  andi  $t3, $t6, 0x7c0
/* 004907D4 314FF83F */  andi  $t7, $t2, 0xf83f
/* 004907D8 016F6825 */  or    $t5, $t3, $t7
/* 004907DC A7AD003E */  sh    $t5, 0x3e($sp)
/* 004907E0 8C78000C */  lw    $t8, 0xc($v1)
/* 004907E4 93AA003E */  lbu   $t2, 0x3e($sp)
/* 004907E8 00184AC0 */  sll   $t1, $t8, 0xb
/* 004907EC 0009CFC2 */  srl   $t9, $t1, 0x1f
/* 004907F0 001960C0 */  sll   $t4, $t9, 3
/* 004907F4 318E0008 */  andi  $t6, $t4, 8
/* 004907F8 314BFFF7 */  andi  $t3, $t2, 0xfff7
/* 004907FC 01CB7825 */  or    $t7, $t6, $t3
/* 00490800 A3AF003E */  sb    $t7, 0x3e($sp)
/* 00490804 8C6D000C */  lw    $t5, 0xc($v1)
/* 00490808 8FA9003C */  lw    $t1, 0x3c($sp)
/* 0049080C 01A1C024 */  and   $t8, $t5, $at
/* 00490810 0009CB02 */  srl   $t9, $t1, 0xc
/* 00490814 03196026 */  xor   $t4, $t8, $t9
/* 00490818 000C5300 */  sll   $t2, $t4, 0xc
/* 0049081C 01497026 */  xor   $t6, $t2, $t1
/* 00490820 000E7A00 */  sll   $t7, $t6, 8
/* 00490824 01E56824 */  and   $t5, $t7, $a1
/* 00490828 000E5E00 */  sll   $t3, $t6, 0x18
/* 0049082C 000ECA02 */  srl   $t9, $t6, 8
/* 00490830 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490834 016DC025 */  or    $t8, $t3, $t5
/* 00490838 030C5025 */  or    $t2, $t8, $t4
/* 0049083C 000E4E02 */  srl   $t1, $t6, 0x18
/* 00490840 AFAE003C */  sw    $t6, 0x3c($sp)
/* 00490844 01497825 */  or    $t7, $t2, $t1
/* 00490848 AFAF003C */  sw    $t7, 0x3c($sp)
/* 0049084C 946B0002 */  lhu   $t3, 2($v1)
/* 00490850 97AE0032 */  lhu   $t6, 0x32($sp)
/* 00490854 A7AB0030 */  sh    $t3, 0x30($sp)
/* 00490858 946D0000 */  lhu   $t5, ($v1)
/* 0049085C 31CA0007 */  andi  $t2, $t6, 7
/* 00490860 31B907FF */  andi  $t9, $t5, 0x7ff
/* 00490864 001960C0 */  sll   $t4, $t9, 3
/* 00490868 018A4825 */  or    $t1, $t4, $t2
/* 0049086C A7A90032 */  sh    $t1, 0x32($sp)
/* 00490870 8C6F0000 */  lw    $t7, ($v1)
/* 00490874 93AE0033 */  lbu   $t6, 0x33($sp)
/* 00490878 000F5880 */  sll   $t3, $t7, 2
/* 0049087C 000B6FC2 */  srl   $t5, $t3, 0x1f
/* 00490880 000DC880 */  sll   $t9, $t5, 2
/* 00490884 33380004 */  andi  $t8, $t9, 4
/* 00490888 31CCFFFB */  andi  $t4, $t6, 0xfffb
/* 0049088C 030C7025 */  or    $t6, $t8, $t4
/* 00490890 A3AE0033 */  sb    $t6, 0x33($sp)
/* 00490894 8C690000 */  lw    $t1, ($v1)
/* 00490898 31D800FD */  andi  $t8, $t6, 0xfd
/* 0049089C 00097840 */  sll   $t7, $t1, 1
/* 004908A0 000F5FC2 */  srl   $t3, $t7, 0x1f
/* 004908A4 000B6840 */  sll   $t5, $t3, 1
/* 004908A8 31B90002 */  andi  $t9, $t5, 2
/* 004908AC 03386825 */  or    $t5, $t9, $t8
/* 004908B0 A3AD0033 */  sb    $t5, 0x33($sp)
/* 004908B4 8C690000 */  lw    $t1, ($v1)
/* 004908B8 31AA00FE */  andi  $t2, $t5, 0xfe
/* 004908BC 00097FC2 */  srl   $t7, $t1, 0x1f
/* 004908C0 31EB0001 */  andi  $t3, $t7, 1
/* 004908C4 016A7025 */  or    $t6, $t3, $t2
/* 004908C8 A3AE0033 */  sb    $t6, 0x33($sp)
/* 004908CC 8FB90030 */  lw    $t9, 0x30($sp)
/* 004908D0 00194A00 */  sll   $t1, $t9, 8
/* 004908D4 01257824 */  and   $t7, $t1, $a1
/* 004908D8 0019C600 */  sll   $t8, $t9, 0x18
/* 004908DC 00196A02 */  srl   $t5, $t9, 8
/* 004908E0 31ABFF00 */  andi  $t3, $t5, 0xff00
/* 004908E4 030F6025 */  or    $t4, $t8, $t7
/* 004908E8 018B5025 */  or    $t2, $t4, $t3
/* 004908EC 00197602 */  srl   $t6, $t9, 0x18
/* 004908F0 014E4825 */  or    $t1, $t2, $t6
/* 004908F4 AFA90030 */  sw    $t1, 0x30($sp)
/* 004908F8 8CCF0000 */  lw    $t7, ($a2)
/* 004908FC AC6F0000 */  sw    $t7, ($v1)
/* 00490900 8CD80004 */  lw    $t8, 4($a2)
/* 00490904 AC780004 */  sw    $t8, 4($v1)
/* 00490908 8CCF0008 */  lw    $t7, 8($a2)
/* 0049090C AC6F0008 */  sw    $t7, 8($v1)
/* 00490910 8CD8000C */  lw    $t8, 0xc($a2)
/* 00490914 AC78000C */  sw    $t8, 0xc($v1)
.L00490918:
/* 00490918 24630010 */  addiu $v1, $v1, 0x10
/* 0049091C 5468FF23 */  bnel  $v1, $t0, .L004905AC
/* 00490920 8C780000 */   lw    $t8, ($v1)
.L00490924:
/* 00490924 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00490928 8FB00018 */  lw    $s0, 0x18($sp)
/* 0049092C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00490930 03E00008 */  jr    $ra
/* 00490934 27BD0048 */   addiu $sp, $sp, 0x48
    .type swap_ext, @function
    .size swap_ext, .-swap_ext
    .end swap_ext
)"");
#endif

/*
0048D0E0 st_readst
*/
void swap_pd(PDR *pdr, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pdr[i].adr          = swap_word(pdr[i].adr);
        pdr[i].isym         = swap_word(pdr[i].isym);
        pdr[i].iline        = swap_word(pdr[i].iline);
        pdr[i].regmask      = swap_word(pdr[i].regmask);
        pdr[i].regoffset    = swap_word(pdr[i].regoffset);
        pdr[i].iopt         = swap_word(pdr[i].iopt);
        pdr[i].fregmask     = swap_word(pdr[i].fregmask);
        pdr[i].fregoffset   = swap_word(pdr[i].fregoffset);
        pdr[i].frameoffset  = swap_word(pdr[i].frameoffset);
        pdr[i].framereg     = swap_half(pdr[i].framereg);
        pdr[i].pcreg        = swap_half(pdr[i].pcreg);
        pdr[i].lnLow        = swap_word(pdr[i].lnLow);
        pdr[i].lnHigh       = swap_word(pdr[i].lnHigh);
        pdr[i].cbLineOffset = swap_word(pdr[i].cbLineOffset);
    }
}

/*
0048D0E0 st_readst
*/
void swap_dn(DNR *dn, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        dn[i].rfd   = swap_word(dn[i].rfd);
        dn[i].index = swap_word(dn[i].index);
    }
}

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel swap_rpd
    .ent swap_rpd
/* 00490D00 18A0006D */  blez  $a1, .L00490EB8
/* 00490D04 AFA60008 */   sw    $a2, 8($sp)
/* 00490D08 00057080 */  sll   $t6, $a1, 2
/* 00490D0C 01C57021 */  addu  $t6, $t6, $a1
/* 00490D10 000E70C0 */  sll   $t6, $t6, 3
/* 00490D14 01C43021 */  addu  $a2, $t6, $a0
/* 00490D18 00801025 */  move  $v0, $a0
/* 00490D1C 3C0800FF */  lui   $t0, 0xff
/* 00490D20 3C0700FF */  lui   $a3, 0xff
.L00490D24:
/* 00490D24 8C430000 */  lw    $v1, ($v0)
/* 00490D28 8C440004 */  lw    $a0, 4($v0)
/* 00490D2C 24420028 */  addiu $v0, $v0, 0x28
/* 00490D30 00037E02 */  srl   $t7, $v1, 0x18
/* 00490D34 0003C600 */  sll   $t8, $v1, 0x18
/* 00490D38 00034A00 */  sll   $t1, $v1, 8
/* 00490D3C 01275024 */  and   $t2, $t1, $a3
/* 00490D40 01F8C825 */  or    $t9, $t7, $t8
/* 00490D44 032A5825 */  or    $t3, $t9, $t2
/* 00490D48 00036202 */  srl   $t4, $v1, 8
/* 00490D4C 0004C200 */  sll   $t8, $a0, 8
/* 00490D50 8C43FFE0 */  lw    $v1, -0x20($v0)
/* 00490D54 318DFF00 */  andi  $t5, $t4, 0xff00
/* 00490D58 03084824 */  and   $t1, $t8, $t0
/* 00490D5C 00047E00 */  sll   $t7, $a0, 0x18
/* 00490D60 016D7025 */  or    $t6, $t3, $t5
/* 00490D64 01E9C825 */  or    $t9, $t7, $t1
/* 00490D68 00045203 */  sra   $t2, $a0, 8
/* 00490D6C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490D70 032C5825 */  or    $t3, $t9, $t4
/* 00490D74 00046E02 */  srl   $t5, $a0, 0x18
/* 00490D78 00037A00 */  sll   $t7, $v1, 8
/* 00490D7C 8C44FFE4 */  lw    $a0, -0x1c($v0)
/* 00490D80 AC4EFFD8 */  sw    $t6, -0x28($v0)
/* 00490D84 01E84824 */  and   $t1, $t7, $t0
/* 00490D88 0003C600 */  sll   $t8, $v1, 0x18
/* 00490D8C 01AB7025 */  or    $t6, $t5, $t3
/* 00490D90 03095025 */  or    $t2, $t8, $t1
/* 00490D94 0003CA03 */  sra   $t9, $v1, 8
/* 00490D98 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490D9C 014C6825 */  or    $t5, $t2, $t4
/* 00490DA0 00035E02 */  srl   $t3, $v1, 0x18
/* 00490DA4 0004C200 */  sll   $t8, $a0, 8
/* 00490DA8 8C43FFE8 */  lw    $v1, -0x18($v0)
/* 00490DAC AC4EFFDC */  sw    $t6, -0x24($v0)
/* 00490DB0 03084824 */  and   $t1, $t8, $t0
/* 00490DB4 00047E00 */  sll   $t7, $a0, 0x18
/* 00490DB8 016D7025 */  or    $t6, $t3, $t5
/* 00490DBC 01E9C825 */  or    $t9, $t7, $t1
/* 00490DC0 00045203 */  sra   $t2, $a0, 8
/* 00490DC4 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490DC8 032C5825 */  or    $t3, $t9, $t4
/* 00490DCC 00046E02 */  srl   $t5, $a0, 0x18
/* 00490DD0 00037A00 */  sll   $t7, $v1, 8
/* 00490DD4 8C44FFEC */  lw    $a0, -0x14($v0)
/* 00490DD8 AC4EFFE0 */  sw    $t6, -0x20($v0)
/* 00490DDC 01E84824 */  and   $t1, $t7, $t0
/* 00490DE0 0003C600 */  sll   $t8, $v1, 0x18
/* 00490DE4 01AB7025 */  or    $t6, $t5, $t3
/* 00490DE8 03095025 */  or    $t2, $t8, $t1
/* 00490DEC 0003CA03 */  sra   $t9, $v1, 8
/* 00490DF0 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490DF4 014C6825 */  or    $t5, $t2, $t4
/* 00490DF8 00035E02 */  srl   $t3, $v1, 0x18
/* 00490DFC AC4EFFE4 */  sw    $t6, -0x1c($v0)
/* 00490E00 0004C200 */  sll   $t8, $a0, 8
/* 00490E04 8443FFF0 */  lh    $v1, -0x10($v0)
/* 00490E08 016D7025 */  or    $t6, $t3, $t5
/* 00490E0C 03084824 */  and   $t1, $t8, $t0
/* 00490E10 00045203 */  sra   $t2, $a0, 8
/* 00490E14 00047E00 */  sll   $t7, $a0, 0x18
/* 00490E18 01E9C825 */  or    $t9, $t7, $t1
/* 00490E1C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490E20 032C5825 */  or    $t3, $t9, $t4
/* 00490E24 00046E02 */  srl   $t5, $a0, 0x18
/* 00490E28 AC4EFFE8 */  sw    $t6, -0x18($v0)
/* 00490E2C 00037A00 */  sll   $t7, $v1, 8
/* 00490E30 8C44FFF4 */  lw    $a0, -0xc($v0)
/* 00490E34 01AB7025 */  or    $t6, $t5, $t3
/* 00490E38 01E84824 */  and   $t1, $t7, $t0
/* 00490E3C 0003C600 */  sll   $t8, $v1, 0x18
/* 00490E40 03095025 */  or    $t2, $t8, $t1
/* 00490E44 0003CA03 */  sra   $t9, $v1, 8
/* 00490E48 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490E4C 00035E02 */  srl   $t3, $v1, 0x18
/* 00490E50 AC4EFFEC */  sw    $t6, -0x14($v0)
/* 00490E54 014C6825 */  or    $t5, $t2, $t4
/* 00490E58 0004C200 */  sll   $t8, $a0, 8
/* 00490E5C 8C43FFFC */  lw    $v1, -4($v0)
/* 00490E60 016D7025 */  or    $t6, $t3, $t5
/* 00490E64 03084824 */  and   $t1, $t8, $t0
/* 00490E68 00047E00 */  sll   $t7, $a0, 0x18
/* 00490E6C 01E9C825 */  or    $t9, $t7, $t1
/* 00490E70 00045203 */  sra   $t2, $a0, 8
/* 00490E74 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490E78 A44EFFF0 */  sh    $t6, -0x10($v0)
/* 00490E7C 032C5825 */  or    $t3, $t9, $t4
/* 00490E80 00046E02 */  srl   $t5, $a0, 0x18
/* 00490E84 01AB7025 */  or    $t6, $t5, $t3
/* 00490E88 00037A00 */  sll   $t7, $v1, 8
/* 00490E8C 01E84824 */  and   $t1, $t7, $t0
/* 00490E90 0003CA03 */  sra   $t9, $v1, 8
/* 00490E94 0003C600 */  sll   $t8, $v1, 0x18
/* 00490E98 03095025 */  or    $t2, $t8, $t1
/* 00490E9C 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490EA0 AC4EFFF4 */  sw    $t6, -0xc($v0)
/* 00490EA4 014C6825 */  or    $t5, $t2, $t4
/* 00490EA8 00035E02 */  srl   $t3, $v1, 0x18
/* 00490EAC 016D7025 */  or    $t6, $t3, $t5
/* 00490EB0 1446FF9C */  bne   $v0, $a2, .L00490D24
/* 00490EB4 AC4EFFFC */   sw    $t6, -4($v0)
.L00490EB8:
/* 00490EB8 03E00008 */  jr    $ra
/* 00490EBC 00000000 */   nop   
    .type swap_rpd, @function
    .size swap_rpd, .-swap_rpd
    .end swap_rpd
)"");

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel swap_opt
    .ent swap_opt
    # 0048D0E0 st_readst
/* 00490EC0 3C1C0FB9 */  .cpload $t9
/* 00490EC4 279C93D0 */  
/* 00490EC8 0399E021 */  
/* 00490ECC 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00490ED0 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 00490ED4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00490ED8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00490EDC AFB00018 */  sw    $s0, 0x18($sp)
/* 00490EE0 00A08025 */  move  $s0, $a1
/* 00490EE4 00C08825 */  move  $s1, $a2
/* 00490EE8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00490EEC 0320F809 */  jalr  $t9
/* 00490EF0 AFA40048 */   sw    $a0, 0x48($sp)
/* 00490EF4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00490EF8 1A00008C */  blez  $s0, .L0049112C
/* 00490EFC 8FA40048 */   lw    $a0, 0x48($sp)
/* 00490F00 00107080 */  sll   $t6, $s0, 2
/* 00490F04 01D07023 */  subu  $t6, $t6, $s0
/* 00490F08 000E7080 */  sll   $t6, $t6, 2
/* 00490F0C 01C44021 */  addu  $t0, $t6, $a0
/* 00490F10 00801825 */  move  $v1, $a0
/* 00490F14 27A70034 */  addiu $a3, $sp, 0x34
/* 00490F18 3C0600FF */  lui   $a2, 0xff
/* 00490F1C 8C780000 */  lw    $t8, ($v1)
.L00490F20:
/* 00490F20 ACF80000 */  sw    $t8, ($a3)
/* 00490F24 8C6F0004 */  lw    $t7, 4($v1)
/* 00490F28 ACEF0004 */  sw    $t7, 4($a3)
/* 00490F2C 8C780008 */  lw    $t8, 8($v1)
/* 00490F30 ACF80008 */  sw    $t8, 8($a3)
/* 00490F34 8FB9003C */  lw    $t9, 0x3c($sp)
/* 00490F38 00195200 */  sll   $t2, $t9, 8
/* 00490F3C 01465824 */  and   $t3, $t2, $a2
/* 00490F40 00194E00 */  sll   $t1, $t9, 0x18
/* 00490F44 00196A02 */  srl   $t5, $t9, 8
/* 00490F48 31AEFF00 */  andi  $t6, $t5, 0xff00
/* 00490F4C 012B6025 */  or    $t4, $t1, $t3
/* 00490F50 018E7825 */  or    $t7, $t4, $t6
/* 00490F54 0019C602 */  srl   $t8, $t9, 0x18
/* 00490F58 01F85025 */  or    $t2, $t7, $t8
/* 00490F5C 16220038 */  bne   $s1, $v0, .L00491040
/* 00490F60 AFAA003C */   sw    $t2, 0x3c($sp)
/* 00490F64 8CEB0000 */  lw    $t3, ($a3)
/* 00490F68 3C0100FF */  lui   $at, 0xff
/* 00490F6C 3421FFFF */  ori   $at, $at, 0xffff
/* 00490F70 AC6B0000 */  sw    $t3, ($v1)
/* 00490F74 8CE90004 */  lw    $t1, 4($a3)
/* 00490F78 AC690004 */  sw    $t1, 4($v1)
/* 00490F7C 8CEB0008 */  lw    $t3, 8($a3)
/* 00490F80 AC6B0008 */  sw    $t3, 8($v1)
/* 00490F84 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00490F88 000D7200 */  sll   $t6, $t5, 8
/* 00490F8C 01C6C824 */  and   $t9, $t6, $a2
/* 00490F90 000D6600 */  sll   $t4, $t5, 0x18
/* 00490F94 01997825 */  or    $t7, $t4, $t9
/* 00490F98 8FAC0038 */  lw    $t4, 0x38($sp)
/* 00490F9C 000DC202 */  srl   $t8, $t5, 8
/* 00490FA0 330AFF00 */  andi  $t2, $t8, 0xff00
/* 00490FA4 01EA4825 */  or    $t1, $t7, $t2
/* 00490FA8 000D5E02 */  srl   $t3, $t5, 0x18
/* 00490FAC 012B7025 */  or    $t6, $t1, $t3
/* 00490FB0 000CC200 */  sll   $t8, $t4, 8
/* 00490FB4 03067824 */  and   $t7, $t8, $a2
/* 00490FB8 000CCE00 */  sll   $t9, $t4, 0x18
/* 00490FBC AFAE0034 */  sw    $t6, 0x34($sp)
/* 00490FC0 032F5025 */  or    $t2, $t9, $t7
/* 00490FC4 000C6A02 */  srl   $t5, $t4, 8
/* 00490FC8 31A9FF00 */  andi  $t1, $t5, 0xff00
/* 00490FCC 93B90034 */  lbu   $t9, 0x34($sp)
/* 00490FD0 01495825 */  or    $t3, $t2, $t1
/* 00490FD4 000C7602 */  srl   $t6, $t4, 0x18
/* 00490FD8 016EC025 */  or    $t8, $t3, $t6
/* 00490FDC AFB80038 */  sw    $t8, 0x38($sp)
/* 00490FE0 A0790000 */  sb    $t9, ($v1)
/* 00490FE4 8FAF0034 */  lw    $t7, 0x34($sp)
/* 00490FE8 8C640000 */  lw    $a0, ($v1)
/* 00490FEC 8C650004 */  lw    $a1, 4($v1)
/* 00490FF0 01E16824 */  and   $t5, $t7, $at
/* 00490FF4 01A45026 */  xor   $t2, $t5, $a0
/* 00490FF8 000A4A00 */  sll   $t1, $t2, 8
/* 00490FFC 00096202 */  srl   $t4, $t1, 8
/* 00491000 01845826 */  xor   $t3, $t4, $a0
/* 00491004 AC6B0000 */  sw    $t3, ($v1)
/* 00491008 8FAE0038 */  lw    $t6, 0x38($sp)
/* 0049100C 000EC302 */  srl   $t8, $t6, 0xc
/* 00491010 0305C826 */  xor   $t9, $t8, $a1
/* 00491014 00197B00 */  sll   $t7, $t9, 0xc
/* 00491018 000F6B02 */  srl   $t5, $t7, 0xc
/* 0049101C 01A55026 */  xor   $t2, $t5, $a1
/* 00491020 AC6A0004 */  sw    $t2, 4($v1)
/* 00491024 94780004 */  lhu   $t8, 4($v1)
/* 00491028 8FAC0038 */  lw    $t4, 0x38($sp)
/* 0049102C 3319000F */  andi  $t9, $t8, 0xf
/* 00491030 000C7100 */  sll   $t6, $t4, 4
/* 00491034 01D97825 */  or    $t7, $t6, $t9
/* 00491038 10000039 */  b     .L00491120
/* 0049103C A46F0004 */   sh    $t7, 4($v1)
.L00491040:
/* 00491040 906D0000 */  lbu   $t5, ($v1)
/* 00491044 3C0100FF */  lui   $at, 0xff
/* 00491048 3421FFFF */  ori   $at, $at, 0xffff
/* 0049104C A3AD0034 */  sb    $t5, 0x34($sp)
/* 00491050 8C6A0000 */  lw    $t2, ($v1)
/* 00491054 8FAC0034 */  lw    $t4, 0x34($sp)
/* 00491058 01414824 */  and   $t1, $t2, $at
/* 0049105C 012C5826 */  xor   $t3, $t1, $t4
/* 00491060 000BC200 */  sll   $t8, $t3, 8
/* 00491064 00187202 */  srl   $t6, $t8, 8
/* 00491068 01CCC826 */  xor   $t9, $t6, $t4
/* 0049106C AFB90034 */  sw    $t9, 0x34($sp)
/* 00491070 8C6F0004 */  lw    $t7, 4($v1)
/* 00491074 8FAA0038 */  lw    $t2, 0x38($sp)
/* 00491078 3C01000F */  lui   $at, 0xf
/* 0049107C 3421FFFF */  ori   $at, $at, 0xffff
/* 00491080 01E16824 */  and   $t5, $t7, $at
/* 00491084 000A4B02 */  srl   $t1, $t2, 0xc
/* 00491088 01A95826 */  xor   $t3, $t5, $t1
/* 0049108C 000BC300 */  sll   $t8, $t3, 0xc
/* 00491090 030A7026 */  xor   $t6, $t8, $t2
/* 00491094 AFAE0038 */  sw    $t6, 0x38($sp)
/* 00491098 8C6C0004 */  lw    $t4, 4($v1)
/* 0049109C 97A9003A */  lhu   $t1, 0x3a($sp)
/* 004910A0 00197200 */  sll   $t6, $t9, 8
/* 004910A4 000C7D02 */  srl   $t7, $t4, 0x14
/* 004910A8 31ED0FFF */  andi  $t5, $t7, 0xfff
/* 004910AC 312BF000 */  andi  $t3, $t1, 0xf000
/* 004910B0 01ABC025 */  or    $t8, $t5, $t3
/* 004910B4 01C66024 */  and   $t4, $t6, $a2
/* 004910B8 00195600 */  sll   $t2, $t9, 0x18
/* 004910BC A7B8003A */  sh    $t8, 0x3a($sp)
/* 004910C0 014C7825 */  or    $t7, $t2, $t4
/* 004910C4 8FAA0038 */  lw    $t2, 0x38($sp)
/* 004910C8 00194A02 */  srl   $t1, $t9, 8
/* 004910CC 312DFF00 */  andi  $t5, $t1, 0xff00
/* 004910D0 01ED5825 */  or    $t3, $t7, $t5
/* 004910D4 0019C602 */  srl   $t8, $t9, 0x18
/* 004910D8 01787025 */  or    $t6, $t3, $t8
/* 004910DC 000A4A00 */  sll   $t1, $t2, 8
/* 004910E0 01267824 */  and   $t7, $t1, $a2
/* 004910E4 000ACA02 */  srl   $t9, $t2, 8
/* 004910E8 000A6600 */  sll   $t4, $t2, 0x18
/* 004910EC AFAE0034 */  sw    $t6, 0x34($sp)
/* 004910F0 018F6825 */  or    $t5, $t4, $t7
/* 004910F4 332BFF00 */  andi  $t3, $t9, 0xff00
/* 004910F8 01ABC025 */  or    $t8, $t5, $t3
/* 004910FC 000A7602 */  srl   $t6, $t2, 0x18
/* 00491100 030E4825 */  or    $t1, $t8, $t6
/* 00491104 AFA90038 */  sw    $t1, 0x38($sp)
/* 00491108 8CEF0000 */  lw    $t7, ($a3)
/* 0049110C AC6F0000 */  sw    $t7, ($v1)
/* 00491110 8CEC0004 */  lw    $t4, 4($a3)
/* 00491114 AC6C0004 */  sw    $t4, 4($v1)
/* 00491118 8CEF0008 */  lw    $t7, 8($a3)
/* 0049111C AC6F0008 */  sw    $t7, 8($v1)
.L00491120:
/* 00491120 2463000C */  addiu $v1, $v1, 0xc
/* 00491124 5468FF7E */  bnel  $v1, $t0, .L00490F20
/* 00491128 8C780000 */   lw    $t8, ($v1)
.L0049112C:
/* 0049112C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00491130 8FB00018 */  lw    $s0, 0x18($sp)
/* 00491134 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00491138 03E00008 */  jr    $ra
/* 0049113C 27BD0048 */   addiu $sp, $sp, 0x48
    .type swap_opt, @function
    .size swap_opt, .-swap_opt
    .end swap_opt
)"");
#endif

#if 0
glabel swap_aux
    .ent swap_aux
/* 00491140 3C1C0FB9 */  .cpload $t9
/* 00491144 279C9150 */  
/* 00491148 0399E021 */  
/* 0049114C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00491150 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 00491154 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00491158 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0049115C AFA50034 */  sw    $a1, 0x34($sp)
/* 00491160 AFA60038 */  sw    $a2, 0x38($sp)
/* 00491164 0320F809 */  jalr  $t9
/* 00491168 AFA40030 */   sw    $a0, 0x30($sp)
/* 0049116C 8FAE0038 */  lw    $t6, 0x38($sp)
/* 00491170 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00491174 8FA40030 */  lw    $a0, 0x30($sp)
/* 00491178 11C20009 */  beq   $t6, $v0, .L004911A0
/* 0049117C 8FAF0034 */   lw    $t7, 0x34($sp)
/* 00491180 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00491184 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00491188 8F858044 */  lw    $a1, %got(RO_1000F430)($gp)
/* 0049118C 24840020 */  addiu $a0, $a0, 0x20
/* 00491190 0320F809 */  jalr  $t9
/* 00491194 24A5F430 */   addiu $a1, %lo(RO_1000F430) # addiu $a1, $a1, -0xbd0
/* 00491198 1000007C */  b     .L0049138C
/* 0049119C 8FBC0018 */   lw    $gp, 0x18($sp)
.L004911A0:
/* 004911A0 2DE10007 */  sltiu $at, $t7, 7
/* 004911A4 5020006E */  beql  $at, $zero, .L00491360
/* 004911A8 8C820000 */   lw    $v0, ($a0)
/* 004911AC 8F818044 */  lw    $at, %got(jtbl_1000F464)($gp)
/* 004911B0 000F7880 */  sll   $t7, $t7, 2
/* 004911B4 002F0821 */  addu  $at, $at, $t7
/* 004911B8 8C2FF464 */  lw    $t7, %lo(jtbl_1000F464)($at)
/* 004911BC 01FC7821 */  addu  $t7, $t7, $gp
/* 004911C0 01E00008 */  jr    $t7
/* 004911C4 00000000 */   nop   
.L004911C8:
/* 004911C8 8C880000 */  lw    $t0, ($a0)
/* 004911CC 27B8002C */  addiu $t8, $sp, 0x2c
/* 004911D0 3C0100FF */  lui   $at, 0xff
/* 004911D4 AF080000 */  sw    $t0, ($t8)
/* 004911D8 8FA9002C */  lw    $t1, 0x2c($sp)
/* 004911DC 00095A00 */  sll   $t3, $t1, 8
/* 004911E0 01616024 */  and   $t4, $t3, $at
/* 004911E4 00095600 */  sll   $t2, $t1, 0x18
/* 004911E8 00097202 */  srl   $t6, $t1, 8
/* 004911EC 31CFFF00 */  andi  $t7, $t6, 0xff00
/* 004911F0 014C6825 */  or    $t5, $t2, $t4
/* 004911F4 01AFC025 */  or    $t8, $t5, $t7
/* 004911F8 0009CE02 */  srl   $t9, $t1, 0x18
/* 004911FC 03194025 */  or    $t0, $t8, $t9
/* 00491200 AFA8002C */  sw    $t0, 0x2c($sp)
/* 00491204 908C0003 */  lbu   $t4, 3($a0)
/* 00491208 00085F02 */  srl   $t3, $t0, 0x1c
/* 0049120C 316A000F */  andi  $t2, $t3, 0xf
/* 00491210 318EFFF0 */  andi  $t6, $t4, 0xfff0
/* 00491214 014E4025 */  or    $t0, $t2, $t6
/* 00491218 A0880003 */  sb    $t0, 3($a0)
/* 0049121C 93A9002C */  lbu   $t1, 0x2c($sp)
/* 00491220 310B000F */  andi  $t3, $t0, 0xf
/* 00491224 908F0002 */  lbu   $t7, 2($a0)
/* 00491228 0009C900 */  sll   $t9, $t1, 4
/* 0049122C 032B6025 */  or    $t4, $t9, $t3
/* 00491230 A08C0003 */  sb    $t4, 3($a0)
/* 00491234 93AA002D */  lbu   $t2, 0x2d($sp)
/* 00491238 31E9FFF0 */  andi  $t1, $t7, 0xfff0
/* 0049123C 90880001 */  lbu   $t0, 1($a0)
/* 00491240 000A7102 */  srl   $t6, $t2, 4
/* 00491244 31CD000F */  andi  $t5, $t6, 0xf
/* 00491248 01A95025 */  or    $t2, $t5, $t1
/* 0049124C A08A0002 */  sb    $t2, 2($a0)
/* 00491250 97B9002C */  lhu   $t9, 0x2c($sp)
/* 00491254 314E000F */  andi  $t6, $t2, 0xf
/* 00491258 908A0000 */  lbu   $t2, ($a0)
/* 0049125C 00196100 */  sll   $t4, $t9, 4
/* 00491260 018E7825 */  or    $t7, $t4, $t6
/* 00491264 A08F0002 */  sb    $t7, 2($a0)
/* 00491268 97AD002E */  lhu   $t5, 0x2e($sp)
/* 0049126C 3119FFF0 */  andi  $t9, $t0, 0xfff0
/* 00491270 000D4B02 */  srl   $t1, $t5, 0xc
/* 00491274 3138000F */  andi  $t8, $t1, 0xf
/* 00491278 03196825 */  or    $t5, $t8, $t9
/* 0049127C A08D0001 */  sb    $t5, 1($a0)
/* 00491280 93AC002E */  lbu   $t4, 0x2e($sp)
/* 00491284 31A9000F */  andi  $t1, $t5, 0xf
/* 00491288 000C7900 */  sll   $t7, $t4, 4
/* 0049128C 01E94025 */  or    $t0, $t7, $t1
/* 00491290 A0880001 */  sb    $t0, 1($a0)
/* 00491294 93B8002F */  lbu   $t8, 0x2f($sp)
/* 00491298 314CFFC0 */  andi  $t4, $t2, 0xffc0
/* 0049129C 0018C882 */  srl   $t9, $t8, 2
/* 004912A0 332B003F */  andi  $t3, $t9, 0x3f
/* 004912A4 016CC825 */  or    $t9, $t3, $t4
/* 004912A8 A0990000 */  sb    $t9, ($a0)
/* 004912AC 8FAD002C */  lw    $t5, 0x2c($sp)
/* 004912B0 332A00BF */  andi  $t2, $t9, 0xbf
/* 004912B4 000D7F80 */  sll   $t7, $t5, 0x1e
/* 004912B8 000F4FC2 */  srl   $t1, $t7, 0x1f
/* 004912BC 00094180 */  sll   $t0, $t1, 6
/* 004912C0 31180040 */  andi  $t8, $t0, 0x40
/* 004912C4 030A4825 */  or    $t1, $t8, $t2
/* 004912C8 A0890000 */  sb    $t1, ($a0)
/* 004912CC 8FAE002C */  lw    $t6, 0x2c($sp)
/* 004912D0 3128007F */  andi  $t0, $t1, 0x7f
/* 004912D4 000E69C0 */  sll   $t5, $t6, 7
/* 004912D8 31AF0080 */  andi  $t7, $t5, 0x80
/* 004912DC 01E8C825 */  or    $t9, $t7, $t0
/* 004912E0 1000002A */  b     .L0049138C
/* 004912E4 A0990000 */   sb    $t9, ($a0)
.L004912E8:
/* 004912E8 8C8B0000 */  lw    $t3, ($a0)
/* 004912EC 27B80024 */  addiu $t8, $sp, 0x24
/* 004912F0 3C0100FF */  lui   $at, 0xff
/* 004912F4 AF0B0000 */  sw    $t3, ($t8)
/* 004912F8 8FAC0024 */  lw    $t4, 0x24($sp)
/* 004912FC 000C6A00 */  sll   $t5, $t4, 8
/* 00491300 01A14824 */  and   $t1, $t5, $at
/* 00491304 000C7600 */  sll   $t6, $t4, 0x18
/* 00491308 000C4202 */  srl   $t0, $t4, 8
/* 0049130C 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491310 01C97825 */  or    $t7, $t6, $t1
/* 00491314 01F9C025 */  or    $t8, $t7, $t9
/* 00491318 000C5602 */  srl   $t2, $t4, 0x18
/* 0049131C 030A5825 */  or    $t3, $t8, $t2
/* 00491320 AFAB0024 */  sw    $t3, 0x24($sp)
/* 00491324 8C820000 */  lw    $v0, ($a0)
/* 00491328 000B6B02 */  srl   $t5, $t3, 0xc
/* 0049132C 01A27026 */  xor   $t6, $t5, $v0
/* 00491330 000E4B00 */  sll   $t1, $t6, 0xc
/* 00491334 00094302 */  srl   $t0, $t1, 0xc
/* 00491338 01027826 */  xor   $t7, $t0, $v0
/* 0049133C AC8F0000 */  sw    $t7, ($a0)
/* 00491340 948B0000 */  lhu   $t3, ($a0)
/* 00491344 8FB90024 */  lw    $t9, 0x24($sp)
/* 00491348 316D000F */  andi  $t5, $t3, 0xf
/* 0049134C 00195100 */  sll   $t2, $t9, 4
/* 00491350 014D7025 */  or    $t6, $t2, $t5
/* 00491354 1000000D */  b     .L0049138C
/* 00491358 A48E0000 */   sh    $t6, ($a0)
.L0049135C:
/* 0049135C 8C820000 */  lw    $v0, ($a0)
.L00491360:
/* 00491360 3C0100FF */  lui   $at, 0xff
/* 00491364 00024200 */  sll   $t0, $v0, 8
/* 00491368 01017824 */  and   $t7, $t0, $at
/* 0049136C 00024E00 */  sll   $t1, $v0, 0x18
/* 00491370 00026203 */  sra   $t4, $v0, 8
/* 00491374 3198FF00 */  andi  $t8, $t4, 0xff00
/* 00491378 012FC825 */  or    $t9, $t1, $t7
/* 0049137C 03385825 */  or    $t3, $t9, $t8
/* 00491380 00025602 */  srl   $t2, $v0, 0x18
/* 00491384 016A6825 */  or    $t5, $t3, $t2
/* 00491388 AC8D0000 */  sw    $t5, ($a0)
.L0049138C:
/* 0049138C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00491390 27BD0030 */  addiu $sp, $sp, 0x30
/* 00491394 03E00008 */  jr    $ra
/* 00491398 00000000 */   nop   
    .type swap_aux, @function
    .size swap_aux, .-swap_aux
    .end swap_aux

glabel swap_reloc
    .ent swap_reloc
/* 0049139C 3C1C0FB9 */  .cpload $t9
/* 004913A0 279C8EF4 */  
/* 004913A4 0399E021 */  
/* 004913A8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 004913AC 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 004913B0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004913B4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004913B8 AFB00018 */  sw    $s0, 0x18($sp)
/* 004913BC 00A08025 */  move  $s0, $a1
/* 004913C0 00C08825 */  move  $s1, $a2
/* 004913C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004913C8 0320F809 */  jalr  $t9
/* 004913CC AFA40040 */   sw    $a0, 0x40($sp)
/* 004913D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004913D4 1A000072 */  blez  $s0, .L004915A0
/* 004913D8 8FA40040 */   lw    $a0, 0x40($sp)
/* 004913DC 001070C0 */  sll   $t6, $s0, 3
/* 004913E0 01C43821 */  addu  $a3, $t6, $a0
/* 004913E4 00801825 */  move  $v1, $a0
/* 004913E8 3C0800FF */  lui   $t0, 0xff
/* 004913EC 3C0600FF */  lui   $a2, 0xff
/* 004913F0 27A50030 */  addiu $a1, $sp, 0x30
/* 004913F4 8C780000 */  lw    $t8, ($v1)
.L004913F8:
/* 004913F8 ACB80000 */  sw    $t8, ($a1)
/* 004913FC 8C6F0004 */  lw    $t7, 4($v1)
/* 00491400 ACAF0004 */  sw    $t7, 4($a1)
/* 00491404 8FB90030 */  lw    $t9, 0x30($sp)
/* 00491408 00195200 */  sll   $t2, $t9, 8
/* 0049140C 01485824 */  and   $t3, $t2, $t0
/* 00491410 00194E00 */  sll   $t1, $t9, 0x18
/* 00491414 00196A03 */  sra   $t5, $t9, 8
/* 00491418 31AEFF00 */  andi  $t6, $t5, 0xff00
/* 0049141C 012B6025 */  or    $t4, $t1, $t3
/* 00491420 018E7825 */  or    $t7, $t4, $t6
/* 00491424 00195602 */  srl   $t2, $t9, 0x18
/* 00491428 01EA4825 */  or    $t1, $t7, $t2
/* 0049142C 1622002E */  bne   $s1, $v0, .L004914E8
/* 00491430 AFA90030 */   sw    $t1, 0x30($sp)
/* 00491434 8CB90000 */  lw    $t9, ($a1)
/* 00491438 3C0100FF */  lui   $at, 0xff
/* 0049143C 3421FFFF */  ori   $at, $at, 0xffff
/* 00491440 AC790000 */  sw    $t9, ($v1)
/* 00491444 8CAB0004 */  lw    $t3, 4($a1)
/* 00491448 AC6B0004 */  sw    $t3, 4($v1)
/* 0049144C 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00491450 000D7200 */  sll   $t6, $t5, 8
/* 00491454 01C6C024 */  and   $t8, $t6, $a2
/* 00491458 000D6600 */  sll   $t4, $t5, 0x18
/* 0049145C 000D5202 */  srl   $t2, $t5, 8
/* 00491460 3149FF00 */  andi  $t1, $t2, 0xff00
/* 00491464 01987825 */  or    $t7, $t4, $t8
/* 00491468 01E95825 */  or    $t3, $t7, $t1
/* 0049146C 000DCE02 */  srl   $t9, $t5, 0x18
/* 00491470 01797025 */  or    $t6, $t3, $t9
/* 00491474 AFAE0034 */  sw    $t6, 0x34($sp)
/* 00491478 906A0007 */  lbu   $t2, 7($v1)
/* 0049147C 000E67C2 */  srl   $t4, $t6, 0x1f
/* 00491480 31980001 */  andi  $t8, $t4, 1
/* 00491484 314FFFFE */  andi  $t7, $t2, 0xfffe
/* 00491488 030F5025 */  or    $t2, $t8, $t7
/* 0049148C A06A0007 */  sb    $t2, 7($v1)
/* 00491490 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00491494 315800C1 */  andi  $t8, $t2, 0xc1
/* 00491498 000D5840 */  sll   $t3, $t5, 1
/* 0049149C 000BCF02 */  srl   $t9, $t3, 0x1c
/* 004914A0 00197040 */  sll   $t6, $t9, 1
/* 004914A4 31CC003E */  andi  $t4, $t6, 0x3e
/* 004914A8 01985025 */  or    $t2, $t4, $t8
/* 004914AC A06A0007 */  sb    $t2, 7($v1)
/* 004914B0 93AB0034 */  lbu   $t3, 0x34($sp)
/* 004914B4 314C003F */  andi  $t4, $t2, 0x3f
/* 004914B8 000B7180 */  sll   $t6, $t3, 6
/* 004914BC 01CCC025 */  or    $t8, $t6, $t4
/* 004914C0 A0780007 */  sb    $t8, 7($v1)
/* 004914C4 8C640004 */  lw    $a0, 4($v1)
/* 004914C8 8FAF0034 */  lw    $t7, 0x34($sp)
/* 004914CC 00046A02 */  srl   $t5, $a0, 8
/* 004914D0 01E14824 */  and   $t1, $t7, $at
/* 004914D4 012D5826 */  xor   $t3, $t1, $t5
/* 004914D8 000BCA00 */  sll   $t9, $t3, 8
/* 004914DC 03245026 */  xor   $t2, $t9, $a0
/* 004914E0 1000002C */  b     .L00491594
/* 004914E4 AC6A0004 */   sw    $t2, 4($v1)
.L004914E8:
/* 004914E8 8C6C0004 */  lw    $t4, 4($v1)
/* 004914EC 93A90034 */  lbu   $t1, 0x34($sp)
/* 004914F0 000C79C0 */  sll   $t7, $t4, 7
/* 004914F4 312DFF7F */  andi  $t5, $t1, 0xff7f
/* 004914F8 01ED5825 */  or    $t3, $t7, $t5
/* 004914FC A3AB0034 */  sb    $t3, 0x34($sp)
/* 00491500 8C790004 */  lw    $t9, 4($v1)
/* 00491504 01607825 */  move  $t7, $t3
/* 00491508 31ED0087 */  andi  $t5, $t7, 0x87
/* 0049150C 00195680 */  sll   $t2, $t9, 0x1a
/* 00491510 000A66C2 */  srl   $t4, $t2, 0x1b
/* 00491514 000CC0C0 */  sll   $t8, $t4, 3
/* 00491518 33090078 */  andi  $t1, $t8, 0x78
/* 0049151C 012DC025 */  or    $t8, $t1, $t5
/* 00491520 A3B80034 */  sb    $t8, 0x34($sp)
/* 00491524 906A0007 */  lbu   $t2, 7($v1)
/* 00491528 330B00F8 */  andi  $t3, $t8, 0xf8
/* 0049152C 000A7182 */  srl   $t6, $t2, 6
/* 00491530 31CC0007 */  andi  $t4, $t6, 7
/* 00491534 018B7825 */  or    $t7, $t4, $t3
/* 00491538 A3AF0034 */  sb    $t7, 0x34($sp)
/* 0049153C 8C690004 */  lw    $t1, 4($v1)
/* 00491540 8FAA0034 */  lw    $t2, 0x34($sp)
/* 00491544 00096A02 */  srl   $t5, $t1, 8
/* 00491548 01AA7026 */  xor   $t6, $t5, $t2
/* 0049154C 000ECA00 */  sll   $t9, $t6, 8
/* 00491550 0019C202 */  srl   $t8, $t9, 8
/* 00491554 030A6026 */  xor   $t4, $t8, $t2
/* 00491558 000C7A00 */  sll   $t7, $t4, 8
/* 0049155C 01E64824 */  and   $t1, $t7, $a2
/* 00491560 000C5E00 */  sll   $t3, $t4, 0x18
/* 00491564 000C7202 */  srl   $t6, $t4, 8
/* 00491568 31D9FF00 */  andi  $t9, $t6, 0xff00
/* 0049156C 01696825 */  or    $t5, $t3, $t1
/* 00491570 01B9C025 */  or    $t8, $t5, $t9
/* 00491574 000C5602 */  srl   $t2, $t4, 0x18
/* 00491578 AFAC0034 */  sw    $t4, 0x34($sp)
/* 0049157C 030A7825 */  or    $t7, $t8, $t2
/* 00491580 AFAF0034 */  sw    $t7, 0x34($sp)
/* 00491584 8CA90000 */  lw    $t1, ($a1)
/* 00491588 AC690000 */  sw    $t1, ($v1)
/* 0049158C 8CAB0004 */  lw    $t3, 4($a1)
/* 00491590 AC6B0004 */  sw    $t3, 4($v1)
.L00491594:
/* 00491594 24630008 */  addiu $v1, $v1, 8
/* 00491598 5467FF97 */  bnel  $v1, $a3, .L004913F8
/* 0049159C 8C780000 */   lw    $t8, ($v1)
.L004915A0:
/* 004915A0 8FBF0024 */  lw    $ra, 0x24($sp)
/* 004915A4 8FB00018 */  lw    $s0, 0x18($sp)
/* 004915A8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004915AC 03E00008 */  jr    $ra
/* 004915B0 27BD0040 */   addiu $sp, $sp, 0x40
    .type swap_reloc, @function
    .size swap_reloc, .-swap_reloc
    .end swap_reloc

glabel swap_ranlib
    .ent swap_ranlib
/* 004915B4 18A0001C */  blez  $a1, .L00491628
/* 004915B8 00801025 */   move  $v0, $a0
/* 004915BC 000570C0 */  sll   $t6, $a1, 3
/* 004915C0 01C43021 */  addu  $a2, $t6, $a0
/* 004915C4 3C0700FF */  lui   $a3, 0xff
.L004915C8:
/* 004915C8 8C430000 */  lw    $v1, ($v0)
/* 004915CC 8C440004 */  lw    $a0, 4($v0)
/* 004915D0 24420008 */  addiu $v0, $v0, 8
/* 004915D4 0003C200 */  sll   $t8, $v1, 8
/* 004915D8 0307C824 */  and   $t9, $t8, $a3
/* 004915DC 00037E00 */  sll   $t7, $v1, 0x18
/* 004915E0 01F94025 */  or    $t0, $t7, $t9
/* 004915E4 00034A03 */  sra   $t1, $v1, 8
/* 004915E8 312AFF00 */  andi  $t2, $t1, 0xff00
/* 004915EC 010A5825 */  or    $t3, $t0, $t2
/* 004915F0 0004C200 */  sll   $t8, $a0, 8
/* 004915F4 03077824 */  and   $t7, $t8, $a3
/* 004915F8 00036602 */  srl   $t4, $v1, 0x18
/* 004915FC 00044A03 */  sra   $t1, $a0, 8
/* 00491600 00047600 */  sll   $t6, $a0, 0x18
/* 00491604 018B6825 */  or    $t5, $t4, $t3
/* 00491608 01CFC825 */  or    $t9, $t6, $t7
/* 0049160C 3128FF00 */  andi  $t0, $t1, 0xff00
/* 00491610 03285025 */  or    $t2, $t9, $t0
/* 00491614 00046602 */  srl   $t4, $a0, 0x18
/* 00491618 018A5825 */  or    $t3, $t4, $t2
/* 0049161C AC4DFFF8 */  sw    $t5, -8($v0)
/* 00491620 1446FFE9 */  bne   $v0, $a2, .L004915C8
/* 00491624 AC4BFFFC */   sw    $t3, -4($v0)
.L00491628:
/* 00491628 03E00008 */  jr    $ra
/* 0049162C 00000000 */   nop   
    .type swap_ranlib, @function
    .size swap_ranlib, .-swap_ranlib
    .end swap_ranlib

glabel swap_gpt
    .ent swap_gpt
/* 00491630 18A0001D */  blez  $a1, .L004916A8
/* 00491634 AFA60008 */   sw    $a2, 8($sp)
/* 00491638 000570C0 */  sll   $t6, $a1, 3
/* 0049163C 01C43021 */  addu  $a2, $t6, $a0
/* 00491640 00801025 */  move  $v0, $a0
/* 00491644 3C0700FF */  lui   $a3, 0xff
.L00491648:
/* 00491648 8C430000 */  lw    $v1, ($v0)
/* 0049164C 8C440004 */  lw    $a0, 4($v0)
/* 00491650 24420008 */  addiu $v0, $v0, 8
/* 00491654 0003C200 */  sll   $t8, $v1, 8
/* 00491658 0307C824 */  and   $t9, $t8, $a3
/* 0049165C 00037E00 */  sll   $t7, $v1, 0x18
/* 00491660 01F94025 */  or    $t0, $t7, $t9
/* 00491664 00034A03 */  sra   $t1, $v1, 8
/* 00491668 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0049166C 010A5825 */  or    $t3, $t0, $t2
/* 00491670 0004C200 */  sll   $t8, $a0, 8
/* 00491674 03077824 */  and   $t7, $t8, $a3
/* 00491678 00036602 */  srl   $t4, $v1, 0x18
/* 0049167C 00044A03 */  sra   $t1, $a0, 8
/* 00491680 00047600 */  sll   $t6, $a0, 0x18
/* 00491684 018B6825 */  or    $t5, $t4, $t3
/* 00491688 01CFC825 */  or    $t9, $t6, $t7
/* 0049168C 3128FF00 */  andi  $t0, $t1, 0xff00
/* 00491690 03285025 */  or    $t2, $t9, $t0
/* 00491694 00046602 */  srl   $t4, $a0, 0x18
/* 00491698 018A5825 */  or    $t3, $t4, $t2
/* 0049169C AC4DFFF8 */  sw    $t5, -8($v0)
/* 004916A0 1446FFE9 */  bne   $v0, $a2, .L00491648
/* 004916A4 AC4BFFFC */   sw    $t3, -4($v0)
.L004916A8:
/* 004916A8 03E00008 */  jr    $ra
/* 004916AC 00000000 */   nop   
    .type swap_gpt, @function
    .size swap_gpt, .-swap_gpt
    .end swap_gpt

glabel swap_dynamic
    .ent swap_dynamic
/* 004916B0 AFA50004 */  sw    $a1, 4($sp)
/* 004916B4 8C820000 */  lw    $v0, ($a0)
/* 004916B8 8C830004 */  lw    $v1, 4($a0)
/* 004916BC 3C0100FF */  lui   $at, 0xff
/* 004916C0 00027A00 */  sll   $t7, $v0, 8
/* 004916C4 01E1C024 */  and   $t8, $t7, $at
/* 004916C8 00027600 */  sll   $t6, $v0, 0x18
/* 004916CC 00024203 */  sra   $t0, $v0, 8
/* 004916D0 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004916D4 01D8C825 */  or    $t9, $t6, $t8
/* 004916D8 03295025 */  or    $t2, $t9, $t1
/* 004916DC 3C0500FF */  lui   $a1, 0xff
/* 004916E0 00037A00 */  sll   $t7, $v1, 8
/* 004916E4 01E57024 */  and   $t6, $t7, $a1
/* 004916E8 00025E02 */  srl   $t3, $v0, 0x18
/* 004916EC 00034202 */  srl   $t0, $v1, 8
/* 004916F0 00036E00 */  sll   $t5, $v1, 0x18
/* 004916F4 014B6025 */  or    $t4, $t2, $t3
/* 004916F8 01AEC025 */  or    $t8, $t5, $t6
/* 004916FC 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491700 03194825 */  or    $t1, $t8, $t9
/* 00491704 00035602 */  srl   $t2, $v1, 0x18
/* 00491708 012A5825 */  or    $t3, $t1, $t2
/* 0049170C AC8C0000 */  sw    $t4, ($a0)
/* 00491710 000B7A00 */  sll   $t7, $t3, 8
/* 00491714 01E56824 */  and   $t5, $t7, $a1
/* 00491718 000B6600 */  sll   $t4, $t3, 0x18
/* 0049171C 000B4202 */  srl   $t0, $t3, 8
/* 00491720 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491724 018D7025 */  or    $t6, $t4, $t5
/* 00491728 01D8C825 */  or    $t9, $t6, $t8
/* 0049172C 000B4E02 */  srl   $t1, $t3, 0x18
/* 00491730 AC8B0004 */  sw    $t3, 4($a0)
/* 00491734 03295025 */  or    $t2, $t9, $t1
/* 00491738 03E00008 */  jr    $ra
/* 0049173C AC8A0004 */   sw    $t2, 4($a0)
    .type swap_dynamic, @function
    .size swap_dynamic, .-swap_dynamic
    .end swap_dynamic

glabel swap_rel_dyn
    .ent swap_rel_dyn
/* 00491740 AFA50004 */  sw    $a1, 4($sp)
/* 00491744 8C820000 */  lw    $v0, ($a0)
/* 00491748 8C830004 */  lw    $v1, 4($a0)
/* 0049174C 3C0500FF */  lui   $a1, 0xff
/* 00491750 00027A00 */  sll   $t7, $v0, 8
/* 00491754 01E5C024 */  and   $t8, $t7, $a1
/* 00491758 00027600 */  sll   $t6, $v0, 0x18
/* 0049175C 00024202 */  srl   $t0, $v0, 8
/* 00491760 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491764 01D8C825 */  or    $t9, $t6, $t8
/* 00491768 03295025 */  or    $t2, $t9, $t1
/* 0049176C 00037A00 */  sll   $t7, $v1, 8
/* 00491770 01E57024 */  and   $t6, $t7, $a1
/* 00491774 00025E02 */  srl   $t3, $v0, 0x18
/* 00491778 00034202 */  srl   $t0, $v1, 8
/* 0049177C 00036E00 */  sll   $t5, $v1, 0x18
/* 00491780 014B6025 */  or    $t4, $t2, $t3
/* 00491784 01AEC025 */  or    $t8, $t5, $t6
/* 00491788 3119FF00 */  andi  $t9, $t0, 0xff00
/* 0049178C 03194825 */  or    $t1, $t8, $t9
/* 00491790 00035602 */  srl   $t2, $v1, 0x18
/* 00491794 012A5825 */  or    $t3, $t1, $t2
/* 00491798 AC8C0000 */  sw    $t4, ($a0)
/* 0049179C 03E00008 */  jr    $ra
/* 004917A0 AC8B0004 */   sw    $t3, 4($a0)
    .type swap_rel_dyn, @function
    .size swap_rel_dyn, .-swap_rel_dyn
    .end swap_rel_dyn

glabel swap_reginfo
    .ent swap_reginfo
/* 004917A4 AFA50004 */  sw    $a1, 4($sp)
/* 004917A8 8C820000 */  lw    $v0, ($a0)
/* 004917AC 8C830004 */  lw    $v1, 4($a0)
/* 004917B0 3C0700FF */  lui   $a3, 0xff
/* 004917B4 00027A00 */  sll   $t7, $v0, 8
/* 004917B8 01E7C024 */  and   $t8, $t7, $a3
/* 004917BC 00027600 */  sll   $t6, $v0, 0x18
/* 004917C0 00024202 */  srl   $t0, $v0, 8
/* 004917C4 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004917C8 01D8C825 */  or    $t9, $t6, $t8
/* 004917CC 03295025 */  or    $t2, $t9, $t1
/* 004917D0 00025E02 */  srl   $t3, $v0, 0x18
/* 004917D4 8C850008 */  lw    $a1, 8($a0)
/* 004917D8 014B6025 */  or    $t4, $t2, $t3
/* 004917DC 0003C200 */  sll   $t8, $v1, 8
/* 004917E0 00037E00 */  sll   $t7, $v1, 0x18
/* 004917E4 00036E02 */  srl   $t5, $v1, 0x18
/* 004917E8 01AF7025 */  or    $t6, $t5, $t7
/* 004917EC 03074024 */  and   $t0, $t8, $a3
/* 004917F0 00034A02 */  srl   $t1, $v1, 8
/* 004917F4 8C86000C */  lw    $a2, 0xc($a0)
/* 004917F8 AC8C0000 */  sw    $t4, ($a0)
/* 004917FC 312AFF00 */  andi  $t2, $t1, 0xff00
/* 00491800 01C8C825 */  or    $t9, $t6, $t0
/* 00491804 032A5825 */  or    $t3, $t9, $t2
/* 00491808 00056602 */  srl   $t4, $a1, 0x18
/* 0049180C 00056E00 */  sll   $t5, $a1, 0x18
/* 00491810 018D7825 */  or    $t7, $t4, $t5
/* 00491814 0005C200 */  sll   $t8, $a1, 8
/* 00491818 8C820010 */  lw    $v0, 0x10($a0)
/* 0049181C AC8B0004 */  sw    $t3, 4($a0)
/* 00491820 03077024 */  and   $t6, $t8, $a3
/* 00491824 00054A02 */  srl   $t1, $a1, 8
/* 00491828 3139FF00 */  andi  $t9, $t1, 0xff00
/* 0049182C 01EE4025 */  or    $t0, $t7, $t6
/* 00491830 00065E02 */  srl   $t3, $a2, 0x18
/* 00491834 00066600 */  sll   $t4, $a2, 0x18
/* 00491838 01195025 */  or    $t2, $t0, $t9
/* 0049183C 016C6825 */  or    $t5, $t3, $t4
/* 00491840 0006C200 */  sll   $t8, $a2, 8
/* 00491844 AC8A0008 */  sw    $t2, 8($a0)
/* 00491848 03077824 */  and   $t7, $t8, $a3
/* 0049184C 8C830014 */  lw    $v1, 0x14($a0)
/* 00491850 01AF7025 */  or    $t6, $t5, $t7
/* 00491854 00064A02 */  srl   $t1, $a2, 8
/* 00491858 00025602 */  srl   $t2, $v0, 0x18
/* 0049185C 00025E00 */  sll   $t3, $v0, 0x18
/* 00491860 3128FF00 */  andi  $t0, $t1, 0xff00
/* 00491864 014B6025 */  or    $t4, $t2, $t3
/* 00491868 0002C200 */  sll   $t8, $v0, 8
/* 0049186C 01C8C825 */  or    $t9, $t6, $t0
/* 00491870 03076824 */  and   $t5, $t8, $a3
/* 00491874 018D7825 */  or    $t7, $t4, $t5
/* 00491878 AC99000C */  sw    $t9, 0xc($a0)
/* 0049187C 3C0100FF */  lui   $at, 0xff
/* 00491880 00024A02 */  srl   $t1, $v0, 8
/* 00491884 00035200 */  sll   $t2, $v1, 8
/* 00491888 312EFF00 */  andi  $t6, $t1, 0xff00
/* 0049188C 01415824 */  and   $t3, $t2, $at
/* 00491890 0003CE00 */  sll   $t9, $v1, 0x18
/* 00491894 00036203 */  sra   $t4, $v1, 8
/* 00491898 01EE4025 */  or    $t0, $t7, $t6
/* 0049189C 318DFF00 */  andi  $t5, $t4, 0xff00
/* 004918A0 032BC025 */  or    $t8, $t9, $t3
/* 004918A4 030D4825 */  or    $t1, $t8, $t5
/* 004918A8 00037E02 */  srl   $t7, $v1, 0x18
/* 004918AC 012F7025 */  or    $t6, $t1, $t7
/* 004918B0 AC880010 */  sw    $t0, 0x10($a0)
/* 004918B4 03E00008 */  jr    $ra
/* 004918B8 AC8E0014 */   sw    $t6, 0x14($a0)
    .type swap_reginfo, @function
    .size swap_reginfo, .-swap_reginfo
    .end swap_reginfo

glabel swap_dynsym
    .ent swap_dynsym
/* 004918BC AFA50004 */  sw    $a1, 4($sp)
/* 004918C0 8C820000 */  lw    $v0, ($a0)
/* 004918C4 8C830004 */  lw    $v1, 4($a0)
/* 004918C8 3C0700FF */  lui   $a3, 0xff
/* 004918CC 00027A00 */  sll   $t7, $v0, 8
/* 004918D0 01E7C024 */  and   $t8, $t7, $a3
/* 004918D4 00027600 */  sll   $t6, $v0, 0x18
/* 004918D8 00024202 */  srl   $t0, $v0, 8
/* 004918DC 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004918E0 01D8C825 */  or    $t9, $t6, $t8
/* 004918E4 03295025 */  or    $t2, $t9, $t1
/* 004918E8 00037A00 */  sll   $t7, $v1, 8
/* 004918EC 01E77024 */  and   $t6, $t7, $a3
/* 004918F0 00025E02 */  srl   $t3, $v0, 0x18
/* 004918F4 00034202 */  srl   $t0, $v1, 8
/* 004918F8 00036E00 */  sll   $t5, $v1, 0x18
/* 004918FC 014B6025 */  or    $t4, $t2, $t3
/* 00491900 01AEC025 */  or    $t8, $t5, $t6
/* 00491904 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491908 8C850008 */  lw    $a1, 8($a0)
/* 0049190C 03194825 */  or    $t1, $t8, $t9
/* 00491910 00035602 */  srl   $t2, $v1, 0x18
/* 00491914 012A5825 */  or    $t3, $t1, $t2
/* 00491918 AC8B0004 */  sw    $t3, 4($a0)
/* 0049191C 948B000E */  lhu   $t3, 0xe($a0)
/* 00491920 AC8C0000 */  sw    $t4, ($a0)
/* 00491924 00057A00 */  sll   $t7, $a1, 8
/* 00491928 01E76824 */  and   $t5, $t7, $a3
/* 0049192C 00056600 */  sll   $t4, $a1, 0x18
/* 00491930 018D7025 */  or    $t6, $t4, $t5
/* 00491934 00054202 */  srl   $t0, $a1, 8
/* 00491938 3118FF00 */  andi  $t8, $t0, 0xff00
/* 0049193C 01D8C825 */  or    $t9, $t6, $t8
/* 00491940 00054E02 */  srl   $t1, $a1, 0x18
/* 00491944 000B6202 */  srl   $t4, $t3, 8
/* 00491948 000B7A00 */  sll   $t7, $t3, 8
/* 0049194C 03295025 */  or    $t2, $t9, $t1
/* 00491950 01EC6825 */  or    $t5, $t7, $t4
/* 00491954 AC8A0008 */  sw    $t2, 8($a0)
/* 00491958 03E00008 */  jr    $ra
/* 0049195C A48D000E */   sh    $t5, 0xe($a0)
    .type swap_dynsym, @function
    .size swap_dynsym, .-swap_dynsym
    .end swap_dynsym

glabel swap_conflict
    .ent swap_conflict
/* 00491960 AFA50004 */  sw    $a1, 4($sp)
/* 00491964 8C820000 */  lw    $v0, ($a0)
/* 00491968 3C0100FF */  lui   $at, 0xff
/* 0049196C 00027602 */  srl   $t6, $v0, 0x18
/* 00491970 00027E00 */  sll   $t7, $v0, 0x18
/* 00491974 0002CA00 */  sll   $t9, $v0, 8
/* 00491978 03214024 */  and   $t0, $t9, $at
/* 0049197C 01CFC025 */  or    $t8, $t6, $t7
/* 00491980 00025202 */  srl   $t2, $v0, 8
/* 00491984 314BFF00 */  andi  $t3, $t2, 0xff00
/* 00491988 03084825 */  or    $t1, $t8, $t0
/* 0049198C 012B6025 */  or    $t4, $t1, $t3
/* 00491990 03E00008 */  jr    $ra
/* 00491994 AC8C0000 */   sw    $t4, ($a0)
    .type swap_conflict, @function
    .size swap_conflict, .-swap_conflict
    .end swap_conflict

glabel swap_got
    .ent swap_got
/* 00491998 AFA50004 */  sw    $a1, 4($sp)
/* 0049199C 8C820000 */  lw    $v0, ($a0)
/* 004919A0 3C0100FF */  lui   $at, 0xff
/* 004919A4 00027A00 */  sll   $t7, $v0, 8
/* 004919A8 01E1C024 */  and   $t8, $t7, $at
/* 004919AC 00027600 */  sll   $t6, $v0, 0x18
/* 004919B0 00024202 */  srl   $t0, $v0, 8
/* 004919B4 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004919B8 01D8C825 */  or    $t9, $t6, $t8
/* 004919BC 03295025 */  or    $t2, $t9, $t1
/* 004919C0 00025E02 */  srl   $t3, $v0, 0x18
/* 004919C4 014B6025 */  or    $t4, $t2, $t3
/* 004919C8 03E00008 */  jr    $ra
/* 004919CC AC8C0000 */   sw    $t4, ($a0)
    .type swap_got, @function
    .size swap_got, .-swap_got
    .end swap_got

glabel swap_liblist
    .ent swap_liblist
/* 004919D0 AFA50004 */  sw    $a1, 4($sp)
/* 004919D4 8C820000 */  lw    $v0, ($a0)
/* 004919D8 8C830004 */  lw    $v1, 4($a0)
/* 004919DC 3C0700FF */  lui   $a3, 0xff
/* 004919E0 00027A00 */  sll   $t7, $v0, 8
/* 004919E4 01E7C024 */  and   $t8, $t7, $a3
/* 004919E8 00027600 */  sll   $t6, $v0, 0x18
/* 004919EC 00024202 */  srl   $t0, $v0, 8
/* 004919F0 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004919F4 01D8C825 */  or    $t9, $t6, $t8
/* 004919F8 8C850008 */  lw    $a1, 8($a0)
/* 004919FC 03295025 */  or    $t2, $t9, $t1
/* 00491A00 00025E02 */  srl   $t3, $v0, 0x18
/* 00491A04 00037A00 */  sll   $t7, $v1, 8
/* 00491A08 014B6025 */  or    $t4, $t2, $t3
/* 00491A0C 01E77024 */  and   $t6, $t7, $a3
/* 00491A10 00036E00 */  sll   $t5, $v1, 0x18
/* 00491A14 01AEC025 */  or    $t8, $t5, $t6
/* 00491A18 00034202 */  srl   $t0, $v1, 8
/* 00491A1C 8C86000C */  lw    $a2, 0xc($a0)
/* 00491A20 AC8C0000 */  sw    $t4, ($a0)
/* 00491A24 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491A28 00057A00 */  sll   $t7, $a1, 8
/* 00491A2C 03194825 */  or    $t1, $t8, $t9
/* 00491A30 01E76824 */  and   $t5, $t7, $a3
/* 00491A34 00035602 */  srl   $t2, $v1, 0x18
/* 00491A38 00056600 */  sll   $t4, $a1, 0x18
/* 00491A3C 012A5825 */  or    $t3, $t1, $t2
/* 00491A40 018D7025 */  or    $t6, $t4, $t5
/* 00491A44 00054202 */  srl   $t0, $a1, 8
/* 00491A48 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491A4C 8C820010 */  lw    $v0, 0x10($a0)
/* 00491A50 AC8B0004 */  sw    $t3, 4($a0)
/* 00491A54 01D8C825 */  or    $t9, $t6, $t8
/* 00491A58 00067A00 */  sll   $t7, $a2, 8
/* 00491A5C 01E76024 */  and   $t4, $t7, $a3
/* 00491A60 00054E02 */  srl   $t1, $a1, 0x18
/* 00491A64 00065E00 */  sll   $t3, $a2, 0x18
/* 00491A68 00064202 */  srl   $t0, $a2, 8
/* 00491A6C 03295025 */  or    $t2, $t9, $t1
/* 00491A70 310EFF00 */  andi  $t6, $t0, 0xff00
/* 00491A74 016C6825 */  or    $t5, $t3, $t4
/* 00491A78 01AEC025 */  or    $t8, $t5, $t6
/* 00491A7C AC8A0008 */  sw    $t2, 8($a0)
/* 00491A80 00027A00 */  sll   $t7, $v0, 8
/* 00491A84 01E75824 */  and   $t3, $t7, $a3
/* 00491A88 0006CE02 */  srl   $t9, $a2, 0x18
/* 00491A8C 00025600 */  sll   $t2, $v0, 0x18
/* 00491A90 00024202 */  srl   $t0, $v0, 8
/* 00491A94 03194825 */  or    $t1, $t8, $t9
/* 00491A98 310DFF00 */  andi  $t5, $t0, 0xff00
/* 00491A9C 014B6025 */  or    $t4, $t2, $t3
/* 00491AA0 018D7025 */  or    $t6, $t4, $t5
/* 00491AA4 0002C602 */  srl   $t8, $v0, 0x18
/* 00491AA8 01D8C825 */  or    $t9, $t6, $t8
/* 00491AAC AC89000C */  sw    $t1, 0xc($a0)
/* 00491AB0 03E00008 */  jr    $ra
/* 00491AB4 AC990010 */   sw    $t9, 0x10($a0)
    .type swap_liblist, @function
    .size swap_liblist, .-swap_liblist
    .end swap_liblist

glabel swap_msym
    .ent swap_msym
/* 00491AB8 AFA50004 */  sw    $a1, 4($sp)
/* 00491ABC 8C820000 */  lw    $v0, ($a0)
/* 00491AC0 8C830004 */  lw    $v1, 4($a0)
/* 00491AC4 3C0500FF */  lui   $a1, 0xff
/* 00491AC8 00027A00 */  sll   $t7, $v0, 8
/* 00491ACC 01E5C024 */  and   $t8, $t7, $a1
/* 00491AD0 00027600 */  sll   $t6, $v0, 0x18
/* 00491AD4 00024202 */  srl   $t0, $v0, 8
/* 00491AD8 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491ADC 01D8C825 */  or    $t9, $t6, $t8
/* 00491AE0 03295025 */  or    $t2, $t9, $t1
/* 00491AE4 00037A00 */  sll   $t7, $v1, 8
/* 00491AE8 01E57024 */  and   $t6, $t7, $a1
/* 00491AEC 00025E02 */  srl   $t3, $v0, 0x18
/* 00491AF0 00034202 */  srl   $t0, $v1, 8
/* 00491AF4 00036E00 */  sll   $t5, $v1, 0x18
/* 00491AF8 014B6025 */  or    $t4, $t2, $t3
/* 00491AFC 01AEC025 */  or    $t8, $t5, $t6
/* 00491B00 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491B04 03194825 */  or    $t1, $t8, $t9
/* 00491B08 00035602 */  srl   $t2, $v1, 0x18
/* 00491B0C 012A5825 */  or    $t3, $t1, $t2
/* 00491B10 AC8C0000 */  sw    $t4, ($a0)
/* 00491B14 03E00008 */  jr    $ra
/* 00491B18 AC8B0004 */   sw    $t3, 4($a0)
    .type swap_msym, @function
    .size swap_msym, .-swap_msym
    .end swap_msym

glabel swap_ehdr
    .ent swap_ehdr
/* 00491B1C 94820010 */  lhu   $v0, 0x10($a0)
/* 00491B20 94830012 */  lhu   $v1, 0x12($a0)
/* 00491B24 8C850014 */  lw    $a1, 0x14($a0)
/* 00491B28 00027A00 */  sll   $t7, $v0, 8
/* 00491B2C 0002C202 */  srl   $t8, $v0, 8
/* 00491B30 01F8C825 */  or    $t9, $t7, $t8
/* 00491B34 00035A00 */  sll   $t3, $v1, 8
/* 00491B38 00036202 */  srl   $t4, $v1, 8
/* 00491B3C 016C6825 */  or    $t5, $t3, $t4
/* 00491B40 3C0900FF */  lui   $t1, 0xff
/* 00491B44 00057A00 */  sll   $t7, $a1, 8
/* 00491B48 8C860018 */  lw    $a2, 0x18($a0)
/* 00491B4C A4990010 */  sh    $t9, 0x10($a0)
/* 00491B50 01E9C024 */  and   $t8, $t7, $t1
/* 00491B54 00057600 */  sll   $t6, $a1, 0x18
/* 00491B58 00055202 */  srl   $t2, $a1, 8
/* 00491B5C A48D0012 */  sh    $t5, 0x12($a0)
/* 00491B60 314BFF00 */  andi  $t3, $t2, 0xff00
/* 00491B64 01D8C825 */  or    $t9, $t6, $t8
/* 00491B68 032B6025 */  or    $t4, $t9, $t3
/* 00491B6C 00056E02 */  srl   $t5, $a1, 0x18
/* 00491B70 018D7825 */  or    $t7, $t4, $t5
/* 00491B74 0006C200 */  sll   $t8, $a2, 8
/* 00491B78 8C87001C */  lw    $a3, 0x1c($a0)
/* 00491B7C 03095024 */  and   $t2, $t8, $t1
/* 00491B80 00065A02 */  srl   $t3, $a2, 8
/* 00491B84 00067600 */  sll   $t6, $a2, 0x18
/* 00491B88 AC8F0014 */  sw    $t7, 0x14($a0)
/* 00491B8C 01CAC825 */  or    $t9, $t6, $t2
/* 00491B90 316CFF00 */  andi  $t4, $t3, 0xff00
/* 00491B94 032C6825 */  or    $t5, $t9, $t4
/* 00491B98 00067E02 */  srl   $t7, $a2, 0x18
/* 00491B9C 01AFC025 */  or    $t8, $t5, $t7
/* 00491BA0 00075200 */  sll   $t2, $a3, 8
/* 00491BA4 8C820020 */  lw    $v0, 0x20($a0)
/* 00491BA8 01495824 */  and   $t3, $t2, $t1
/* 00491BAC 00076202 */  srl   $t4, $a3, 8
/* 00491BB0 00077600 */  sll   $t6, $a3, 0x18
/* 00491BB4 AC980018 */  sw    $t8, 0x18($a0)
/* 00491BB8 01CBC825 */  or    $t9, $t6, $t3
/* 00491BBC 318DFF00 */  andi  $t5, $t4, 0xff00
/* 00491BC0 032D7825 */  or    $t7, $t9, $t5
/* 00491BC4 0007C602 */  srl   $t8, $a3, 0x18
/* 00491BC8 01F85025 */  or    $t2, $t7, $t8
/* 00491BCC 00025A00 */  sll   $t3, $v0, 8
/* 00491BD0 8C830024 */  lw    $v1, 0x24($a0)
/* 00491BD4 01696024 */  and   $t4, $t3, $t1
/* 00491BD8 00026A02 */  srl   $t5, $v0, 8
/* 00491BDC 00027600 */  sll   $t6, $v0, 0x18
/* 00491BE0 AC8A001C */  sw    $t2, 0x1c($a0)
/* 00491BE4 01CCC825 */  or    $t9, $t6, $t4
/* 00491BE8 31AFFF00 */  andi  $t7, $t5, 0xff00
/* 00491BEC 032FC025 */  or    $t8, $t9, $t7
/* 00491BF0 00025602 */  srl   $t2, $v0, 0x18
/* 00491BF4 030A5825 */  or    $t3, $t8, $t2
/* 00491BF8 00036200 */  sll   $t4, $v1, 8
/* 00491BFC 01896824 */  and   $t5, $t4, $t1
/* 00491C00 00037A02 */  srl   $t7, $v1, 8
/* 00491C04 00037600 */  sll   $t6, $v1, 0x18
/* 00491C08 AC8B0020 */  sw    $t3, 0x20($a0)
/* 00491C0C 01CDC825 */  or    $t9, $t6, $t5
/* 00491C10 31F8FF00 */  andi  $t8, $t7, 0xff00
/* 00491C14 94850028 */  lhu   $a1, 0x28($a0)
/* 00491C18 9486002A */  lhu   $a2, 0x2a($a0)
/* 00491C1C 03385025 */  or    $t2, $t9, $t8
/* 00491C20 00035E02 */  srl   $t3, $v1, 0x18
/* 00491C24 014B6025 */  or    $t4, $t2, $t3
/* 00491C28 9487002C */  lhu   $a3, 0x2c($a0)
/* 00491C2C 9488002E */  lhu   $t0, 0x2e($a0)
/* 00491C30 AC8C0024 */  sw    $t4, 0x24($a0)
/* 00491C34 00056A00 */  sll   $t5, $a1, 8
/* 00491C38 00057A02 */  srl   $t7, $a1, 8
/* 00491C3C 00065A02 */  srl   $t3, $a2, 8
/* 00491C40 00065200 */  sll   $t2, $a2, 8
/* 00491C44 01AFC825 */  or    $t9, $t5, $t7
/* 00491C48 014B6025 */  or    $t4, $t2, $t3
/* 00491C4C 94820030 */  lhu   $v0, 0x30($a0)
/* 00491C50 94980032 */  lhu   $t8, 0x32($a0)
/* 00491C54 A4990028 */  sh    $t9, 0x28($a0)
/* 00491C58 A48C002A */  sh    $t4, 0x2a($a0)
/* 00491C5C 00077A02 */  srl   $t7, $a3, 8
/* 00491C60 00076A00 */  sll   $t5, $a3, 8
/* 00491C64 00085A02 */  srl   $t3, $t0, 8
/* 00491C68 00085200 */  sll   $t2, $t0, 8
/* 00491C6C 01AFC825 */  or    $t9, $t5, $t7
/* 00491C70 014B6025 */  or    $t4, $t2, $t3
/* 00491C74 304E00FF */  andi  $t6, $v0, 0xff
/* 00491C78 A499002C */  sh    $t9, 0x2c($a0)
/* 00491C7C A48C002E */  sh    $t4, 0x2e($a0)
/* 00491C80 000E6A00 */  sll   $t5, $t6, 8
/* 00491C84 00027A02 */  srl   $t7, $v0, 8
/* 00491C88 00185A02 */  srl   $t3, $t8, 8
/* 00491C8C 00185200 */  sll   $t2, $t8, 8
/* 00491C90 01AFC825 */  or    $t9, $t5, $t7
/* 00491C94 014B6025 */  or    $t4, $t2, $t3
/* 00491C98 A4990030 */  sh    $t9, 0x30($a0)
/* 00491C9C 03E00008 */  jr    $ra
/* 00491CA0 A48C0032 */   sh    $t4, 0x32($a0)
    .type swap_ehdr, @function
    .size swap_ehdr, .-swap_ehdr
    .end swap_ehdr

glabel swap_phdr
    .ent swap_phdr
/* 00491CA4 8C820000 */  lw    $v0, ($a0)
/* 00491CA8 8C830004 */  lw    $v1, 4($a0)
/* 00491CAC 3C0700FF */  lui   $a3, 0xff
/* 00491CB0 00027A00 */  sll   $t7, $v0, 8
/* 00491CB4 01E7C024 */  and   $t8, $t7, $a3
/* 00491CB8 00027600 */  sll   $t6, $v0, 0x18
/* 00491CBC 01D8C825 */  or    $t9, $t6, $t8
/* 00491CC0 00024202 */  srl   $t0, $v0, 8
/* 00491CC4 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491CC8 8C850008 */  lw    $a1, 8($a0)
/* 00491CCC 03295025 */  or    $t2, $t9, $t1
/* 00491CD0 00025E02 */  srl   $t3, $v0, 0x18
/* 00491CD4 00037A00 */  sll   $t7, $v1, 8
/* 00491CD8 014B6025 */  or    $t4, $t2, $t3
/* 00491CDC 01E77024 */  and   $t6, $t7, $a3
/* 00491CE0 00034202 */  srl   $t0, $v1, 8
/* 00491CE4 00036E00 */  sll   $t5, $v1, 0x18
/* 00491CE8 01AEC025 */  or    $t8, $t5, $t6
/* 00491CEC 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491CF0 03194825 */  or    $t1, $t8, $t9
/* 00491CF4 8C86000C */  lw    $a2, 0xc($a0)
/* 00491CF8 AC8C0000 */  sw    $t4, ($a0)
/* 00491CFC 00035602 */  srl   $t2, $v1, 0x18
/* 00491D00 00057A00 */  sll   $t7, $a1, 8
/* 00491D04 012A5825 */  or    $t3, $t1, $t2
/* 00491D08 01E76824 */  and   $t5, $t7, $a3
/* 00491D0C 00056600 */  sll   $t4, $a1, 0x18
/* 00491D10 00054202 */  srl   $t0, $a1, 8
/* 00491D14 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491D18 018D7025 */  or    $t6, $t4, $t5
/* 00491D1C 01D8C825 */  or    $t9, $t6, $t8
/* 00491D20 00054E02 */  srl   $t1, $a1, 0x18
/* 00491D24 8C820010 */  lw    $v0, 0x10($a0)
/* 00491D28 AC8B0004 */  sw    $t3, 4($a0)
/* 00491D2C 03295025 */  or    $t2, $t9, $t1
/* 00491D30 00067A00 */  sll   $t7, $a2, 8
/* 00491D34 01E76024 */  and   $t4, $t7, $a3
/* 00491D38 00065E00 */  sll   $t3, $a2, 0x18
/* 00491D3C 00064202 */  srl   $t0, $a2, 8
/* 00491D40 310EFF00 */  andi  $t6, $t0, 0xff00
/* 00491D44 016C6825 */  or    $t5, $t3, $t4
/* 00491D48 8C830014 */  lw    $v1, 0x14($a0)
/* 00491D4C AC8A0008 */  sw    $t2, 8($a0)
/* 00491D50 01AEC025 */  or    $t8, $t5, $t6
/* 00491D54 0006CE02 */  srl   $t9, $a2, 0x18
/* 00491D58 00027A00 */  sll   $t7, $v0, 8
/* 00491D5C 03194825 */  or    $t1, $t8, $t9
/* 00491D60 01E75824 */  and   $t3, $t7, $a3
/* 00491D64 00025600 */  sll   $t2, $v0, 0x18
/* 00491D68 014B6025 */  or    $t4, $t2, $t3
/* 00491D6C 00024202 */  srl   $t0, $v0, 8
/* 00491D70 8C850018 */  lw    $a1, 0x18($a0)
/* 00491D74 AC89000C */  sw    $t1, 0xc($a0)
/* 00491D78 310DFF00 */  andi  $t5, $t0, 0xff00
/* 00491D7C 00037A00 */  sll   $t7, $v1, 8
/* 00491D80 018D7025 */  or    $t6, $t4, $t5
/* 00491D84 01E75024 */  and   $t2, $t7, $a3
/* 00491D88 0002C602 */  srl   $t8, $v0, 0x18
/* 00491D8C 00034E00 */  sll   $t1, $v1, 0x18
/* 00491D90 01D8C825 */  or    $t9, $t6, $t8
/* 00491D94 012A5825 */  or    $t3, $t1, $t2
/* 00491D98 00034202 */  srl   $t0, $v1, 8
/* 00491D9C 310CFF00 */  andi  $t4, $t0, 0xff00
/* 00491DA0 8C86001C */  lw    $a2, 0x1c($a0)
/* 00491DA4 AC990010 */  sw    $t9, 0x10($a0)
/* 00491DA8 016C6825 */  or    $t5, $t3, $t4
/* 00491DAC 00057A00 */  sll   $t7, $a1, 8
/* 00491DB0 01E74824 */  and   $t1, $t7, $a3
/* 00491DB4 00037602 */  srl   $t6, $v1, 0x18
/* 00491DB8 0005CE00 */  sll   $t9, $a1, 0x18
/* 00491DBC 00054202 */  srl   $t0, $a1, 8
/* 00491DC0 01AEC025 */  or    $t8, $t5, $t6
/* 00491DC4 310BFF00 */  andi  $t3, $t0, 0xff00
/* 00491DC8 03295025 */  or    $t2, $t9, $t1
/* 00491DCC 014B6025 */  or    $t4, $t2, $t3
/* 00491DD0 AC980014 */  sw    $t8, 0x14($a0)
/* 00491DD4 00067A00 */  sll   $t7, $a2, 8
/* 00491DD8 01E7C824 */  and   $t9, $t7, $a3
/* 00491DDC 00056E02 */  srl   $t5, $a1, 0x18
/* 00491DE0 0006C600 */  sll   $t8, $a2, 0x18
/* 00491DE4 00064202 */  srl   $t0, $a2, 8
/* 00491DE8 018D7025 */  or    $t6, $t4, $t5
/* 00491DEC 310AFF00 */  andi  $t2, $t0, 0xff00
/* 00491DF0 03194825 */  or    $t1, $t8, $t9
/* 00491DF4 012A5825 */  or    $t3, $t1, $t2
/* 00491DF8 00066602 */  srl   $t4, $a2, 0x18
/* 00491DFC 016C6825 */  or    $t5, $t3, $t4
/* 00491E00 AC8E0018 */  sw    $t6, 0x18($a0)
/* 00491E04 03E00008 */  jr    $ra
/* 00491E08 AC8D001C */   sw    $t5, 0x1c($a0)
    .type swap_phdr, @function
    .size swap_phdr, .-swap_phdr
    .end swap_phdr

glabel swap_shdr
    .ent swap_shdr
/* 00491E0C 8C820000 */  lw    $v0, ($a0)
/* 00491E10 8C830004 */  lw    $v1, 4($a0)
/* 00491E14 3C0700FF */  lui   $a3, 0xff
/* 00491E18 00027A00 */  sll   $t7, $v0, 8
/* 00491E1C 01E7C024 */  and   $t8, $t7, $a3
/* 00491E20 00027600 */  sll   $t6, $v0, 0x18
/* 00491E24 00024202 */  srl   $t0, $v0, 8
/* 00491E28 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491E2C 01D8C825 */  or    $t9, $t6, $t8
/* 00491E30 03295025 */  or    $t2, $t9, $t1
/* 00491E34 00025E02 */  srl   $t3, $v0, 0x18
/* 00491E38 8C850008 */  lw    $a1, 8($a0)
/* 00491E3C 014B6025 */  or    $t4, $t2, $t3
/* 00491E40 00037A00 */  sll   $t7, $v1, 8
/* 00491E44 01E77024 */  and   $t6, $t7, $a3
/* 00491E48 00034202 */  srl   $t0, $v1, 8
/* 00491E4C 00036E00 */  sll   $t5, $v1, 0x18
/* 00491E50 01AEC025 */  or    $t8, $t5, $t6
/* 00491E54 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491E58 8C86000C */  lw    $a2, 0xc($a0)
/* 00491E5C AC8C0000 */  sw    $t4, ($a0)
/* 00491E60 03194825 */  or    $t1, $t8, $t9
/* 00491E64 00035602 */  srl   $t2, $v1, 0x18
/* 00491E68 00057A00 */  sll   $t7, $a1, 8
/* 00491E6C 012A5825 */  or    $t3, $t1, $t2
/* 00491E70 01E76824 */  and   $t5, $t7, $a3
/* 00491E74 00056600 */  sll   $t4, $a1, 0x18
/* 00491E78 018D7025 */  or    $t6, $t4, $t5
/* 00491E7C 00054202 */  srl   $t0, $a1, 8
/* 00491E80 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491E84 8C820010 */  lw    $v0, 0x10($a0)
/* 00491E88 AC8B0004 */  sw    $t3, 4($a0)
/* 00491E8C 01D8C825 */  or    $t9, $t6, $t8
/* 00491E90 00054E02 */  srl   $t1, $a1, 0x18
/* 00491E94 00067A00 */  sll   $t7, $a2, 8
/* 00491E98 03295025 */  or    $t2, $t9, $t1
/* 00491E9C 01E76024 */  and   $t4, $t7, $a3
/* 00491EA0 00065E00 */  sll   $t3, $a2, 0x18
/* 00491EA4 00064202 */  srl   $t0, $a2, 8
/* 00491EA8 310EFF00 */  andi  $t6, $t0, 0xff00
/* 00491EAC 016C6825 */  or    $t5, $t3, $t4
/* 00491EB0 01AEC025 */  or    $t8, $t5, $t6
/* 00491EB4 8C830014 */  lw    $v1, 0x14($a0)
/* 00491EB8 AC8A0008 */  sw    $t2, 8($a0)
/* 00491EBC 0006CE02 */  srl   $t9, $a2, 0x18
/* 00491EC0 00027A00 */  sll   $t7, $v0, 8
/* 00491EC4 03194825 */  or    $t1, $t8, $t9
/* 00491EC8 01E75824 */  and   $t3, $t7, $a3
/* 00491ECC 00025600 */  sll   $t2, $v0, 0x18
/* 00491ED0 00024202 */  srl   $t0, $v0, 8
/* 00491ED4 310DFF00 */  andi  $t5, $t0, 0xff00
/* 00491ED8 014B6025 */  or    $t4, $t2, $t3
/* 00491EDC 018D7025 */  or    $t6, $t4, $t5
/* 00491EE0 0002C602 */  srl   $t8, $v0, 0x18
/* 00491EE4 8C850018 */  lw    $a1, 0x18($a0)
/* 00491EE8 AC89000C */  sw    $t1, 0xc($a0)
/* 00491EEC 01D8C825 */  or    $t9, $t6, $t8
/* 00491EF0 00037A00 */  sll   $t7, $v1, 8
/* 00491EF4 01E75024 */  and   $t2, $t7, $a3
/* 00491EF8 00034E00 */  sll   $t1, $v1, 0x18
/* 00491EFC 00034202 */  srl   $t0, $v1, 8
/* 00491F00 310CFF00 */  andi  $t4, $t0, 0xff00
/* 00491F04 012A5825 */  or    $t3, $t1, $t2
/* 00491F08 8C86001C */  lw    $a2, 0x1c($a0)
/* 00491F0C AC990010 */  sw    $t9, 0x10($a0)
/* 00491F10 016C6825 */  or    $t5, $t3, $t4
/* 00491F14 00037602 */  srl   $t6, $v1, 0x18
/* 00491F18 00057A00 */  sll   $t7, $a1, 8
/* 00491F1C 01AEC025 */  or    $t8, $t5, $t6
/* 00491F20 01E74824 */  and   $t1, $t7, $a3
/* 00491F24 0005CE00 */  sll   $t9, $a1, 0x18
/* 00491F28 03295025 */  or    $t2, $t9, $t1
/* 00491F2C 00054202 */  srl   $t0, $a1, 8
/* 00491F30 8C820020 */  lw    $v0, 0x20($a0)
/* 00491F34 AC980014 */  sw    $t8, 0x14($a0)
/* 00491F38 310BFF00 */  andi  $t3, $t0, 0xff00
/* 00491F3C 00067A00 */  sll   $t7, $a2, 8
/* 00491F40 014B6025 */  or    $t4, $t2, $t3
/* 00491F44 01E7C824 */  and   $t9, $t7, $a3
/* 00491F48 00056E02 */  srl   $t5, $a1, 0x18
/* 00491F4C 0006C600 */  sll   $t8, $a2, 0x18
/* 00491F50 018D7025 */  or    $t6, $t4, $t5
/* 00491F54 03194825 */  or    $t1, $t8, $t9
/* 00491F58 00064202 */  srl   $t0, $a2, 8
/* 00491F5C 310AFF00 */  andi  $t2, $t0, 0xff00
/* 00491F60 8C830024 */  lw    $v1, 0x24($a0)
/* 00491F64 AC8E0018 */  sw    $t6, 0x18($a0)
/* 00491F68 012A5825 */  or    $t3, $t1, $t2
/* 00491F6C 00027A00 */  sll   $t7, $v0, 8
/* 00491F70 01E7C024 */  and   $t8, $t7, $a3
/* 00491F74 00066602 */  srl   $t4, $a2, 0x18
/* 00491F78 00027600 */  sll   $t6, $v0, 0x18
/* 00491F7C 00024202 */  srl   $t0, $v0, 8
/* 00491F80 016C6825 */  or    $t5, $t3, $t4
/* 00491F84 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491F88 01D8C825 */  or    $t9, $t6, $t8
/* 00491F8C 03295025 */  or    $t2, $t9, $t1
/* 00491F90 AC8D001C */  sw    $t5, 0x1c($a0)
/* 00491F94 00037A00 */  sll   $t7, $v1, 8
/* 00491F98 01E77024 */  and   $t6, $t7, $a3
/* 00491F9C 00025E02 */  srl   $t3, $v0, 0x18
/* 00491FA0 00036E00 */  sll   $t5, $v1, 0x18
/* 00491FA4 00034202 */  srl   $t0, $v1, 8
/* 00491FA8 014B6025 */  or    $t4, $t2, $t3
/* 00491FAC 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491FB0 01AEC025 */  or    $t8, $t5, $t6
/* 00491FB4 03194825 */  or    $t1, $t8, $t9
/* 00491FB8 00035602 */  srl   $t2, $v1, 0x18
/* 00491FBC 012A5825 */  or    $t3, $t1, $t2
/* 00491FC0 AC8C0020 */  sw    $t4, 0x20($a0)
/* 00491FC4 03E00008 */  jr    $ra
/* 00491FC8 AC8B0024 */   sw    $t3, 0x24($a0)
    .type swap_shdr, @function
    .size swap_shdr, .-swap_shdr
    .end swap_shdr
)"");
#endif
