#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderToggleRoofButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderToggleRoofButton"));
	}

	template <typename T = uintptr_t> T& _spriteHide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _spriteShow() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _buttonImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _roofVisible() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BuilderToggleRoofButton*))(Il2CppBase() + 0x15A92F8))(this);
	}
	template <typename T = void> T ToggleRoofs(Nullable1bool>* visible) {
		return ((T (*)(BuilderToggleRoofButton*, Nullable1bool>*))(Il2CppBase() + 0x15A9394))(this, visible);
	}
	template <typename T = void> T UpdateRoof() {
		return ((T (*)(BuilderToggleRoofButton*))(Il2CppBase() + 0x15A9454))(this);
	}
	template <typename T = void> T Awakeb__5_0() {
		return ((T (*)(BuilderToggleRoofButton*))(Il2CppBase() + 0x15A9718))(this);
	}

};

