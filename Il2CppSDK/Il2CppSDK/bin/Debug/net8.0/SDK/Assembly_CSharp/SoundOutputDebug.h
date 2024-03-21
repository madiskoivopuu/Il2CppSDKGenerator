#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AudioSource; }

class SoundOutputDebug : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundOutputDebug"));
	}

	UnityEngine::AudioSource*& audioSource() {
		return *(UnityEngine::AudioSource**)((uintptr_t)this + 0x18);
	}

};};
