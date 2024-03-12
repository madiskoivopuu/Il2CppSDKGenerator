#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActionBulletSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActionBulletSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ApplyActionBulletSystem*, void*))(Il2CppBase() + 0x18929F0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ApplyActionBulletSystem*, uintptr_t))(Il2CppBase() + 0x1892B54))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ApplyActionBulletSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1892BA0))(this, entities);
	}

};

}
