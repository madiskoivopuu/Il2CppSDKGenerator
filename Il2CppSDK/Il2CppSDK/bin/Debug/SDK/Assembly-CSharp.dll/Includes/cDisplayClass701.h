#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass701
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass70_1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& itemsTo() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = cDisplayClass700uintptr_t>*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T OnDeleteb__0(float coef) {
		return ((T (*)(cDisplayClass701*, float))(Il2CppBase() + 0x0))(this, coef);
	}

};

