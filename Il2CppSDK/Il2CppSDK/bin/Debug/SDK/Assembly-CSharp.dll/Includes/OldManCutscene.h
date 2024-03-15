#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OldManCutscene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OldManCutscene"));
	}

	template <typename R = float> R& speed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& animator() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Update() {
		return ((R (*)(OldManCutscene*))(Il2CppBase() + 0x11DBF90))(this);
	}

};

