#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpeditionButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpeditionButton"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Selector() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Back() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NormalColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SelectedColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T SetSelected(bool value) {
		return ((T (*)(ExpeditionButton*, bool))(Il2CppBase() + 0xE9D848))(this, value);
	}

};

}
