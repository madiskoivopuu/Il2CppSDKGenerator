#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimsRandomizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimsRandomizer"));
	}

	template <typename R = float> R& delayMin() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& delayMax() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& initialDelay() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& defaultLoopLenght() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& defaultInt() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& isPlaying() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = Il2CppString*> R& IntName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _intHash() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<float>*> R& chances() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(AnimsRandomizer*))(Il2CppBase() + 0x188E4E4))(this);
	}
	template <typename R = void> R OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((R (*)(AnimsRandomizer*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x188E528))(this, animator, stateInfo, layerIndex);
	}
	template <typename R = void> R OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((R (*)(AnimsRandomizer*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x188E5BC))(this, animator, stateInfo, layerIndex);
	}
	template <typename R = void> R SetDelayTime(uintptr_t animator) {
		return ((R (*)(AnimsRandomizer*, uintptr_t))(Il2CppBase() + 0x188E538))(this, animator);
	}
	template <typename R = int32_t> R Choose(Il2CppArray<float>* probs) {
		return ((R (*)(AnimsRandomizer*, Il2CppArray<float>*))(Il2CppBase() + 0x188E6FC))(this, probs);
	}

};

