#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventComponent"));
	}

	template <typename T = Il2CppString*> T& Activator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SpawnDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& WaveDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Repeat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Local() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Il2CppString*> T& UseOnEnd() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& NewStageText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& CompletedCaption() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& CompletedText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Waves() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = int32_t> T GetWavesCount() {
		return ((T (*)(WavesEventComponent*))(Il2CppBase() + 0x112DD50))(this);
	}
	template <typename T = int32_t> T GetTotalCount() {
		return ((T (*)(WavesEventComponent*))(Il2CppBase() + 0x112DD68))(this);
	}
	template <typename T = uintptr_t> T GetWaveOrNull(int32_t index) {
		return ((T (*)(WavesEventComponent*, int32_t))(Il2CppBase() + 0x112DDDC))(this, index);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(WavesEventComponent*, uintptr_t))(Il2CppBase() + 0x112DE20))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WavesEventComponent*, uintptr_t))(Il2CppBase() + 0x112DF2C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WavesEventComponent*, uintptr_t))(Il2CppBase() + 0x112E020))(this, reader);
	}

};

}
