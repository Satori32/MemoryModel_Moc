#include <stdio.h>

#include "Vector.h"

struct Type {
	//type TYPE = NULL;
	typedef void* TYPE;
	TYPE V;//���������܂���V�Ȃ̂Ń��C�u�����ŋ������Ă��܂��B
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
	T Info;//�撣���Ė��߂悤

	Vector<MemoryOne> Memory;
	//TypeAndValue(*F)(TypeAndValue&, TypeAndValue&)=NULL;//vc cant compile it by writing time.
	Lambadas L;
};
/** /
struct MemoryBigSpace {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//�撣���Ė��߂悤

	Vector<MemoryStructOne> Memory;

	//Vector<TypeAndValue(*)(TypeAndValue&,TypeAndValue& B)> Lamdas;
	Lambadas L;
};
/**/