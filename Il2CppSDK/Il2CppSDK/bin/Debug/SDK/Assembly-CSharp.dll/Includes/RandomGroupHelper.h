#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupHelper"));
	}

	template <typename T = ICommonLogger*> static T& TestLogger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<GachaResources*>*> static T& _gachaCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = GameRandom*> static T& _random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = GameRandom*> static T& _randomWithSeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = ICommonLogger*> static T get_TestLogger() {
		return ((T (*)(void *))(Il2CppBase() + 0x1712CB8))(0);
	}
	template <typename T = void> static T set_TestLogger(ICommonLogger* value) {
		return ((T (*)(void *, ICommonLogger*))(Il2CppBase() + 0x1712D1C))(0, value);
	}
	template <typename T = GameRandom*> static T get_Random() {
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
	template <typename T = Il2CppList<Resource*>*> static T GetResources(ICommonContexts* world, Il2CppString* name) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1713114))(0, world, name);
	}
	template <typename T = Il2CppList<Resource*>*> static T GetResources_1(ICommonContexts* world, Il2CppString* name, AccountEntity* targetAccount, GameEntity* source, bool use) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, AccountEntity*, GameEntity*, bool))(Il2CppBase() + 0x1713354))(0, world, name, targetAccount, source, use);
	}
	template <typename T = void> static T GetResourcesToList(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*))(Il2CppBase() + 0x171342C))(0, world, name, result);
	}
	template <typename T = void> static T GetResourcesToList_1(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* source, bool use) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, bool))(Il2CppBase() + 0x17131D8))(0, world, name, result, targetAccount, source, use);
	}
	template <typename T = void> static T GetResourcesToList_2(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count, bool use) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t, bool))(Il2CppBase() + 0x17134C4))(0, world, name, result, targetAccount, target, source, count, use);
	}
	template <typename T = Il2CppList<Resource*>*> static T GetMandatoryResources(ICommonContexts* world, Il2CppString* name, GameEntity* target, GameEntity* source) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x17144E8))(0, world, name, target, source);
	}
	template <typename T = void> static T GetMandatoryResourcesToList(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, GameEntity* target, GameEntity* source) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, GameEntity*, GameEntity*))(Il2CppBase() + 0x17145B8))(0, world, name, result, target, source);
	}
	template <typename T = void> static T GetMandatoryResourcesToList_1(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t))(Il2CppBase() + 0x1714718))(0, world, name, result, targetAccount, target, source, count);
	}
	template <typename T = Il2CppList<Resource*>*> static T GetAllPossibleResourcesToList(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* source) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x17153CC))(0, world, name, result, targetAccount, source);
	}
	template <typename T = void> static T GetAllPossibleResourcesToList_1(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, int32_t level, GameEntity* target, AccountEntity* targetAccount, GameEntity* source, int32_t count) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, int32_t, GameEntity*, AccountEntity*, GameEntity*, int32_t))(Il2CppBase() + 0x171589C))(0, world, name, result, level, target, targetAccount, source, count);
	}
	template <typename T = PlayerClassType*> static T GetPlayerClass(ICommonContexts* world, Il2CppString* randomGroupName) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1715B70))(0, world, randomGroupName);
	}
	template <typename T = Il2CppString*> static T GetItem(ICommonContexts* world, Il2CppString* randomGroupName, GameEntity* target, AccountEntity* targetAccount, GameEntity* source, Predicate1RGItem*>* condition, bool use) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, GameEntity*, AccountEntity*, GameEntity*, Predicate1RGItem*>*, bool))(Il2CppBase() + 0x1715C64))(0, world, randomGroupName, target, targetAccount, source, condition, use);
	}
	template <typename T = Il2CppList<Resource*>*> static T GetResourcesPercent(ICommonContexts* world, Il2CppString* name, AccountEntity* targetAccount, GameEntity* source, float percent, int32_t elementsCount) {
		return ((T (*)(void *, ICommonContexts*, Il2CppString*, AccountEntity*, GameEntity*, float, int32_t))(Il2CppBase() + 0x17160D4))(0, world, name, targetAccount, source, percent, elementsCount);
	}
	template <typename T = void> static T GetMandatoryMaxResources(ICommonContexts* world, RandomGroupEntity* rg, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count) {
		return ((T (*)(void *, ICommonContexts*, RandomGroupEntity*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t))(Il2CppBase() + 0x1714E64))(0, world, rg, result, targetAccount, target, source, count);
	}
	template <typename T = void> static T GetMaxResources(ICommonContexts* world, RandomGroupEntity* rg, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count, bool use) {
		return ((T (*)(void *, ICommonContexts*, RandomGroupEntity*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t, bool))(Il2CppBase() + 0x1713F08))(0, world, rg, result, targetAccount, target, source, count, use);
	}

};

