#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadItem"));
	}

	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Locked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& unlockAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& CheckMark() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Milestone() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ResourcesFullProgress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ItemIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LevelText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LockedColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& UnlockedColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& BuildedIconColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& DragTreshold() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = TrophyRoadWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = int32_t> T get_Level() {
		return ((T (*)(TrophyRoadItem*))(Il2CppBase() + 0x1022C68))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(TrophyRoadItem*, int32_t))(Il2CppBase() + 0x1022C70))(this, value);
	}
	template <typename T = void> T Bind(TrophyRoadWindow* window, TrophyRoadEntity* tropyRoadEntity, int32_t currentLevel, bool forceResourcesFull, bool changeSelection) {
		return ((T (*)(TrophyRoadItem*, TrophyRoadWindow*, TrophyRoadEntity*, int32_t, bool, bool))(Il2CppBase() + 0x1022C78))(this, window, tropyRoadEntity, currentLevel, forceResourcesFull, changeSelection);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(TrophyRoadItem*, uintptr_t))(Il2CppBase() + 0x1022FE4))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(TrophyRoadItem*, uintptr_t))(Il2CppBase() + 0x1023000))(this, eventData);
	}
	template <typename T = void> T OnChangeSelection(TrophyRoadItem* item) {
		return ((T (*)(TrophyRoadItem*, TrophyRoadItem*))(Il2CppBase() + 0x1023044))(this, item);
	}

};

