#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomManagerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomManagerHelper"));
	}


	template <typename T = int32_t> static T GetRangeFromTime(int64_t time, int32_t min, int32_t max) {
		return ((T (*)(void *, int64_t, int32_t, int32_t))(Il2CppBase() + 0x171878C))(0, time, min, max);
	}
	template <typename T = uintptr_t> static T RandomItem(uintptr_t randomManager, Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, array);
	}
	template <typename T = uintptr_t> static T RandomItem_1(uintptr_t randomManager, void* list) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, randomManager, list);
	}
	template <typename T = void> static T Shuffle(uintptr_t randomManager, void* list) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, randomManager, list);
	}
	template <typename T = void> static T RandomItems(uintptr_t randomManager, void* list, int32_t count, void* resultList) {
		return ((T (*)(void *, uintptr_t, void*, int32_t, void*))(Il2CppBase() + 0x0))(0, randomManager, list, count, resultList);
	}
	template <typename T = int32_t> static T RandomRound(uintptr_t randomManager, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x17187B8))(0, randomManager, value);
	}
	template <typename T = int32_t> static T RandomRoundDamage(uintptr_t randomManager, float damage) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x171894C))(0, randomManager, damage);
	}
	template <typename T = uintptr_t> static T RandomInsideCircle(uintptr_t randomManager, float radius) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x171897C))(0, randomManager, radius);
	}
	template <typename T = uintptr_t> static T RandomDailyCycleItem(Il2CppArray<uintptr_t>* array, int64_t now, int64_t cycleLength, int64_t cycleOffset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x0))(0, array, now, cycleLength, cycleOffset);
	}

};

}
