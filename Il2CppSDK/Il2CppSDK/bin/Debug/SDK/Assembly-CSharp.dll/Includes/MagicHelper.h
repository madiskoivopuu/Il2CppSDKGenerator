#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicHelper"));
	}


	template <typename T = bool> static T IsRemovableDebuffControl(uintptr_t magicData, bool withSpeedDec) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1AD7520))(0, magicData, withSpeedDec);
	}
	template <typename T = float> static T GetDamageShieldValue(uintptr_t magic) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1AD7648))(0, magic);
	}
	template <typename T = void> static T SetDamageShieldValue(uintptr_t magic, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1AD76A8))(0, magic, value);
	}
	template <typename T = bool> static T CheckAlive(uintptr_t magic, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD7710))(0, magic, world, target);
	}
	template <typename T = void> static T UpdateAlive(uintptr_t magic, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD79A0))(0, magic, world, target);
	}
	template <typename T = int32_t> static T GetStackCount(uintptr_t magic) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1ACD0C4))(0, magic);
	}
	template <typename T = int32_t> static T GetStackCount_1(uintptr_t magicData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1AD7A0C))(0, magicData);
	}
	template <typename T = int32_t> static T SetStackCount(uintptr_t magic, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1AD7AA8))(0, magic, count);
	}
	template <typename T = int32_t> static T GetMaxStackCount(uintptr_t magicData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1AD7B04))(0, magicData);
	}
	template <typename T = int32_t> static T GetUseCount(uintptr_t magicData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1AD7BA0))(0, magicData);
	}
	template <typename T = bool> static T HasMagicImmune(uintptr_t target, uintptr_t magicData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD7BEC))(0, target, magicData);
	}
	template <typename T = bool> static T HasMagicImmune_1(uintptr_t target, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1AD7DE8))(0, target, name);
	}
	template <typename T = bool> static T HasMagicImmune_2(uintptr_t immunityCache, uintptr_t magicData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD7C98))(0, immunityCache, magicData);
	}
	template <typename T = void> static T SavePermanentMagic(uintptr_t target, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD7EBC))(0, target, world);
	}
	template <typename T = void> static T SavePermanentMagic_1(uintptr_t account, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD8418))(0, account, world, target);
	}
	template <typename T = void> static T LoadPermanentMagic(uintptr_t magicSaveEntity, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD89F4))(0, magicSaveEntity, world, target);
	}
	template <typename T = void> static T RemoveOnActionMagics(uintptr_t target, uintptr_t world, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD91F4))(0, target, world, action);
	}
	template <typename T = bool> static T NeedRemoveOnAction(uintptr_t magic, uintptr_t magicData, uintptr_t world, uintptr_t target, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AD975C))(0, magic, magicData, world, target, action);
	}
	template <typename T = bool> static T IsEnoughMagics(uintptr_t entity, uintptr_t world, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD99B0))(0, entity, world, items);
	}
	template <typename T = bool> static T HasAliveMagicWithAnyDataComponents(uintptr_t entity, uintptr_t world, bool onlyTemporary, Il2CppArray<uintptr_t>* dataComponentsIndexes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD9B14))(0, entity, world, onlyTemporary, dataComponentsIndexes);
	}

};

}
