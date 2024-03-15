#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaySoundAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaySoundAnim"));
	}

	template <typename R = Il2CppString*> R& Sound() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& SoundSource() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R PlaySound() {
		return ((R (*)(PlaySoundAnim*))(Il2CppBase() + 0x1702494))(this);
	}

};

