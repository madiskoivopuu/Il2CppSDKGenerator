#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogController"));
	}

	template <typename R = FogSetting*> R& _setting() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1FogSetting*>*& _save() {
		return *(Nullable1FogSetting*>**)((uintptr_t)this + 0x3C);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(FogController*))(Il2CppBase() + 0x15F7C70))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(FogController*))(Il2CppBase() + 0x15F7D48))(this);
	}

};

