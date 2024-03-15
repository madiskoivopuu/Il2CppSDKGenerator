#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupHelper"));
	}

	template <typename R = ICommonLogger*> static R& TestLogger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppList<GachaResources*>*& _gachaCache() {
		return *(Il2CppList<GachaResources*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = GameRandom*> static R& _random() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = GameRandom*> static R& _randomWithSeed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename R = ICommonLogger*> static R get_TestLogger() {
		return ((R (*)(void *))(Il2CppBase() + 0x1712CB8))(0);
	}
	template <typename R = void> static R set_TestLogger(ICommonLogger* value) {
		return ((R (*)(void *, ICommonLogger*))(Il2CppBase() + 0x1712D1C))(0, value);
	}
	template <typename R = GameRandom*> static R get_Random() {
		return ((R (*)(void *))(Il2CppBase() + 0x1712D88))(0);
	}
	template <typename R = float> static R RandomRange(float min, float max) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x1712E14))(0, min, max);
	}
	template <typename R = Il2CppString*> static R RandomString(int32_t length) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1712EA4))(0, length);
	}
	template <typename R = void> static R SetSeed(int32_t seed) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1712F7C))(0, seed);
	}
	template <typename R = void> static R SetSeed_1(int64_t time) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x1713014))(0, time);
	}
	template <typename R = void> static R RemoveSeed() {
		return ((R (*)(void *))(Il2CppBase() + 0x17130AC))(0);
	}
	 static Il2CppList<Resource*>* GetResources(ICommonContexts* world, Il2CppString* name) {
		return ((Il2CppList<Resource*>* (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1713114))(0, world, name);
	}
	 static Il2CppList<Resource*>* GetResources_1(ICommonContexts* world, Il2CppString* name, AccountEntity* targetAccount, GameEntity* source, bool use) {
		return ((Il2CppList<Resource*>* (*)(void *, ICommonContexts*, Il2CppString*, AccountEntity*, GameEntity*, bool))(Il2CppBase() + 0x1713354))(0, world, name, targetAccount, source, use);
	}
	template <typename R = void> static R GetResourcesToList(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*))(Il2CppBase() + 0x171342C))(0, world, name, result);
	}
	template <typename R = void> static R GetResourcesToList_1(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* source, bool use) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, bool))(Il2CppBase() + 0x17131D8))(0, world, name, result, targetAccount, source, use);
	}
	template <typename R = void> static R GetResourcesToList_2(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count, bool use) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t, bool))(Il2CppBase() + 0x17134C4))(0, world, name, result, targetAccount, target, source, count, use);
	}
	 static Il2CppList<Resource*>* GetMandatoryResources(ICommonContexts* world, Il2CppString* name, GameEntity* target, GameEntity* source) {
		return ((Il2CppList<Resource*>* (*)(void *, ICommonContexts*, Il2CppString*, GameEntity*, GameEntity*))(Il2CppBase() + 0x17144E8))(0, world, name, target, source);
	}
	template <typename R = void> static R GetMandatoryResourcesToList(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, GameEntity* target, GameEntity* source) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, GameEntity*, GameEntity*))(Il2CppBase() + 0x17145B8))(0, world, name, result, target, source);
	}
	template <typename R = void> static R GetMandatoryResourcesToList_1(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t))(Il2CppBase() + 0x1714718))(0, world, name, result, targetAccount, target, source, count);
	}
	 static Il2CppList<Resource*>* GetAllPossibleResourcesToList(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* source) {
		return ((Il2CppList<Resource*>* (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*))(Il2CppBase() + 0x17153CC))(0, world, name, result, targetAccount, source);
	}
	template <typename R = void> static R GetAllPossibleResourcesToList_1(ICommonContexts* world, Il2CppString* name, Il2CppList<Resource*>* result, int32_t level, GameEntity* target, AccountEntity* targetAccount, GameEntity* source, int32_t count) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*, Il2CppList<Resource*>*, int32_t, GameEntity*, AccountEntity*, GameEntity*, int32_t))(Il2CppBase() + 0x171589C))(0, world, name, result, level, target, targetAccount, source, count);
	}
	template <typename R = PlayerClassType*> static R GetPlayerClass(ICommonContexts* world, Il2CppString* randomGroupName) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x1715B70))(0, world, randomGroupName);
	}
	template <typename R = Il2CppString*> static R GetItem(ICommonContexts* world, Il2CppString* randomGroupName, GameEntity* target, AccountEntity* targetAccount, GameEntity* source, Predicate1RGItem*>* condition, bool use) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*, GameEntity*, AccountEntity*, GameEntity*, Predicate1RGItem*>*, bool))(Il2CppBase() + 0x1715C64))(0, world, randomGroupName, target, targetAccount, source, condition, use);
	}
	 static Il2CppList<Resource*>* GetResourcesPercent(ICommonContexts* world, Il2CppString* name, AccountEntity* targetAccount, GameEntity* source, float percent, int32_t elementsCount) {
		return ((Il2CppList<Resource*>* (*)(void *, ICommonContexts*, Il2CppString*, AccountEntity*, GameEntity*, float, int32_t))(Il2CppBase() + 0x17160D4))(0, world, name, targetAccount, source, percent, elementsCount);
	}
	template <typename R = void> static R GetMandatoryMaxResources(ICommonContexts* world, RandomGroupEntity* rg, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count) {
		return ((R (*)(void *, ICommonContexts*, RandomGroupEntity*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t))(Il2CppBase() + 0x1714E64))(0, world, rg, result, targetAccount, target, source, count);
	}
	template <typename R = void> static R GetMaxResources(ICommonContexts* world, RandomGroupEntity* rg, Il2CppList<Resource*>* result, AccountEntity* targetAccount, GameEntity* target, GameEntity* source, int32_t count, bool use) {
		return ((R (*)(void *, ICommonContexts*, RandomGroupEntity*, Il2CppList<Resource*>*, AccountEntity*, GameEntity*, GameEntity*, int32_t, bool))(Il2CppBase() + 0x1713F08))(0, world, rg, result, targetAccount, target, source, count, use);
	}

};

