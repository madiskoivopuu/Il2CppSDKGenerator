#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILoopSoundEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILoopSoundEntity"));
	}


	template <typename T = uintptr_t> T get_loopSound() {
		return ((T (*)(ILoopSoundEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLoopSound() {
		return ((T (*)(ILoopSoundEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(ILoopSoundEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newWork, newLoop);
	}
	template <typename T = void> T ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(ILoopSoundEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newWork, newLoop);
	}
	template <typename T = void> T RemoveLoopSound() {
		return ((T (*)(ILoopSoundEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
