#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimerEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimerEffectEntity"));
	}


	template <typename T = uintptr_t> T get_timerEffect() {
		return ((T (*)(ITimerEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTimerEffect() {
		return ((T (*)(ITimerEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((T (*)(ITimerEffectEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newMinGrade);
	}
	template <typename T = void> T ReplaceTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((T (*)(ITimerEffectEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newMinGrade);
	}
	template <typename T = void> T RemoveTimerEffect() {
		return ((T (*)(ITimerEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
