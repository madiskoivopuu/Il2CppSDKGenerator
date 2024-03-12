#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetSlot"));
	}

	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& HighlightedSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NormalColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& DisabledColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T set_Highlighted(bool value) {
		return ((T (*)(PuppetSlot*, bool))(Il2CppBase() + 0x11B72D8))(this, value);
	}
	template <typename T = void> T set_Disabled(bool value) {
		return ((T (*)(PuppetSlot*, bool))(Il2CppBase() + 0x11B7388))(this, value);
	}

};

}
