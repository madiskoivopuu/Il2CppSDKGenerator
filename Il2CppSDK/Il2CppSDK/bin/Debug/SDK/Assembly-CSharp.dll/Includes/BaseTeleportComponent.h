#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseTeleportComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseTeleportComponent"));
	}

	template <typename T = Il2CppString*> T& TargetName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Selector() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Direction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Offset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IgnoreWall() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BaseTeleportComponent*, uintptr_t))(Il2CppBase() + 0x16710B0))(this, targetObject);
	}

};

}
