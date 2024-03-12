#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingSlotIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingSlotIndex"));
	}

	template <typename T = int32_t> static T& Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Backpack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Head() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Chest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Legs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Feet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Pocket1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Pocket2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Pocket3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Hair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Beard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HairColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SkinColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Face() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MountSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MountSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MountSkill3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Skill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Skill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Clothes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Class() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Banner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PassiveSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Mount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Pet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PetSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PetSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PetSkill3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Charm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CostumeHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CostumeChest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CostumeLegs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Corpse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Total() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsEquip(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A578A0))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsGetable(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A578A8))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsDropable(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A578CC))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsSavable(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A578DC))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsSkill(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A57900))(0, inventoryIndex);
	}
	template <typename T = bool> static T CantConsumeOnUse(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A57924))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsMountSkill(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A57948))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsPetSkill(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A57958))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsPositiveAndLess(int32_t inventoryIndex, int32_t value) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1A57968))(0, inventoryIndex, value);
	}
	template <typename T = bool> static T IsLess(int32_t inventoryIndex, int32_t value) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1A57980))(0, inventoryIndex, value);
	}
	template <typename T = bool> static T IsPocket(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A5798C))(0, inventoryIndex);
	}
	template <typename T = int32_t> static T GetUnlockLevel(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A5799C))(0, inventoryIndex);
	}
	template <typename T = bool> static T ForInstability(int32_t inventoryIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1A579B8))(0, inventoryIndex);
	}
	template <typename T = bool> static T IsUnlocked(int32_t inventoryIndex, int32_t level) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1A579F0))(0, inventoryIndex, level);
	}

};

}
