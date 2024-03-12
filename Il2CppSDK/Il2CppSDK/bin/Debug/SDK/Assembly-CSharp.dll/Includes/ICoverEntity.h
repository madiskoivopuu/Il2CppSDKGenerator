#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICoverEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICoverEntity"));
	}


	template <typename T = uintptr_t> T get_cover() {
		return ((T (*)(ICoverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCover() {
		return ((T (*)(ICoverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCover(Il2CppString* newEffectName) {
		return ((T (*)(ICoverEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newEffectName);
	}
	template <typename T = void> T ReplaceCover(Il2CppString* newEffectName) {
		return ((T (*)(ICoverEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newEffectName);
	}
	template <typename T = void> T RemoveCover() {
		return ((T (*)(ICoverEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
