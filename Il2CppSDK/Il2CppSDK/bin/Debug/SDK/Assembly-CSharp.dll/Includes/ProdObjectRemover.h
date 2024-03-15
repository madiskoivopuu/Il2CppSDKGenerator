#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProdObjectRemover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProdObjectRemover"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& objectsToRemove() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ProdObjectRemover*))(Il2CppBase() + 0x16E4BBC))(this);
	}

};

