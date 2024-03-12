#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicSpawnerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicSpawnerComponent"));
	}

	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IgnoreActorParent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomNames() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Once() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MagicSpawnerComponent*, uintptr_t))(Il2CppBase() + 0x1A2F09C))(this, targetObject);
	}

};

}
