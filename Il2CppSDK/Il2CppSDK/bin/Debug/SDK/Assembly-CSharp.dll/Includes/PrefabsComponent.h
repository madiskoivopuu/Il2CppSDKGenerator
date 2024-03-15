#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabsComponent"));
	}

	template <typename R = Il2CppArray<Item>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PrefabsComponent*, Il2CppObject*))(Il2CppBase() + 0x16DEFF8))(this, target);
	}
	 ValueTuple2<Il2CppString*, ProtoModels::WorldResourcesType>* GetName(ICommonContexts* world, GameEntity* target) {
		return ((ValueTuple2<Il2CppString*, ProtoModels::WorldResourcesType>* (*)(PrefabsComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x16DF090))(this, world, target);
	}

};

