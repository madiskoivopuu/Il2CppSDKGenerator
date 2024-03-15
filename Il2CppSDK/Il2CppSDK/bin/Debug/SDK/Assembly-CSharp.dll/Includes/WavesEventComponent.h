#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WavesEventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WavesEventComponent"));
	}

	template <typename R = Il2CppString*> R& Activator() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& SpawnDelay() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& WaveDelay() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& Repeat() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& Local() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = Il2CppString*> R& UseOnEnd() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& NewStageText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& CompletedCaption() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& CompletedText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<Wave*>*> R& Waves() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = int32_t> R GetWavesCount() {
		return ((R (*)(WavesEventComponent*))(Il2CppBase() + 0x112DD50))(this);
	}
	template <typename R = int32_t> R GetTotalCount() {
		return ((R (*)(WavesEventComponent*))(Il2CppBase() + 0x112DD68))(this);
	}
	template <typename R = Wave*> R GetWaveOrNull(int32_t index) {
		return ((R (*)(WavesEventComponent*, int32_t))(Il2CppBase() + 0x112DDDC))(this, index);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(WavesEventComponent*, Il2CppObject*))(Il2CppBase() + 0x112DE20))(this, target);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WavesEventComponent*, uintptr_t))(Il2CppBase() + 0x112DF2C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WavesEventComponent*, uintptr_t))(Il2CppBase() + 0x112E020))(this, reader);
	}

};

