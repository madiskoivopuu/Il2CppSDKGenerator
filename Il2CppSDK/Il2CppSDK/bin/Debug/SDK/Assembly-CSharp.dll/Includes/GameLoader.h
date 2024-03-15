#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameLoader"));
	}

	 Il2CppList<ILoaderStep*>*& _steps() {
		return *(Il2CppList<ILoaderStep*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = int32_t> R get_StepCount() {
		return ((R (*)(GameLoader*))(Il2CppBase() + 0x174E6B8))(this);
	}
	template <typename R = void> R AddStep(ILoaderStep* step) {
		return ((R (*)(GameLoader*, ILoaderStep*))(Il2CppBase() + 0x174E704))(this, step);
	}
	template <typename R = int32_t> R GetNextStepIndex() {
		return ((R (*)(GameLoader*))(Il2CppBase() + 0x174E768))(this);
	}
	template <typename R = uintptr_t> R GetEnumerator() {
		return ((R (*)(GameLoader*))(Il2CppBase() + 0x174E7B8))(this);
	}

};

