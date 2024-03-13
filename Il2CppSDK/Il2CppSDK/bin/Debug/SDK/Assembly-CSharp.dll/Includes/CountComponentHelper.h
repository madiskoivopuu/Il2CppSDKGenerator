#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountComponentHelper"));
	}


	template <typename T = bool> static T ReplaceCountIfNeed(ICountEntity* entity, int32_t newCount) {
		return ((T (*)(void *, ICountEntity*, int32_t))(Il2CppBase() + 0x133F95C))(0, entity, newCount);
	}
	template <typename T = int32_t> static T GetUseCount(IUseCountEntity* entity) {
		return ((T (*)(void *, IUseCountEntity*))(Il2CppBase() + 0x133FB40))(0, entity);
	}
	template <typename T = int32_t> static T GetSkipCount(ISkipCountEntity* entity) {
		return ((T (*)(void *, ISkipCountEntity*))(Il2CppBase() + 0x133FC64))(0, entity);
	}
	template <typename T = int32_t> static T GetSequenceIndex(ISequenceIndexEntity* entity) {
		return ((T (*)(void *, ISequenceIndexEntity*))(Il2CppBase() + 0x133FD88))(0, entity);
	}
	template <typename T = bool> static T SetUseCount(IUseCountEntity* entity, int32_t value) {
		return ((T (*)(void *, IUseCountEntity*, int32_t))(Il2CppBase() + 0x133FEAC))(0, entity, value);
	}
	template <typename T = bool> static T SetSkipCount(ISkipCountEntity* entity, int32_t value) {
		return ((T (*)(void *, ISkipCountEntity*, int32_t))(Il2CppBase() + 0x13400A4))(0, entity, value);
	}
	template <typename T = bool> static T SetSequenceIndex(ISequenceIndexEntity* entity, int32_t index, bool replace) {
		return ((T (*)(void *, ISequenceIndexEntity*, int32_t, bool))(Il2CppBase() + 0x134029C))(0, entity, index, replace);
	}

};

