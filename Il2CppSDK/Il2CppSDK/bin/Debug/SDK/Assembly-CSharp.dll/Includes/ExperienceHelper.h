#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExperienceHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExperienceHelper"));
	}

	template <typename R = Il2CppArray<uint32_t>*> static R& Levels() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MaxExtraLevelCap() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = uint32_t> static R& _maxExperience() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename R = int32_t> static R get_MaxLevel() {
		return ((R (*)(void *))(Il2CppBase() + 0x1684C60))(0);
	}
	template <typename R = uint32_t> static R get_MaxExperience() {
		return ((R (*)(void *))(Il2CppBase() + 0x1684CD0))(0);
	}
	template <typename R = float> static R GetLevel(Il2CppArray<uint32_t>* levels, uint32_t experience) {
		return ((R (*)(void *, Il2CppArray<uint32_t>*, uint32_t))(Il2CppBase() + 0x1684DE8))(0, levels, experience);
	}
	template <typename R = float> static R GetLevel_1(uint32_t experience) {
		return ((R (*)(void *, uint32_t))(Il2CppBase() + 0x1684E68))(0, experience);
	}
	template <typename R = uint32_t> static R GetExperience(Il2CppArray<uint32_t>* levels, float level) {
		return ((R (*)(void *, Il2CppArray<uint32_t>*, float))(Il2CppBase() + 0x1684ED4))(0, levels, level);
	}
	template <typename R = uint32_t> static R GetExperience_1(float level) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x168507C))(0, level);
	}
	template <typename R = int32_t> static R GetTotalLevelCap(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0x16850F0))(0, account);
	}
	 static ValueTuple2uint32_t, uint32_t>* GetProgress(Il2CppArray<uint32_t>* levels, float level) {
		return ((ValueTuple2uint32_t, uint32_t>* (*)(void *, Il2CppArray<uint32_t>*, float))(Il2CppBase() + 0x1685270))(0, levels, level);
	}
	 static ValueTuple2uint32_t, uint32_t>* GetConvertProgress(float level) {
		return ((ValueTuple2uint32_t, uint32_t>* (*)(void *, float))(Il2CppBase() + 0x168536C))(0, level);
	}

};

