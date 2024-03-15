#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class LayoutAdvancer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "LayoutAdvancer"));
	}

	template <typename R = uintptr_t> R& mPos() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Direction*> R& mDirection() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& mPrevious() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& mPrevPos() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = float> R get_X() {
		return ((R (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429948))(this);
	}
	template <typename R = float> R get_Y() {
		return ((R (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429950))(this);
	}
	template <typename R = Direction*> R get_Dir() {
		return ((R (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429958))(this);
	}
	template <typename R = void> R Step(uintptr_t aSize) {
		return ((R (*)(LayoutAdvancer*, uintptr_t))(Il2CppBase() + 0x14299B0))(this, aSize);
	}
	template <typename R = void> R Step_1(float aX, float aY) {
		return ((R (*)(LayoutAdvancer*, float, float))(Il2CppBase() + 0x14299F4))(this, aX, aY);
	}
	template <typename R = uintptr_t> R GetRect() {
		return ((R (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429A38))(this);
	}
	template <typename R = uintptr_t> R GetRect_1(float aOverrideDir) {
		return ((R (*)(LayoutAdvancer*, float))(Il2CppBase() + 0x1429A70))(this, aOverrideDir);
	}
	template <typename R = uintptr_t> R GetRect_2(float aOverrideWidth, float aOverrideHeight) {
		return ((R (*)(LayoutAdvancer*, float, float))(Il2CppBase() + 0x1429AD4))(this, aOverrideWidth, aOverrideHeight);
	}
	template <typename R = uintptr_t> R GetRectPad(float aPaddingX, float aPaddingY) {
		return ((R (*)(LayoutAdvancer*, float, float))(Il2CppBase() + 0x1429B10))(this, aPaddingX, aPaddingY);
	}
	template <typename R = uintptr_t> R GetRectPad_1(float aPadding) {
		return ((R (*)(LayoutAdvancer*, float))(Il2CppBase() + 0x1429B60))(this, aPadding);
	}

};

}
