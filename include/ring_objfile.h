/* Copyright (c) 2013-2016 Mahmoud Fayed <msfclipper@yahoo.com> */
#ifndef ring_objfile_h
#define ring_objfile_h
/*
**  Data 
**  Functions 
*/

void ring_objfile_writefile ( RingState *pRingState ) ;

void ring_objfile_writelist ( List *pList,FILE *fObj ) ;

int ring_objfile_readfile ( const char *cFileName,RingState *pRingState ) ;

void ring_objfile_updateclassespointers ( RingState *pRingState ) ;

void ring_objfile_xorstring ( char *cString,int nStringSize,char *cKey,int nKeySize ) ;
/* MACRO */
#endif
