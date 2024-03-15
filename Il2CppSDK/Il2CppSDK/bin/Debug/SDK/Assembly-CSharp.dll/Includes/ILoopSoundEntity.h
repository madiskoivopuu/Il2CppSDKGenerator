#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILoopSoundEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILoopSoundEntity"));
	}


	template <typename R = LoopSoundComponent*> R get_loopSound() {
		return ((R (*)(ILoopSoundEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLoopSound() {
		return ((R (*)(ILoopSoundEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(ILoopSoundEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newWork, newLoop);
	}
	template <typename R = void> R ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(ILoopSoundEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newWork, newLoop);
	}
	template <typename R = void> R RemoveLoopSound() {
		return ((R (*)(ILoopSoundEntity*))(Il2CppBase() + 0x0))(this);
	}

};

