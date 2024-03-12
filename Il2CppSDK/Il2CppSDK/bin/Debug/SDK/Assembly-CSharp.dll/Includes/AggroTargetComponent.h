#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggroTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AggroTargetComponent"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Movable() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AggroTargetComponent*, uintptr_t))(Il2CppBase() + 0x129BFB8))(this, targetObject);
	}

};

}
