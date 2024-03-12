#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountComponentHelper"));
	}


	template <typename T = bool> static T ReplaceCountIfNeed(uintptr_t entity, int32_t newCount) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x133F95C))(0, entity, newCount);
	}
	template <typename T = int32_t> static T GetUseCount(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x133FB40))(0, entity);
	}
	template <typename T = int32_t> static T GetSkipCount(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x133FC64))(0, entity);
	}
	template <typename T = int32_t> static T GetSequenceIndex(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x133FD88))(0, entity);
	}
	template <typename T = bool> static T SetUseCount(uintptr_t entity, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x133FEAC))(0, entity, value);
	}
	template <typename T = bool> static T SetSkipCount(uintptr_t entity, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x13400A4))(0, entity, value);
	}
	template <typename T = bool> static T SetSequenceIndex(uintptr_t entity, int32_t index, bool replace) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x134029C))(0, entity, index, replace);
	}

};

}
