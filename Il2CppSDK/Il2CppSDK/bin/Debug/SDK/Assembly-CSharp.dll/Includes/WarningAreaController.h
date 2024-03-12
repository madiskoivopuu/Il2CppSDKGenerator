#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningAreaController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningAreaController"));
	}

	template <typename T = Il2CppString*> T& _currentViewName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& StartDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& BaseColorAnim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& AnimatedColorAnim() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& AnimatedRangeAnim() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _views() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppString*> T get_CurrentViewName() {
		return ((T (*)(WarningAreaController*))(Il2CppBase() + 0x112BD6C))(this);
	}
	template <typename T = void> T set_CurrentViewName(Il2CppString* value) {
		return ((T (*)(WarningAreaController*, Il2CppString*))(Il2CppBase() + 0x112BD74))(this, value);
	}
	template <typename T = void> T SetCurrentView(Il2CppString* value) {
		return ((T (*)(WarningAreaController*, Il2CppString*))(Il2CppBase() + 0x112BDB8))(this, value);
	}
	template <typename T = void> T Setup(uintptr_t param) {
		return ((T (*)(WarningAreaController*, uintptr_t))(Il2CppBase() + 0x112BF54))(this, param);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WarningAreaController*))(Il2CppBase() + 0x112C0A4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WarningAreaController*))(Il2CppBase() + 0x112C0AC))(this);
	}

};

}
