#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimerEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimerEffectEntity"));
	}


	template <typename R = TimerEffectComponent*> R get_timerEffect() {
		return ((R (*)(ITimerEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTimerEffect() {
		return ((R (*)(ITimerEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((R (*)(ITimerEffectEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newMinGrade);
	}
	template <typename R = void> R ReplaceTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((R (*)(ITimerEffectEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newName, newMinGrade);
	}
	template <typename R = void> R RemoveTimerEffect() {
		return ((R (*)(ITimerEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

