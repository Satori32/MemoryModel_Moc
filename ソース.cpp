#include <stdio.h>

#include "Vector.h"

struct Type {
	//type TYPE = NULL;
	typedef void* TYPE;
	TYPE V;//‚±‚±‚ª‚½‚Ü‚½‚ÜV‚È‚Ì‚Åƒ‰ƒCƒuƒ‰ƒŠ‚Å‹­§‚µ‚Ä‚¢‚Ü‚·B
};

struct TypeAndValue {
	Type T;
	//T.V Value;
};

struct Lambada {
	TypeAndValue(*F)(Vector<TypeAndValue>&)=NULL;
};
struct Lambadas {
	Vector<TypeAndValue(*)(Vector<TypeAndValue>&)> Lambadas;
};

struct MemoryOne {
	TypeAndValue Info;
	TypeAndValue R;
	//type MemoryWord = unsigned char:
	typedef unsigned char Word;
	Word Strage;
	//TypeAndValue(*F)(TypeAndValue&, Word&)=NULL;
	Lambadas L;
};

struct MemoryStructOne {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//Šæ’£‚Á‚Ä–„‚ß‚æ‚¤

	Vector<MemoryOne> Memory;
	//TypeAndValue(*F)(TypeAndValue&, TypeAndValue&)=NULL;//vc cant compile it by writing time.
	Lambadas L;
};
/** /
struct MemoryBigSpace {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//Šæ’£‚Á‚Ä–„‚ß‚æ‚¤

	Vector<MemoryStructOne> Memory;

	//Vector<TypeAndValue(*)(TypeAndValue&,TypeAndValue& B)> Lamdas;
	Lambadas L;
};
/**/