#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExperienceHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExperienceHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& Levels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxExtraLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint32_t> static T& _maxExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> static T get_MaxLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1684C60))(0);
	}
	template <typename T = uint32_t> static T get_MaxExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x1684CD0))(0);
	}
	template <typename T = float> static T GetLevel(Il2CppArray<uintptr_t>* levels, uint32_t experience) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x1684DE8))(0, levels, experience);
	}
	template <typename T = float> static T GetLevel_1(uint32_t experience) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x1684E68))(0, experience);
	}
	template <typename T = uint32_t> static T GetExperience(Il2CppArray<uintptr_t>* levels, float level) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x1684ED4))(0, levels, level);
	}
	template <typename T = uint32_t> static T GetExperience_1(float level) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x168507C))(0, level);
	}
	template <typename T = int32_t> static T GetTotalLevelCap(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0x16850F0))(0, account);
	}
	template <typename T = ValueTuple2uint32_t, uint32_t>*> static T GetProgress(Il2CppArray<uintptr_t>* levels, float level) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x1685270))(0, levels, level);
	}
	template <typename T = ValueTuple2uint32_t, uint32_t>*> static T GetConvertProgress(float level) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x168536C))(0, level);
	}

};

