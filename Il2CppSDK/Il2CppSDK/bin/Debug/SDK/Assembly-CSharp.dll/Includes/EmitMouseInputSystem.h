#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmitMouseInputSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmitMouseInputSystem"));
	}

	template <typename T = InputContext*> T& _input() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = InputEntity*> T& _leftMouseEntity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = InputEntity*> T& _rightMouseEntity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _clickArea() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(EmitMouseInputSystem*))(Il2CppBase() + 0x136A66C))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(EmitMouseInputSystem*, uintptr_t))(Il2CppBase() + 0x136AA08))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(EmitMouseInputSystem*, uintptr_t))(Il2CppBase() + 0x136AB20))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(EmitMouseInputSystem*, uintptr_t))(Il2CppBase() + 0x136AC38))(this, eventData);
	}

};

