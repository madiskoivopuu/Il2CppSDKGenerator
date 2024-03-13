#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProdObjectRemover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProdObjectRemover"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& objectsToRemove() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProdObjectRemover*))(Il2CppBase() + 0x16E4BBC))(this);
	}

};

