#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadItem"));
	}

	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Locked() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& unlockAnim() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& CheckMark() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Milestone() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ResourcesFullProgress() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& ItemIcon() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& LevelText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& LockedColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& UnlockedColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& BuildedIconColor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& DragTreshold() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = TrophyRoadWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = float> R& startPosition() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = int32_t> R get_Level() {
		return ((R (*)(TrophyRoadItem*))(Il2CppBase() + 0x1022C68))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(TrophyRoadItem*, int32_t))(Il2CppBase() + 0x1022C70))(this, value);
	}
	template <typename R = void> R Bind(TrophyRoadWindow* window, TrophyRoadEntity* tropyRoadEntity, int32_t currentLevel, bool forceResourcesFull, bool changeSelection) {
		return ((R (*)(TrophyRoadItem*, TrophyRoadWindow*, TrophyRoadEntity*, int32_t, bool, bool))(Il2CppBase() + 0x1022C78))(this, window, tropyRoadEntity, currentLevel, forceResourcesFull, changeSelection);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(TrophyRoadItem*, uintptr_t))(Il2CppBase() + 0x1022FE4))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(TrophyRoadItem*, uintptr_t))(Il2CppBase() + 0x1023000))(this, eventData);
	}
	template <typename R = void> R OnChangeSelection(TrophyRoadItem* item) {
		return ((R (*)(TrophyRoadItem*, TrophyRoadItem*))(Il2CppBase() + 0x1023044))(this, item);
	}

};

