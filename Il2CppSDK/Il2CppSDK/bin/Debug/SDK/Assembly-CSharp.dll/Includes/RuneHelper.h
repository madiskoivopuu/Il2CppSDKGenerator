#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneHelper"));
	}

	template <typename R = int32_t> static R& MAX_RUNE_GRADE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<int32_t, ValueTuple2<int32_t, int32_t>*>*& RuneSlotsAndPriceByGrade() {
		return *(Il2CppDictionary<int32_t, ValueTuple2<int32_t, int32_t>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static ValueTuple3<bool, int32_t, int32_t>* GetRuneInventorySlotsAndPriceByGrade(int32_t grade) {
		return ((ValueTuple3<bool, int32_t, int32_t>* (*)(void *, int32_t))(Il2CppBase() + 0x11AA4BC))(0, grade);
	}
	template <typename R = int32_t> static R GetRuneMaxGrade(ItemEntity* gradeEntity) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x11AA690))(0, gradeEntity);
	}
	template <typename R = int64_t> static R GetClassRuneEndTime(AccountEntity* account, PlayerClassType classType, int32_t index) {
		return ((R (*)(void *, AccountEntity*, PlayerClassType, int32_t))(Il2CppBase() + 0x11AA6DC))(0, account, classType, index);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetActiveClassRunes(AccountEntity* account, PlayerClassType classType, int64_t now, bool withEmpty) {
		return ((R (*)(void *, AccountEntity*, PlayerClassType, int64_t, bool))(Il2CppBase() + 0x11A8F2C))(0, account, classType, now, withEmpty);
	}
	template <typename R = Il2CppString*> static R GetActiveClassRune(AccountEntity* account, PlayerClassType classType, int32_t index, int64_t now) {
		return ((R (*)(void *, AccountEntity*, PlayerClassType, int32_t, int64_t))(Il2CppBase() + 0x11A81C8))(0, account, classType, index, now);
	}
	 static ValueTuple2<int32_t, int32_t>* GetClassRunesCount(AccountEntity* account, PlayerClassType classType, int64_t now) {
		return ((ValueTuple2<int32_t, int32_t>* (*)(void *, AccountEntity*, PlayerClassType, int64_t))(Il2CppBase() + 0x11AA74C))(0, account, classType, now);
	}
	template <typename R = ItemEntity*> static R CheckOrGenerateRune(ItemEntity* runeEntity, ICommonContexts* world, int32_t grade) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x11AA8E8))(0, runeEntity, world, grade);
	}
	template <typename R = Il2CppString*> static R GetRuneGradeText(int32_t grade) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x11AAC64))(0, grade);
	}
	template <typename R = int32_t> static R GetInventoryRuneGrade(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x11AACF4))(0, inventory, world);
	}
	template <typename R = int32_t> static R GetInventoryRuneOrder(InventorySlotEntity* inventory, ICommonContexts* world) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x11AAE50))(0, inventory, world);
	}
	template <typename R = int32_t> static R GetClassRuneSlotsAvailableCount(AccountEntity* account, ICommonContexts* world) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*))(Il2CppBase() + 0x11AAF98))(0, account, world);
	}
	template <typename R = Il2CppString*> static R GetMergedRune(ICommonContexts* world, Il2CppString* blueprint) {
		return ((R (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x11AB0C4))(0, world, blueprint);
	}
	 static ValueTuple4<bool, Il2CppString*, Il2CppString*, int32_t>* GetRuneInfo(ICommonContexts* world, Il2CppString* runeBlueprint) {
		return ((ValueTuple4<bool, Il2CppString*, Il2CppString*, int32_t>* (*)(void *, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x11AB4F4))(0, world, runeBlueprint);
	}
	template <typename R = int32_t> static R GetGhostyRuneInkesCount(GameEntity* avatar, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x11AB740))(0, avatar, world);
	}
	template <typename R = Il2CppString*> static R GetRuneNameText(ItemEntity* rune, bool ghosty) {
		return ((R (*)(void *, ItemEntity*, bool))(Il2CppBase() + 0x11AB9CC))(0, rune, ghosty);
	}
	template <typename R = Il2CppString*> static R GetRuneBuffString(MagicParams parameters) {
		return ((R (*)(void *, MagicParams))(Il2CppBase() + 0x11A96F0))(0, parameters);
	}

};

