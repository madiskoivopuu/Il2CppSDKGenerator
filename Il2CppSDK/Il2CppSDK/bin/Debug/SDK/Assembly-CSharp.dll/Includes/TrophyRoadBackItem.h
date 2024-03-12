#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadBackItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadBackItem"));
	}

	template <typename T = uintptr_t> T& ArrowIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& RequiredLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Showed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ItemAnimator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& _left() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppQuaternion> T& _right() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _sizeData() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_RequiredLevel() {
		return ((T (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x1012580))(this);
	}
	template <typename T = void> T set_RequiredLevel(int32_t value) {
		return ((T (*)(TrophyRoadBackItem*, int32_t))(Il2CppBase() + 0x1012588))(this, value);
	}
	template <typename T = bool> T get_Showed() {
		return ((T (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x1012590))(this);
	}
	template <typename T = void> T set_Showed(bool value) {
		return ((T (*)(TrophyRoadBackItem*, bool))(Il2CppBase() + 0x1012598))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(TrophyRoadBackItem*, uintptr_t))(Il2CppBase() + 0x10125A4))(this, window);
	}
	template <typename T = void> T UpdateItem(Il2CppVector2 positionVectror) {
		return ((T (*)(TrophyRoadBackItem*, Il2CppVector2))(Il2CppBase() + 0x10125AC))(this, positionVectror);
	}
	template <typename T = void> T Show() {
		return ((T (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x10126A8))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(TrophyRoadBackItem*))(Il2CppBase() + 0x1012744))(this);
	}

};

}
