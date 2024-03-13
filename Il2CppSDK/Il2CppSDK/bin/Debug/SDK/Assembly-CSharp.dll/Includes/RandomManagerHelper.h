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
	template <typename T = uintptr_t> static T RandomItem(IRandomManager* randomManager, Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, IRandomManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, array);
	}
	template <typename T = uintptr_t> static T RandomItem_1(IRandomManager* randomManager, IList1uintptr_t>* list) {
		return ((T (*)(void *, IRandomManager*, IList1uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, list);
	}
	template <typename T = void> static T Shuffle(IRandomManager* randomManager, IList1uintptr_t>* list) {
		return ((T (*)(void *, IRandomManager*, IList1uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, list);
	}
	template <typename T = void> static T RandomItems(IRandomManager* randomManager, IList1uintptr_t>* list, int32_t count, IList1uintptr_t>* resultList) {
		return ((T (*)(void *, IRandomManager*, IList1uintptr_t>*, int32_t, IList1uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, list, count, resultList);
	}
	template <typename T = int32_t> static T RandomRound(IRandomManager* randomManager, float value) {
		return ((T (*)(void *, IRandomManager*, float))(Il2CppBase() + 0x17187B8))(0, randomManager, value);
	}
	template <typename T = int32_t> static T RandomRoundDamage(IRandomManager* randomManager, float damage) {
		return ((T (*)(void *, IRandomManager*, float))(Il2CppBase() + 0x171894C))(0, randomManager, damage);
	}
	template <typename T = Vec2*> static T RandomInsideCircle(IRandomManager* randomManager, float radius) {
		return ((T (*)(void *, IRandomManager*, float))(Il2CppBase() + 0x171897C))(0, randomManager, radius);
	}
	template <typename T = uintptr_t> static T RandomDailyCycleItem(Il2CppArray<uintptr_t>* array, int64_t now, int64_t cycleLength, int64_t cycleOffset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x0))(0, array, now, cycleLength, cycleOffset);
	}

};

