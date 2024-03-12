#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupHelper"));
	}

	template <typename T = uintptr_t> static T& TestLogger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _gachaCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _randomWithSeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_TestLogger() {
		return ((T (*)(void *))(Il2CppBase() + 0x1712CB8))(0);
	}
	template <typename T = void> static T set_TestLogger(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1712D1C))(0, value);
	}
	template <typename T = uintptr_t> static T get_Random() {
		return ((T (*)(void *))(Il2CppBase() + 0x1712D88))(0);
	}
	template <typename T = float> static T RandomRange(float min, float max) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x1712E14))(0, min, max);
	}
	template <typename T = Il2CppString*> static T RandomString(int32_t length) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1712EA4))(0, length);
	}
	template <typename T = void> static T SetSeed(int32_t seed) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1712F7C))(0, seed);
	}
	template <typename T = void> static T SetSeed_1(int64_t time) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x1713014))(0, time);
	}
	template <typename T = void> static T RemoveSeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x17130AC))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetResources(uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1713114))(0, world, name);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetResources_1(uintptr_t world, Il2CppString* name, uintptr_t targetAccount, uintptr_t source, bool use) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1713354))(0, world, name, targetAccount, source, use);
	}
	template <typename T = void> static T GetResourcesToList(uintptr_t world, Il2CppString* name, Il2CppList<uintptr_t>* result) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x171342C))(0, world, name, result);
	}
	template <typename T = void> static T GetResourcesToList_1(uintptr_t world, Il2CppString* name, Il2CppList<uintptr_t>* result, uintptr_t targetAccount, uintptr_t source, bool use) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17131D8))(0, world, name, result, targetAccount, source, use);
	}
	template <typename T = void> static T GetResourcesToList_2(uintptr_t world, Il2CppString* name, Il2CppList<uintptr_t>* result, uintptr_t targetAccount, uintptr_t target, uintptr_t source, int32_t count, bool use) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x17134C4))(0, world, name, result, targetAccount, target, source, count, use);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetMandatoryResources(uintptr_t world, Il2CppString* name, uintptr_t target, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17144E8))(0, world, name, target, source);
	}
	template <typename T = void> static T GetMandatoryResourcesToList(uintptr_t world, Il2CppString* name, Il2CppList<uintptr_t>* result, uintptr_t target, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17145B8))(0, world, name, result, target, source);
	}
	template <typename T = void> static T GetMandatoryResourcesToList_1(uintptr_t world, Il2CppString* name, Il2CppList<uintptr_t>* result, uintptr_t targetAccount, uintptr_t target, uintptr_t source, int32_t count) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1714718))(0, world, name, result, targetAccount, target, source, count);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllPossibleResourcesToList(uintptr_t world, Il2CppString* name, Il2CppList<uintptr_t>* result, uintptr_t targetAccount, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17153CC))(0, world, name, result, targetAccount, source);
	}
	template <typename T = void> static T GetAllPossibleResourcesToList_1(uintptr_t world, Il2CppString* name, Il2CppList<uintptr_t>* result, int32_t level, uintptr_t target, uintptr_t targetAccount, uintptr_t source, int32_t count) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x171589C))(0, world, name, result, level, target, targetAccount, source, count);
	}
	template <typename T = uintptr_t> static T GetPlayerClass(uintptr_t world, Il2CppString* randomGroupName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1715B70))(0, world, randomGroupName);
	}
	template <typename T = Il2CppString*> static T GetItem(uintptr_t world, Il2CppString* randomGroupName, uintptr_t target, uintptr_t targetAccount, uintptr_t source, void* condition, bool use) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x1715C64))(0, world, randomGroupName, target, targetAccount, source, condition, use);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetResourcesPercent(uintptr_t world, Il2CppString* name, uintptr_t targetAccount, uintptr_t source, float percent, int32_t elementsCount) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x17160D4))(0, world, name, targetAccount, source, percent, elementsCount);
	}
	template <typename T = void> static T GetMandatoryMaxResources(uintptr_t world, uintptr_t rg, Il2CppList<uintptr_t>* result, uintptr_t targetAccount, uintptr_t target, uintptr_t source, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1714E64))(0, world, rg, result, targetAccount, target, source, count);
	}
	template <typename T = void> static T GetMaxResources(uintptr_t world, uintptr_t rg, Il2CppList<uintptr_t>* result, uintptr_t targetAccount, uintptr_t target, uintptr_t source, int32_t count, bool use) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1713F08))(0, world, rg, result, targetAccount, target, source, count, use);
	}

};

}
