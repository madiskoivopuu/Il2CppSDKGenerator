#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffExtensions"));
	}


	template <typename T = void> static T AddTempBuff(ICommonContexts* world, AddTempBuffData* data) {
		return ((T (*)(void *, ICommonContexts*, AddTempBuffData*))(Il2CppBase() + 0x16B35A8))(0, world, data);
	}
	template <typename T = bool> static T IsOBT(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x16B3A64))(0, world);
	}
	template <typename T = bool> static T IsQA(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x16B3B70))(0, world);
	}
	template <typename T = bool> static T IsActiveNow(TempBuffEntity* entity, ICommonContexts* world, int64_t now) {
		return ((T (*)(void *, TempBuffEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x16AFF98))(0, entity, world, now);
	}
	template <typename T = int32_t> static T GetDayIndex(TempBuffEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, TempBuffEntity*, ICommonContexts*))(Il2CppBase() + 0x16B3E5C))(0, entity, world);
	}

};

