#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWarning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWarning"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _text() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWarning*))(Il2CppBase() + 0x1532050))(this);
	}
	template <typename T = void> T ShowMsg(Il2CppString* msg) {
		return ((T (*)(UIWarning*, Il2CppString*))(Il2CppBase() + 0x15321EC))(this, msg);
	}

};

}
