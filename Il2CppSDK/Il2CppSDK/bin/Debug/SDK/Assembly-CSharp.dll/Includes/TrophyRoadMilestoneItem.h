#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadMilestoneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadMilestoneItem"));
	}

	template <typename R = float> R& GladeTimeOut() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& FramesThreshold() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& MilestoneAnimator() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& RequiredLevel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& Showed() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = TrophyRoadWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ContentSizeData*> R& _sizeData() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _rightBound() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& _inFocus() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	 Il2CppList<int32_t>*& _previouseLevels() {
		return *(Il2CppList<int32_t>**)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _gladeCoroutine() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _reinitCoroutine() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& _hide() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = int32_t> R get_RequiredLevel() {
		return ((R (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x1028D44))(this);
	}
	template <typename R = void> R set_RequiredLevel(int32_t value) {
		return ((R (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x1028D4C))(this, value);
	}
	template <typename R = bool> R get_Showed() {
		return ((R (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x1028D54))(this);
	}
	template <typename R = void> R set_Showed(bool value) {
		return ((R (*)(TrophyRoadMilestoneItem*, bool))(Il2CppBase() + 0x1028D5C))(this, value);
	}
	template <typename R = void> R Bind(TrophyRoadWindow* window, TrophyRoadEntity* tropyRoadEntity) {
		return ((R (*)(TrophyRoadMilestoneItem*, TrophyRoadWindow*, TrophyRoadEntity*))(Il2CppBase() + 0x1028D68))(this, window, tropyRoadEntity);
	}
	template <typename R = void> R Init(int32_t level) {
		return ((R (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x1028DD4))(this, level);
	}
	template <typename R = void> R UpdateItem(uintptr_t positionVectror) {
		return ((R (*)(TrophyRoadMilestoneItem*, uintptr_t))(Il2CppBase() + 0x1028EEC))(this, positionVectror);
	}
	template <typename R = void> R Reinit(int32_t level) {
		return ((R (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x102922C))(this, level);
	}
	template <typename R = uintptr_t> R ReinitCoroutine(int32_t level) {
		return ((R (*)(TrophyRoadMilestoneItem*, int32_t))(Il2CppBase() + 0x102938C))(this, level);
	}
	template <typename R = void> R Show() {
		return ((R (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x1029414))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x10292A8))(this);
	}
	template <typename R = uintptr_t> R GladeCoroutine() {
		return ((R (*)(TrophyRoadMilestoneItem*))(Il2CppBase() + 0x10294F0))(this);
	}

};

