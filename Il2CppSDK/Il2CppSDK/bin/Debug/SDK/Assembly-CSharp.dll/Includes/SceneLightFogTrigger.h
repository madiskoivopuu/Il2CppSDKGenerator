#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneLightFogTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneLightFogTrigger"));
	}

	template <typename T = uintptr_t> T& _newSkyColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _newEquatorColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _newGroundColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _newFogColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _changeHeightFog() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _newHeightFogHorizont() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& _newHeightFogHeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _newHeightFogColor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& _timeToChange() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& _changeFog() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _changeAmbient() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _defaultAmbient() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _newAmbient() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _defaultHFogHorizont() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& _defaultHFogHeight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& _defaultHFogColor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& _tempFogHorizont() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& _tempFogHeight() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& _tempFogColor() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SceneLightFogTrigger*))(Il2CppBase() + 0x13572FC))(this);
	}
	template <typename T = void> T Kostyl() {
		return ((T (*)(SceneLightFogTrigger*))(Il2CppBase() + 0x13574E4))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(SceneLightFogTrigger*, uintptr_t))(Il2CppBase() + 0x13575B8))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(SceneLightFogTrigger*, uintptr_t))(Il2CppBase() + 0x135776C))(this, other);
	}
	template <typename T = uintptr_t> T ScenelightChanger(Il2CppList<uintptr_t>* LightSettings, float HFHorizont, float HFHeight, uintptr_t HFColor) {
		return ((T (*)(SceneLightFogTrigger*, Il2CppList<uintptr_t>*, float, float, uintptr_t))(Il2CppBase() + 0x135769C))(this, LightSettings, HFHorizont, HFHeight, HFColor);
	}

};

}
