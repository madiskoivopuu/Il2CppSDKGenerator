#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent.h" 

class StatusBarViewComponent : public BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusBarViewComponent"));
	}

	template <typename R = StatusNameShow*> R& StatusNameShow() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& NameFormat() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& HPBarShowDuration() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& DontShowInfo() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = bool> R& DontShowHealthCount() {
		return *(R*)((uintptr_t)this + 0x45);
	}
	template <typename R = bool> R& ShowDPS() {
		return *(R*)((uintptr_t)this + 0x46);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StatusBarViewComponent*, Il2CppObject*))(Il2CppBase() + 0x1490D00))(this, target);
	}

};

