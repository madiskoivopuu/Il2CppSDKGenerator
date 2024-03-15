#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonDifficaltyView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonDifficaltyView"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Lock() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Difficalty() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Loot() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<InventorySlot*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& NoModSign() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = RewardResourceView*> R& MagicItem() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& NotActiveColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& ActiveColor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& LocedTextColor() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> R& _modIndex() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	 Action1int32_t>*& _onClick() {
		return *(Action1int32_t>**)((uintptr_t)this + 0xB0);
	}
	template <typename R = int64_t> R& _nextMagicTime() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _magics() {
		return *(R*)((uintptr_t)this + 0xC0);
	}

	template <typename R = void> R Bind(UIWindow* window, GameEntity* target, Difficulty* difficulty, int32_t initialInventoryIndex, int32_t modIndex, Action1int32_t>* onClick) {
		return ((R (*)(DungeonDifficaltyView*, UIWindow*, GameEntity*, Difficulty*, int32_t, int32_t, Action1int32_t>*))(Il2CppBase() + 0x1306AB0))(this, window, target, difficulty, initialInventoryIndex, modIndex, onClick);
	}
	template <typename R = bool> R get_IsLocked() {
		return ((R (*)(DungeonDifficaltyView*))(Il2CppBase() + 0x130712C))(this);
	}
	template <typename R = void> R SetSelected(bool selected) {
		return ((R (*)(DungeonDifficaltyView*, bool))(Il2CppBase() + 0x1307408))(this, selected);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(DungeonDifficaltyView*))(Il2CppBase() + 0x1307444))(this);
	}
	template <typename R = void> R SetLock(bool isLocked) {
		return ((R (*)(DungeonDifficaltyView*, bool))(Il2CppBase() + 0x1306FF8))(this, isLocked);
	}
	template <typename R = void> R SetImageColor(Il2CppArray<uintptr_t>* images, int32_t level) {
		return ((R (*)(DungeonDifficaltyView*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1306F18))(this, images, level);
	}
	template <typename R = void> R SetMagic(ArenaUnityWorld* world) {
		return ((R (*)(DungeonDifficaltyView*, ArenaUnityWorld*))(Il2CppBase() + 0x1307148))(this, world);
	}

};

