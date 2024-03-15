#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWarning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWarning"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _text() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(UIWarning*))(Il2CppBase() + 0x1532050))(this);
	}
	template <typename R = void> R ShowMsg(Il2CppString* msg) {
		return ((R (*)(UIWarning*, Il2CppString*))(Il2CppBase() + 0x15321EC))(this, msg);
	}

};

