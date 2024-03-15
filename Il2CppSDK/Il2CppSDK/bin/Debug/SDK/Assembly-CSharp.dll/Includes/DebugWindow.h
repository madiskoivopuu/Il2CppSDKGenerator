#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DebugWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugWindow"));
	}

	template <typename R = uintptr_t> R& _serverTimeText() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DebugWindow*))(Il2CppBase() + 0xEB5EC4))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(DebugWindow*))(Il2CppBase() + 0xEB5EC8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DebugWindow*, float))(Il2CppBase() + 0xEB5ECC))(this, deltaTime);
	}

};

