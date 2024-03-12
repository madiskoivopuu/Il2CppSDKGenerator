#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadMilestoneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadMilestoneItem"));
	}

	template <typename T = float> T& GladeTimeOut() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& FramesThreshold() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& MilestoneAnimator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& RequiredLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& Showed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _sizeData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _rightBound() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _inFocus() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<int32_t>*> T& _previouseLevels() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _gladeCoroutine() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _reinitCoroutine() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _hide() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = int32_t> T get_RequiredLevel() {
		return ((T (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x1028D44))(this);
	}
	template <typename T = void> T set_RequiredLevel(int32_t value) {
		return ((T (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x1028D4C))(this, value);
	}
	template <typename T = bool> T get_Showed() {
		return ((T (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x1028D54))(this);
	}
	template <typename T = void> T set_Showed(bool value) {
		return ((T (*)(TrophyRoadMilestoneItem*, bool))(Il2CppBase() + 0x1028D5C))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t tropyRoadEntity) {
		return ((T (*)(TrophyRoadMilestoneItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1028D68))(this, window, tropyRoadEntity);
	}
	template <typename T = void> T Init(int32_t level) {
		return ((T (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x1028DD4))(this, level);
	}
	template <typename T = void> T UpdateItem(Il2CppVector2 positionVectror) {
		return ((T (*)(TrophyRoadMilestoneItem*, Il2CppVector2))(Il2CppBase() + 0x1028EEC))(this, positionVectror);
	}
	template <typename T = void> T Reinit(int32_t level) {
		return ((T (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x102922C))(this, level);
	}
	template <typename T = uintptr_t> T ReinitCoroutine(int32_t level) {
		return ((T (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x102938C))(this, level);
	}
	template <typename T = void> T Show() {
		return ((T (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x1029414))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x10292A8))(this);
	}
	template <typename T = uintptr_t> T GladeCoroutine() {
		return ((T (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x10294F0))(this);
	}

};

}
