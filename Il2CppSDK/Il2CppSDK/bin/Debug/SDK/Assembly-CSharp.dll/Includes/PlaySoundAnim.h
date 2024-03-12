#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaySoundAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaySoundAnim"));
	}

	template <typename T = Il2CppString*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SoundSource() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T PlaySound() {
		return ((T (*)(PlaySoundAnim*))(Il2CppBase() + 0x1702494))(this);
	}

};

}
