#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonDifficaltyView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonDifficaltyView"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Lock() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Difficalty() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Loot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& NoModSign() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& MagicItem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& NotActiveColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ActiveColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& LocedTextColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _modIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& _onClick() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int64_t> T& _nextMagicTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _magics() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Bind(uintptr_t window, uintptr_t target, uintptr_t difficulty, int32_t initialInventoryIndex, int32_t modIndex, void* onClick) {
		return ((T (*)(DungeonDifficaltyView*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, void*))(Il2CppBase() + 0x1306AB0))(this, window, target, difficulty, initialInventoryIndex, modIndex, onClick);
	}
	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(DungeonDifficaltyView*))(Il2CppBase() + 0x130712C))(this);
	}
	template <typename T = void> T SetSelected(bool selected) {
		return ((T (*)(DungeonDifficaltyView*, bool))(Il2CppBase() + 0x1307408))(this, selected);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(DungeonDifficaltyView*))(Il2CppBase() + 0x1307444))(this);
	}
	template <typename T = void> T SetLock(bool isLocked) {
		return ((T (*)(DungeonDifficaltyView*, bool))(Il2CppBase() + 0x1306FF8))(this, isLocked);
	}
	template <typename T = void> T SetImageColor(Il2CppArray<uintptr_t>* images, int32_t level) {
		return ((T (*)(DungeonDifficaltyView*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1306F18))(this, images, level);
	}
	template <typename T = void> T SetMagic(uintptr_t world) {
		return ((T (*)(DungeonDifficaltyView*, uintptr_t))(Il2CppBase() + 0x1307148))(this, world);
	}

};

}
