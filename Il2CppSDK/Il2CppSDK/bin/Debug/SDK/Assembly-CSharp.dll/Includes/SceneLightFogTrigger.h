#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneLightFogTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneLightFogTrigger"));
	}

	template <typename R = uintptr_t> R& _newSkyColor() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _newEquatorColor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _newGroundColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _newFogColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& _changeHeightFog() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& _newHeightFogHorizont() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = float> R& _newHeightFogHeight() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _newHeightFogColor() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = float> R& _timeToChange() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = bool> R& _changeFog() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& _changeAmbient() {
		return *(R*)((uintptr_t)this + 0x79);
	}
	 Il2CppList<uintptr_t>*& _defaultAmbient() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x80);
	}
	 Il2CppList<uintptr_t>*& _newAmbient() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x88);
	}
	template <typename R = float> R& _defaultHFogHorizont() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = float> R& _defaultHFogHeight() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = uintptr_t> R& _defaultHFogColor() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = float> R& _tempFogHorizont() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = float> R& _tempFogHeight() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = uintptr_t> R& _tempFogColor() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = void> R Start() {
		return ((R (*)(SceneLightFogTrigger*))(Il2CppBase() + 0x13572FC))(this);
	}
	template <typename R = void> R Kostyl() {
		return ((R (*)(SceneLightFogTrigger*))(Il2CppBase() + 0x13574E4))(this);
	}
	template <typename R = void> R OnTriggerEnter(uintptr_t other) {
		return ((R (*)(SceneLightFogTrigger*, uintptr_t))(Il2CppBase() + 0x13575B8))(this, other);
	}
	template <typename R = void> R OnTriggerExit(uintptr_t other) {
		return ((R (*)(SceneLightFogTrigger*, uintptr_t))(Il2CppBase() + 0x135776C))(this, other);
	}
	template <typename R = uintptr_t> R ScenelightChanger(Il2CppList<uintptr_t>* LightSettings, float HFHorizont, float HFHeight, uintptr_t HFColor) {
		return ((R (*)(SceneLightFogTrigger*, Il2CppList<uintptr_t>*, float, float, uintptr_t))(Il2CppBase() + 0x135769C))(this, LightSettings, HFHorizont, HFHeight, HFColor);
	}

};

