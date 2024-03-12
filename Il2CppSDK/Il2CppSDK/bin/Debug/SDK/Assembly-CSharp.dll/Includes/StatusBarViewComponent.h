#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseColorComponent" 

class StatusBarViewComponent: BaseColorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusBarViewComponent"));
	}

	template <typename T = uintptr_t> T& StatusNameShow() {
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

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(StatusBarViewComponent*, uintptr_t))(Il2CppBase() + 0x1490D00))(this, target);
	}

};

}
