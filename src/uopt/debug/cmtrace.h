#pragma once
#include "uopt/bitvector.h"

struct PrecmData {
    struct Graphnode *node;

    struct BitVector indiracc;
    struct BitVector antlocs;
    struct BitVector alters;
    struct BitVector avlocs;
    struct BitVector absalters;
    struct BitVector pavlocs;
    struct BitVector expoccur;
    struct BitVector iv;
    struct BitVector cand;
    struct BitVector avin;
    struct BitVector avout;
    struct BitVector antin;
    struct BitVector antout;
    struct BitVector pavin;
    struct BitVector pavout;
};

struct CmData {
    struct Graphnode *node;

    
    struct BitVector antlocs;
    struct BitVector alters;
    struct BitVector avlocs;
    struct BitVector absalters;

    struct BitVector delete;
    struct BitVector ppin;
    /* 
    struct BitVector iv;
    struct BitVector cand;
     */
    struct BitVector subdelete;
    struct BitVector subinsert;
    
    struct BitVector antin;
    struct BitVector antout;

    struct BitVector insert;
    struct BitVector ppout;

    struct BitVector sink; // 0x134
    struct BitVector source; // 0x154
    struct BitVector region; // 0x15C
};

void cmtrace_trace_all_precm();
void cmtrace_trace_all_cm();
void cmtrace_copy_precm(struct Graphnode *node);
void cmtrace_copy_cm(struct Graphnode *node);
void cmtrace_clear();
struct LineBuffer build_precm_buffer();
struct LineBuffer build_cm_buffer();
