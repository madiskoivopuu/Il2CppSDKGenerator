#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BadgeButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BadgeButton"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _badge() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _badgeRaid() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _badgeText() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R set_InRaid(bool value) {
		return ((R (*)(BadgeButton*, bool))(Il2CppBase() + 0xFBAF50))(this, value);
	}
	template <typename R = Il2CppString*> R get_Text() {
		return ((R (*)(BadgeButton*))(Il2CppBase() + 0xFBAF70))(this);
	}
	template <typename R = void> R set_Text(Il2CppString* value) {
		return ((R (*)(BadgeButton*, Il2CppString*))(Il2CppBase() + 0xFBAF94))(this, value);
	}

};

