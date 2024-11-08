#include <stdio.h>

#include "Vector.h"

struct Type {
	//type TYPE = NULL;
	typedef void* TYPE;
	TYPE V;
};

struct MemoryOne {
	Type Info;
	//type MemoryWord = unsigned char:
	typedef unsigned char Word;
	Word Strage;
	//type R = NULL;
	typedef void* R;
	R(*F)(Type&, Word&)=NULL;
};

struct MemoryStructOne {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//Šæ’£‚Á‚Ä–„‚ß‚æ‚¤

	Vector<MemoryOne> Memory;
	//type A = NULL;
	//type B = NULL;
	//type C = NULL;
	typedef int A;
	typedef int B;
	typedef int C;
	C(*F)(A&, B&)=NULL;
};
/** /
struct MemoryBigSpace {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//Šæ’£‚Á‚Ä–„‚ß‚æ‚¤

	Vector<MemoryStructOne> Memory;
};
/**/