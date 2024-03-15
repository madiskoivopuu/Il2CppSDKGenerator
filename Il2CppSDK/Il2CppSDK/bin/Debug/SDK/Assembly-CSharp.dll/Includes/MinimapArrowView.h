#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapArrowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapArrowView"));
	}

	template <typename R = uintptr_t> R& _onBorderRoot() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _inMapRoot() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<ModsSettings>*> R& _modsSettings() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = MinimapArrowMode> R& _arrowMode() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _onBorder() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = bool> R& _ping() {
		return *(R*)((uintptr_t)this + 0x35);
	}

	template <typename R = void> R SetIcon(MinimapArrowMode arrowMode, uintptr_t color, bool onBorder, bool notRotation, bool ping) {
		return ((R (*)(MinimapArrowView*, MinimapArrowMode, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x12D2A20))(this, arrowMode, color, onBorder, notRotation, ping);
	}

};

