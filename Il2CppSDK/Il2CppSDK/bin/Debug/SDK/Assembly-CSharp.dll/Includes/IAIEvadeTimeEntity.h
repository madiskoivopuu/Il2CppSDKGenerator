#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAIEvadeTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAIEvadeTimeEntity"));
	}


	template <typename T = AIEvadeTimeComponent*> T get_aIEvadeTime() {
		return ((T (*)(IAIEvadeTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAIEvadeTime() {
		return ((T (*)(IAIEvadeTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAIEvadeTime(int64_t newTicks) {
		return ((T (*)(IAIEvadeTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTicks);
	}
	template <typename T = void> T ReplaceAIEvadeTime(int64_t newTicks) {
		return ((T (*)(IAIEvadeTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newTicks);
	}
	template <typename T = void> T RemoveAIEvadeTime() {
		return ((T (*)(IAIEvadeTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

