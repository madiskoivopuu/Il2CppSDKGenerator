#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpeditionButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpeditionButton"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Selector() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Back() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& NormalColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& SelectedColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R SetSelected(bool value) {
		return ((R (*)(ExpeditionButton*, bool))(Il2CppBase() + 0xE9D848))(this, value);
	}

};

