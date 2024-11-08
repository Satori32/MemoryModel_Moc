#include <stdio.h>

#include "Vector.h"

struct Type {
	//type TYPE = NULL;
	typedef void* TYPE;
	TYPE V;
};

struct MemoryOne {
	Type Info;
	Type R;
	//type MemoryWord = unsigned char:
	typedef unsigned char Word;
	Word Strage;
	//R.V(*F)(Info.V, Word&)=NULL;
};

struct MemoryStructOne {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//Šæ’£‚Á‚Ä–„‚ß‚æ‚¤

	Type A;
	Type B;
	Type R;

	Vector<MemoryOne> Memory;
	//R.V(*F)(A.V&, B.V&)=NULL;//vc cant compile it by writing time.
};
/** /
struct MemoryBigSpace {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//Šæ’£‚Á‚Ä–„‚ß‚æ‚¤

	Vector<MemoryStructOne> Memory;

	Type A;
	Type B;
	Type R;

	Vector<R.V(*)(A.V&, B.V&)> Lamdas;
};
/**/