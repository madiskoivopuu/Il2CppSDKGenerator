#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoFarmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoFarmView"));
	}

	template <typename R = TextButtonMonoBehaviour*> R& AutoButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& AutoButtonName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = TextMonoBehaviour*> R& AutoAttempts() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = TextMonoBehaviour*> R& Cooldown() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TextMonoBehaviour*> R& AutoName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _pointName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _binded() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = bool> R get__binded() {
		return ((R (*)(AutoFarmView*))(Il2CppBase() + 0x1A62DE4))(this);
	}
	template <typename R = void> R set__binded(bool value) {
		return ((R (*)(AutoFarmView*, bool))(Il2CppBase() + 0x1A62DEC))(this, value);
	}
	template <typename R = void> R Bind(UIWindow* window, Il2CppString* pointName) {
		return ((R (*)(AutoFarmView*, UIWindow*, Il2CppString*))(Il2CppBase() + 0x1A62DF8))(this, window, pointName);
	}
	template <typename R = void> R OnAutoFarm() {
		return ((R (*)(AutoFarmView*))(Il2CppBase() + 0x1A630DC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(AutoFarmView*, float))(Il2CppBase() + 0x1A6352C))(this, deltaTime);
	}

};

