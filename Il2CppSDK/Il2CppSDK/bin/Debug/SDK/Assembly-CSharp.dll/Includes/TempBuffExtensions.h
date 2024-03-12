#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TempBuffExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffExtensions"));
	}


	template <typename T = void> static T AddTempBuff(uintptr_t world, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B35A8))(0, world, data);
	}
	template <typename T = bool> static T IsOBT(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B3A64))(0, world);
	}
	template <typename T = bool> static T IsQA(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B3B70))(0, world);
	}
	template <typename T = bool> static T IsActiveNow(uintptr_t entity, uintptr_t world, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x16AFF98))(0, entity, world, now);
	}
	template <typename T = int32_t> static T GetDayIndex(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B3E5C))(0, entity, world);
	}

};

}
