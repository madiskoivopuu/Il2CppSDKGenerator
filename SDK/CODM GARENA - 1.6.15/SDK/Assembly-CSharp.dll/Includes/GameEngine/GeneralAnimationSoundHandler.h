#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GeneralAnimationSoundHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GeneralAnimationSoundHandler"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T PlaySound(Il2CppString* soundID) {
		return ((T (*)(GeneralAnimationSoundHandler*, Il2CppString*))(Il2CppBase() + 0x36E5048))(this, soundID);
	}

};

}