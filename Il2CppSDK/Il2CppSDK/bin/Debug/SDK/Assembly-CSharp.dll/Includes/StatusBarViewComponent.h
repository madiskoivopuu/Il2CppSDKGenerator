#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent.h" 

class StatusBarViewComponent : public BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusBarViewComponent"));
	}

	template <typename T = StatusNameShow*> T& StatusNameShow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& NameFormat() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& HPBarShowDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& DontShowInfo() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& DontShowHealthCount() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& ShowDPS() {
		return *(T*)((uintptr_t)this + 0x46);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(StatusBarViewComponent*, Il2CppObject*))(Il2CppBase() + 0x1490D00))(this, target);
	}

};

