#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapViewTransactionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapViewTransactionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _views() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _viewsToRemove() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MapViewTransactionSystem*))(Il2CppBase() + 0x12CB450))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MapViewTransactionSystem*))(Il2CppBase() + 0x12CB5E0))(this);
	}

};

}
