#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(PositionViewSystem*, void*))(Il2CppBase() + 0x16DC6EC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(PositionViewSystem*, uintptr_t))(Il2CppBase() + 0x16DC8E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(PositionViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x16DC944))(this, entities);
	}

};

}
