#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BadgeButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BadgeButton"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _badge() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _badgeRaid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _badgeText() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T set_InRaid(bool value) {
		return ((T (*)(BadgeButton*, bool))(Il2CppBase() + 0xFBAF50))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(BadgeButton*))(Il2CppBase() + 0xFBAF70))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(BadgeButton*, Il2CppString*))(Il2CppBase() + 0xFBAF94))(this, value);
	}

};

}
