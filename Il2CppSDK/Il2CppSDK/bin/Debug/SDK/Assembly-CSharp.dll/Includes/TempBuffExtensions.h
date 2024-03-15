#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffExtensions"));
	}


	template <typename R = void> static R AddTempBuff(ICommonContexts* world, AddTempBuffData* data) {
		return ((R (*)(void *, ICommonContexts*, AddTempBuffData*))(Il2CppBase() + 0x16B35A8))(0, world, data);
	}
	template <typename R = bool> static R IsOBT(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x16B3A64))(0, world);
	}
	template <typename R = bool> static R IsQA(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x16B3B70))(0, world);
	}
	template <typename R = bool> static R IsActiveNow(TempBuffEntity* entity, ICommonContexts* world, int64_t now) {
		return ((R (*)(void *, TempBuffEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x16AFF98))(0, entity, world, now);
	}
	template <typename R = int32_t> static R GetDayIndex(TempBuffEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, TempBuffEntity*, ICommonContexts*))(Il2CppBase() + 0x16B3E5C))(0, entity, world);
	}

};

