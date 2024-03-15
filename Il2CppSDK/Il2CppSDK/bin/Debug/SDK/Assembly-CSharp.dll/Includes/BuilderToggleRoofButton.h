#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderToggleRoofButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderToggleRoofButton"));
	}

	template <typename R = uintptr_t> R& _spriteHide() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _spriteShow() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _buttonImage() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _roofVisible() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(BuilderToggleRoofButton*))(Il2CppBase() + 0x15A92F8))(this);
	}
	template <typename R = void> R ToggleRoofs(Nullable1<bool>* visible) {
		return ((R (*)(BuilderToggleRoofButton*, Nullable1<bool>*))(Il2CppBase() + 0x15A9394))(this, visible);
	}
	template <typename R = void> R UpdateRoof() {
		return ((R (*)(BuilderToggleRoofButton*))(Il2CppBase() + 0x15A9454))(this);
	}
	template <typename R = void> R Awakeb__5_0() {
		return ((R (*)(BuilderToggleRoofButton*))(Il2CppBase() + 0x15A9718))(this);
	}

};

