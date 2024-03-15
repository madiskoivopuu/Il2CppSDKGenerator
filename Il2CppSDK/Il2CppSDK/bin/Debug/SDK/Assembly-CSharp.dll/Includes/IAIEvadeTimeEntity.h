#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIEvadeTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIEvadeTimeEntity"));
	}


	template <typename R = AIEvadeTimeComponent*> R get_aIEvadeTime() {
		return ((R (*)(IAIEvadeTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAIEvadeTime() {
		return ((R (*)(IAIEvadeTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAIEvadeTime(int64_t newTicks) {
		return ((R (*)(IAIEvadeTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTicks);
	}
	template <typename R = void> R ReplaceAIEvadeTime(int64_t newTicks) {
		return ((R (*)(IAIEvadeTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTicks);
	}
	template <typename R = void> R RemoveAIEvadeTime() {
		return ((R (*)(IAIEvadeTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

