#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MoveViewSystem*))(Il2CppBase() + 0x1557788))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MoveViewSystem*))(Il2CppBase() + 0x15578CC))(this);
	}

};

}
