#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameLoader"));
	}

	template <typename T = Il2CppList<ILoaderStep*>*> T& _steps() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_StepCount() {
		return ((T (*)(GameLoader*))(Il2CppBase() + 0x174E6B8))(this);
	}
	template <typename T = void> T AddStep(ILoaderStep* step) {
		return ((T (*)(GameLoader*, ILoaderStep*))(Il2CppBase() + 0x174E704))(this, step);
	}
	template <typename T = int32_t> T GetNextStepIndex() {
		return ((T (*)(GameLoader*))(Il2CppBase() + 0x174E768))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(GameLoader*))(Il2CppBase() + 0x174E7B8))(this);
	}

};

