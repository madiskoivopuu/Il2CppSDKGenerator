#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingSlotIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingSlotIndex"));
	}

	template <typename R = int32_t> static R& Weapon() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Backpack() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Head() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Chest() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Legs() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Feet() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Pocket1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Pocket2() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Pocket3() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Hair() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Beard() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& HairColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SkinColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Face() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MountSkill1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MountSkill2() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MountSkill3() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Skill1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Skill2() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Clothes() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Class() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Banner() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PassiveSkill1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Mount() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Pet() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PetSkill1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PetSkill2() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PetSkill3() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Charm() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CostumeHead() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CostumeChest() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CostumeLegs() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Corpse() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& Total() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> static R IsEquip(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A578A0))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsGetable(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A578A8))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsDropable(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A578CC))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsSavable(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A578DC))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsSkill(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A57900))(0, inventoryIndex);
	}
	template <typename R = bool> static R CantConsumeOnUse(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A57924))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsMountSkill(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A57948))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsPetSkill(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A57958))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsPositiveAndLess(int32_t inventoryIndex, int32_t value) {
		return ((R (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1A57968))(0, inventoryIndex, value);
	}
	template <typename R = bool> static R IsLess(int32_t inventoryIndex, int32_t value) {
		return ((R (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1A57980))(0, inventoryIndex, value);
	}
	template <typename R = bool> static R IsPocket(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A5798C))(0, inventoryIndex);
	}
	template <typename R = int32_t> static R GetUnlockLevel(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A5799C))(0, inventoryIndex);
	}
	template <typename R = bool> static R ForInstability(int32_t inventoryIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1A579B8))(0, inventoryIndex);
	}
	template <typename R = bool> static R IsUnlocked(int32_t inventoryIndex, int32_t level) {
		return ((R (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1A579F0))(0, inventoryIndex, level);
	}

};

