#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../UnityEngine_CoreModule/UnityEngine/Color.h"

namespace System_Collections { class IEnumerator; }

class SceneLightFogTrigger : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneLightFogTrigger"));
	}

	UnityEngine::Color& _newSkyColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x18);
	}

	UnityEngine::Color& _newEquatorColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x28);
	}

	UnityEngine::Color& _newGroundColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x38);
	}

	UnityEngine::Color& _newFogColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x48);
	}

	bool& _changeHeightFog() {
		return *(bool*)((uintptr_t)this + 0x58);
	}

	float& _newHeightFogHorizont() {
		return *(float*)((uintptr_t)this + 0x5C);
	}

	float& _newHeightFogHeight() {
		return *(float*)((uintptr_t)this + 0x60);
	}

	UnityEngine::Color& _newHeightFogColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x64);
	}

	float& _timeToChange() {
		return *(float*)((uintptr_t)this + 0x74);
	}

	bool& _changeFog() {
		return *(bool*)((uintptr_t)this + 0x78);
	}

	bool& _changeAmbient() {
		return *(bool*)((uintptr_t)this + 0x79);
	}

	Il2CppList<Color>*& _defaultAmbient() {
		return *(Il2CppList<Color>**)((uintptr_t)this + 0x80);
	}

	Il2CppList<Color>*& _newAmbient() {
		return *(Il2CppList<Color>**)((uintptr_t)this + 0x88);
	}

	float& _defaultHFogHorizont() {
		return *(float*)((uintptr_t)this + 0x90);
	}

	float& _defaultHFogHeight() {
		return *(float*)((uintptr_t)this + 0x94);
	}

	UnityEngine::Color& _defaultHFogColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0x98);
	}

	float& _tempFogHorizont() {
		return *(float*)((uintptr_t)this + 0xA8);
	}

	float& _tempFogHeight() {
		return *(float*)((uintptr_t)this + 0xAC);
	}

	UnityEngine::Color& _tempFogColor() {
		return *(UnityEngine::Color*)((uintptr_t)this + 0xB0);
	}

};};
