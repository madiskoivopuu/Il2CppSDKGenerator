#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimsRandomizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimsRandomizer"));
	}

	template <typename T = float> T& delayMin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delayMax() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& initialDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& defaultLoopLenght() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& defaultInt() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isPlaying() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& IntName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _intHash() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& chances() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AnimsRandomizer*))(Il2CppBase() + 0x188E4E4))(this);
	}
	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(AnimsRandomizer*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x188E528))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(AnimsRandomizer*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x188E5BC))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T SetDelayTime(uintptr_t animator) {
		return ((T (*)(AnimsRandomizer*, uintptr_t))(Il2CppBase() + 0x188E538))(this, animator);
	}
	template <typename T = int32_t> T Choose(Il2CppArray<uintptr_t>* probs) {
		return ((T (*)(AnimsRandomizer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x188E6FC))(this, probs);
	}

};

