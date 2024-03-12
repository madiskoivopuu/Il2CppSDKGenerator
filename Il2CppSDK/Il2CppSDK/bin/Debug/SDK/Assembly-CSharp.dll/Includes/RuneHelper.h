#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneHelper"));
	}

	template <typename T = int32_t> static T& MAX_RUNE_GRADE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> static T& RuneSlotsAndPriceByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> static T GetRuneInventorySlotsAndPriceByGrade(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x11AA4BC))(0, grade);
	}
	template <typename T = int32_t> static T GetRuneMaxGrade(uintptr_t gradeEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11AA690))(0, gradeEntity);
	}
	template <typename T = int64_t> static T GetClassRuneEndTime(uintptr_t account, uintptr_t classType, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x11AA6DC))(0, account, classType, index);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetActiveClassRunes(uintptr_t account, uintptr_t classType, int64_t now, bool withEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, bool))(Il2CppBase() + 0x11A8F2C))(0, account, classType, now, withEmpty);
	}
	template <typename T = Il2CppString*> static T GetActiveClassRune(uintptr_t account, uintptr_t classType, int32_t index, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x11A81C8))(0, account, classType, index, now);
	}
	template <typename T = void*> static T GetClassRunesCount(uintptr_t account, uintptr_t classType, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x11AA74C))(0, account, classType, now);
	}
	template <typename T = uintptr_t> static T CheckOrGenerateRune(uintptr_t runeEntity, uintptr_t world, int32_t grade) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x11AA8E8))(0, runeEntity, world, grade);
	}
	template <typename T = Il2CppString*> static T GetRuneGradeText(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x11AAC64))(0, grade);
	}
	template <typename T = int32_t> static T GetInventoryRuneGrade(uintptr_t inventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AACF4))(0, inventory, world);
	}
	template <typename T = int32_t> static T GetInventoryRuneOrder(uintptr_t inventory, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AAE50))(0, inventory, world);
	}
	template <typename T = int32_t> static T GetClassRuneSlotsAvailableCount(uintptr_t account, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AAF98))(0, account, world);
	}
	template <typename T = Il2CppString*> static T GetMergedRune(uintptr_t world, Il2CppString* blueprint) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11AB0C4))(0, world, blueprint);
	}
	template <typename T = void*> static T GetRuneInfo(uintptr_t world, Il2CppString* runeBlueprint) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11AB4F4))(0, world, runeBlueprint);
	}
	template <typename T = int32_t> static T GetGhostyRuneInkesCount(uintptr_t avatar, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11AB740))(0, avatar, world);
	}
	template <typename T = Il2CppString*> static T GetRuneNameText(uintptr_t rune, bool ghosty) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x11AB9CC))(0, rune, ghosty);
	}
	template <typename T = Il2CppString*> static T GetRuneBuffString(uintptr_t parameters) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11A96F0))(0, parameters);
	}

};

}
