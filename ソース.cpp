#include <stdio.h>

#include "Vector.h"

struct Type {
	//type TYPE = NULL;
	typedef void* TYPE;
	TYPE V;//ここがたまたまVなのでライブラリで強制しています。
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
	TypeAndValue(*F)(TypeAndValue&, Word&)=NULL;
};

struct MemoryStructOne {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//頑張って埋めよう

	TypeAndValue A;
	TypeAndValue B;
	TypeAndValue R;

	Vector<MemoryOne> Memory;
	TypeAndValue(*F)(TypeAndValue&, TypeAndValue&)=NULL;//vc cant compile it by writing time.
};
/**/
struct MemoryBigSpace {
	//type T=NULL:
	typedef unsigned char T;
	T Info;//頑張って埋めよう

	Vector<MemoryStructOne> Memory;

	Vector<TypeAndValue(*)(TypeAndValue&,TypeAndValue& B)> Lamdas;
};
/**/