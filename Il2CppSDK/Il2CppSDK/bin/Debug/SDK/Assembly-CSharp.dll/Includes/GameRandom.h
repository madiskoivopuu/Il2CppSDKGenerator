#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameRandom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameRandom"));
	}

	template <typename R = int32_t> static R& MBIG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MSEED() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MZ() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& inext() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& inextp() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppArray<int32_t>*> R& SeedArray() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = double> R Sample() {
		return ((R (*)(GameRandom*))(Il2CppBase() + 0x176D62C))(this);
	}
	template <typename R = int32_t> R InternalSample() {
		return ((R (*)(GameRandom*))(Il2CppBase() + 0x176D650))(this);
	}
	template <typename R = int32_t> R Next() {
		return ((R (*)(GameRandom*))(Il2CppBase() + 0x176D6EC))(this);
	}
	template <typename R = double> R GetSampleForLargeRange() {
		return ((R (*)(GameRandom*))(Il2CppBase() + 0x176D6F0))(this);
	}
	template <typename R = int32_t> R Next_1(int32_t minValue, int32_t maxValue) {
		return ((R (*)(GameRandom*, int32_t, int32_t))(Il2CppBase() + 0x176D740))(this, minValue, maxValue);
	}
	template <typename R = int32_t> R Next_2(int32_t maxValue) {
		return ((R (*)(GameRandom*, int32_t))(Il2CppBase() + 0x176D82C))(this, maxValue);
	}
	template <typename R = double> R NextDouble() {
		return ((R (*)(GameRandom*))(Il2CppBase() + 0x176D8D4))(this);
	}
	template <typename R = void> R NextBytes(Il2CppArray<uint8_t>* buffer) {
		return ((R (*)(GameRandom*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x176D8E0))(this, buffer);
	}
	template <typename R = double> R Range(double min, double max) {
		return ((R (*)(GameRandom*, double, double))(Il2CppBase() + 0x176D998))(this, min, max);
	}
	template <typename R = int32_t> R Range_1(int32_t min, int32_t max) {
		return ((R (*)(GameRandom*, int32_t, int32_t))(Il2CppBase() + 0x176D9D0))(this, min, max);
	}
	template <typename R = int32_t> R Range_2(int32_t max) {
		return ((R (*)(GameRandom*, int32_t))(Il2CppBase() + 0x176D9DC))(this, max);
	}
	 uintptr_t RandomItem(IList1uintptr_t>* list) {
		return ((uintptr_t (*)(GameRandom*, IList1uintptr_t>*))(Il2CppBase() + 0x0))(this, list);
	}

};

