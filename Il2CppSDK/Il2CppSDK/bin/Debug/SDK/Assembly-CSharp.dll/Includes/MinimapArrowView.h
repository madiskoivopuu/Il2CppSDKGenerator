#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapArrowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapArrowView"));
	}

	template <typename T = uintptr_t> T& _onBorderRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _inMapRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _modsSettings() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = MinimapArrowMode*> T& _arrowMode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _onBorder() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _ping() {
		return *(T*)((uintptr_t)this + 0x35);
	}

	template <typename T = void> T SetIcon(MinimapArrowMode* arrowMode, uintptr_t color, bool onBorder, bool notRotation, bool ping) {
		return ((T (*)(MinimapArrowView*, MinimapArrowMode*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x12D2A20))(this, arrowMode, color, onBorder, notRotation, ping);
	}

};

