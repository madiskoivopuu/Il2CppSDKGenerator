#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomManagerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomManagerHelper"));
	}


	template <typename R = int32_t> static R GetRangeFromTime(int64_t time, int32_t min, int32_t max) {
		return ((R (*)(void *, int64_t, int32_t, int32_t))(Il2CppBase() + 0x171878C))(0, time, min, max);
	}
	 static uintptr_t RandomItem(IRandomManager* randomManager, Il2CppArray<uintptr_t>* array) {
		return ((uintptr_t (*)(void *, IRandomManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, array);
	}
	 static uintptr_t RandomItem_1(IRandomManager* randomManager, IList1uintptr_t>* list) {
		return ((uintptr_t (*)(void *, IRandomManager*, IList1uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, list);
	}
	template <typename R = void> static R Shuffle(IRandomManager* randomManager, IList1uintptr_t>* list) {
		return ((R (*)(void *, IRandomManager*, IList1uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, list);
	}
	template <typename R = void> static R RandomItems(IRandomManager* randomManager, IList1uintptr_t>* list, int32_t count, IList1uintptr_t>* resultList) {
		return ((R (*)(void *, IRandomManager*, IList1uintptr_t>*, int32_t, IList1uintptr_t>*))(Il2CppBase() + 0x0))(0, randomManager, list, count, resultList);
	}
	template <typename R = int32_t> static R RandomRound(IRandomManager* randomManager, float value) {
		return ((R (*)(void *, IRandomManager*, float))(Il2CppBase() + 0x17187B8))(0, randomManager, value);
	}
	template <typename R = int32_t> static R RandomRoundDamage(IRandomManager* randomManager, float damage) {
		return ((R (*)(void *, IRandomManager*, float))(Il2CppBase() + 0x171894C))(0, randomManager, damage);
	}
	template <typename R = Vec2*> static R RandomInsideCircle(IRandomManager* randomManager, float radius) {
		return ((R (*)(void *, IRandomManager*, float))(Il2CppBase() + 0x171897C))(0, randomManager, radius);
	}
	 static uintptr_t RandomDailyCycleItem(Il2CppArray<uintptr_t>* array, int64_t now, int64_t cycleLength, int64_t cycleOffset) {
		return ((uintptr_t (*)(void *, Il2CppArray<uintptr_t>*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x0))(0, array, now, cycleLength, cycleOffset);
	}

};

