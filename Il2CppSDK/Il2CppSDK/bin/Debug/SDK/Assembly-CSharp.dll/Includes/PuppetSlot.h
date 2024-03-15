#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetSlot"));
	}

	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& NormalSprite() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& HighlightedSprite() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& NormalColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& DisabledColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R set_Highlighted(bool value) {
		return ((R (*)(PuppetSlot*, bool))(Il2CppBase() + 0x11B72D8))(this, value);
	}
	template <typename R = void> R set_Disabled(bool value) {
		return ((R (*)(PuppetSlot*, bool))(Il2CppBase() + 0x11B7388))(this, value);
	}

};

