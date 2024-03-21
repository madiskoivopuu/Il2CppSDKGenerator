#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"


class PlaySoundAnim : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaySoundAnim"));
	}

	Il2CppString*& Sound() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppArray<Transform*>*& SoundSource() {
		return *(Il2CppArray<Transform*>**)((uintptr_t)this + 0x20);
	}

};};
