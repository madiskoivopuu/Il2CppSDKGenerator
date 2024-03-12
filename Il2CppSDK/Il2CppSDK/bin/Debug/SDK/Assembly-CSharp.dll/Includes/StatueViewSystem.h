#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _arena() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _lastStatus() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(StatueViewSystem*))(Il2CppBase() + 0x1490198))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(StatueViewSystem*))(Il2CppBase() + 0x1490374))(this);
	}

};

}
