#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NakedViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NakedViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(NakedViewSystem*, void*))(Il2CppBase() + 0x155A418))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(NakedViewSystem*, uintptr_t))(Il2CppBase() + 0x155A4E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entitiesModifiers) {
		return ((T (*)(NakedViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x155A500))(this, entitiesModifiers);
	}

};

}
