#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadBackItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadBackItem"));
	}

	template <typename R = uintptr_t> R& ArrowIcon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& RequiredLevel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& Showed() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = uintptr_t> R& ItemAnimator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _left() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _right() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TrophyRoadWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = ContentSizeData*> R& _sizeData() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = int32_t> R get_RequiredLevel() {
		return ((R (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x1012580))(this);
	}
	template <typename R = void> R set_RequiredLevel(int32_t value) {
		return ((R (*)(TrophyRoadBackItem*, int32_t))(Il2CppBase() + 0x1012588))(this, value);
	}
	template <typename R = bool> R get_Showed() {
		return ((R (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x1012590))(this);
	}
	template <typename R = void> R set_Showed(bool value) {
		return ((R (*)(TrophyRoadBackItem*, bool))(Il2CppBase() + 0x1012598))(this, value);
	}
	template <typename R = void> R Bind(TrophyRoadWindow* window) {
		return ((R (*)(TrophyRoadBackItem*, TrophyRoadWindow*))(Il2CppBase() + 0x10125A4))(this, window);
	}
	template <typename R = void> R UpdateItem(uintptr_t positionVectror) {
		return ((R (*)(TrophyRoadBackItem*, uintptr_t))(Il2CppBase() + 0x10125AC))(this, positionVectror);
	}
	template <typename R = void> R Show() {
		return ((R (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x10126A8))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x1012744))(this);
	}

};

