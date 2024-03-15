#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningAreaController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningAreaController"));
	}

	template <typename R = Il2CppString*> R& _currentViewName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& StartDistance() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& Width() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& Duration() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Color() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = uintptr_t> R& BaseColorAnim() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& AnimatedColorAnim() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& AnimatedRangeAnim() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppArray<BaseWarningAreaView*>*> R& _views() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = Il2CppString*> R get_CurrentViewName() {
		return ((R (*)(WarningAreaController*))(Il2CppBase() + 0x112BD6C))(this);
	}
	template <typename R = void> R set_CurrentViewName(Il2CppString* value) {
		return ((R (*)(WarningAreaController*, Il2CppString*))(Il2CppBase() + 0x112BD74))(this, value);
	}
	template <typename R = void> R SetCurrentView(Il2CppString* value) {
		return ((R (*)(WarningAreaController*, Il2CppString*))(Il2CppBase() + 0x112BDB8))(this, value);
	}
	template <typename R = void> R Setup(WarningAreaParam* param) {
		return ((R (*)(WarningAreaController*, WarningAreaParam*))(Il2CppBase() + 0x112BF54))(this, param);
	}
	template <typename R = void> R Start() {
		return ((R (*)(WarningAreaController*))(Il2CppBase() + 0x112C0A4))(this);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(WarningAreaController*))(Il2CppBase() + 0x112C0AC))(this);
	}

};

