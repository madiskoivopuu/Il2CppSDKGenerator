#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PrefabsComponent*, Il2CppObject*))(Il2CppBase() + 0x16DEFF8))(this, target);
	}
	template <typename T = ValueTuple2Il2CppString*, WorldResourcesType*>*> T GetName(ICommonContexts* world, GameEntity* target) {
		return ((T (*)(PrefabsComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x16DF090))(this, world, target);
	}

};

