#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICoverEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICoverEntity"));
	}


	template <typename R = CoverComponent*> R get_cover() {
		return ((R (*)(ICoverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCover() {
		return ((R (*)(ICoverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCover(Il2CppString* newEffectName) {
		return ((R (*)(ICoverEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newEffectName);
	}
	template <typename R = void> R ReplaceCover(Il2CppString* newEffectName) {
		return ((R (*)(ICoverEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newEffectName);
	}
	template <typename R = void> R RemoveCover() {
		return ((R (*)(ICoverEntity*))(Il2CppBase() + 0x0))(this);
	}

};

