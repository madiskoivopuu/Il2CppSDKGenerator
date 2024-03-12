#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameRandom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameRandom"));
	}

	template <typename T = int32_t> static T& MBIG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MSEED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& inext() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& inextp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeedArray() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = double> T Sample() {
		return ((T (*)(GameRandom*))(Il2CppBase() + 0x176D62C))(this);
	}
	template <typename T = int32_t> T InternalSample() {
		return ((T (*)(GameRandom*))(Il2CppBase() + 0x176D650))(this);
	}
	template <typename T = int32_t> T Next() {
		return ((T (*)(GameRandom*))(Il2CppBase() + 0x176D6EC))(this);
	}
	template <typename T = double> T GetSampleForLargeRange() {
		return ((T (*)(GameRandom*))(Il2CppBase() + 0x176D6F0))(this);
	}
	template <typename T = int32_t> T Next_1(int32_t minValue, int32_t maxValue) {
		return ((T (*)(GameRandom*, int32_t, int32_t))(Il2CppBase() + 0x176D740))(this, minValue, maxValue);
	}
	template <typename T = int32_t> T Next_2(int32_t maxValue) {
		return ((T (*)(GameRandom*, int32_t))(Il2CppBase() + 0x176D82C))(this, maxValue);
	}
	template <typename T = double> T NextDouble() {
		return ((T (*)(GameRandom*))(Il2CppBase() + 0x176D8D4))(this);
	}
	template <typename T = void> T NextBytes(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(GameRandom*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x176D8E0))(this, buffer);
	}
	template <typename T = double> T Range(double min, double max) {
		return ((T (*)(GameRandom*, double, double))(Il2CppBase() + 0x176D998))(this, min, max);
	}
	template <typename T = int32_t> T Range_1(int32_t min, int32_t max) {
		return ((T (*)(GameRandom*, int32_t, int32_t))(Il2CppBase() + 0x176D9D0))(this, min, max);
	}
	template <typename T = int32_t> T Range_2(int32_t max) {
		return ((T (*)(GameRandom*, int32_t))(Il2CppBase() + 0x176D9DC))(this, max);
	}
	template <typename T = uintptr_t> T RandomItem(void* list) {
		return ((T (*)(GameRandom*, void*))(Il2CppBase() + 0x0))(this, list);
	}

};

}
