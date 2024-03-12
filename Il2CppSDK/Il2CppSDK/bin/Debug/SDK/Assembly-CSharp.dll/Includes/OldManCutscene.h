#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OldManCutscene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OldManCutscene"));
	}

	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(OldManCutscene*))(Il2CppBase() + 0x11DBF90))(this);
	}

};

}
