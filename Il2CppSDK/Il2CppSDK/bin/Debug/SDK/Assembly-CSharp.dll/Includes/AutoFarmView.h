#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoFarmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoFarmView"));
	}

	template <typename T = TextButtonMonoBehaviour*> T& AutoButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& AutoButtonName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = TextMonoBehaviour*> T& AutoAttempts() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = TextMonoBehaviour*> T& Cooldown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TextMonoBehaviour*> T& AutoName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = UIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _pointName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _binded() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get__binded() {
		return ((T (*)(AutoFarmView*))(Il2CppBase() + 0x1A62DE4))(this);
	}
	template <typename T = void> T set__binded(bool value) {
		return ((T (*)(AutoFarmView*, bool))(Il2CppBase() + 0x1A62DEC))(this, value);
	}
	template <typename T = void> T Bind(UIWindow* window, Il2CppString* pointName) {
		return ((T (*)(AutoFarmView*, UIWindow*, Il2CppString*))(Il2CppBase() + 0x1A62DF8))(this, window, pointName);
	}
	template <typename T = void> T OnAutoFarm() {
		return ((T (*)(AutoFarmView*))(Il2CppBase() + 0x1A630DC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(AutoFarmView*, float))(Il2CppBase() + 0x1A6352C))(this, deltaTime);
	}

};

