#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class DebugWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugWindow"));
	}

	template <typename T = uintptr_t> T& _serverTimeText() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DebugWindow*))(Il2CppBase() + 0xEB5EC4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(DebugWindow*))(Il2CppBase() + 0xEB5EC8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DebugWindow*, float))(Il2CppBase() + 0xEB5ECC))(this, deltaTime);
	}

};

}
