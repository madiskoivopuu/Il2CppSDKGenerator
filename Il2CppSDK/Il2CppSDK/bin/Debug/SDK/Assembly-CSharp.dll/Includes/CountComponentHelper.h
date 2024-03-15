#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountComponentHelper"));
	}


	template <typename R = bool> static R ReplaceCountIfNeed(ICountEntity* entity, int32_t newCount) {
		return ((R (*)(void *, ICountEntity*, int32_t))(Il2CppBase() + 0x133F95C))(0, entity, newCount);
	}
	template <typename R = int32_t> static R GetUseCount(IUseCountEntity* entity) {
		return ((R (*)(void *, IUseCountEntity*))(Il2CppBase() + 0x133FB40))(0, entity);
	}
	template <typename R = int32_t> static R GetSkipCount(ISkipCountEntity* entity) {
		return ((R (*)(void *, ISkipCountEntity*))(Il2CppBase() + 0x133FC64))(0, entity);
	}
	template <typename R = int32_t> static R GetSequenceIndex(ISequenceIndexEntity* entity) {
		return ((R (*)(void *, ISequenceIndexEntity*))(Il2CppBase() + 0x133FD88))(0, entity);
	}
	template <typename R = bool> static R SetUseCount(IUseCountEntity* entity, int32_t value) {
		return ((R (*)(void *, IUseCountEntity*, int32_t))(Il2CppBase() + 0x133FEAC))(0, entity, value);
	}
	template <typename R = bool> static R SetSkipCount(ISkipCountEntity* entity, int32_t value) {
		return ((R (*)(void *, ISkipCountEntity*, int32_t))(Il2CppBase() + 0x13400A4))(0, entity, value);
	}
	template <typename R = bool> static R SetSequenceIndex(ISequenceIndexEntity* entity, int32_t index, bool replace) {
		return ((R (*)(void *, ISequenceIndexEntity*, int32_t, bool))(Il2CppBase() + 0x134029C))(0, entity, index, replace);
	}

};

