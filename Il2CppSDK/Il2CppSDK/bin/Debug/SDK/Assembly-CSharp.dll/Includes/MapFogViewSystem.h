#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapFogViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapFogViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(MapFogViewSystem*, void*))(Il2CppBase() + 0x126EEB0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t account) {
		return ((T (*)(MapFogViewSystem*, uintptr_t))(Il2CppBase() + 0x126EFD4))(this, account);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(MapFogViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x126F020))(this, entities);
	}

};

}
