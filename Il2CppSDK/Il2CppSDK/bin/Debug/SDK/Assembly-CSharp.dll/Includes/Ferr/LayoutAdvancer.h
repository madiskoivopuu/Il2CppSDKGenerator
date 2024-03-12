#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class LayoutAdvancer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "LayoutAdvancer"));
	}

	template <typename T = Il2CppVector2> T& mPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mDirection() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& mPrevious() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& mPrevPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = float> T get_X() {
		return ((T (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429948))(this);
	}
	template <typename T = float> T get_Y() {
		return ((T (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429950))(this);
	}
	template <typename T = uintptr_t> T get_Dir() {
		return ((T (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429958))(this);
	}
	template <typename T = void> T Step(Il2CppVector2 aSize) {
		return ((T (*)(LayoutAdvancer*, Il2CppVector2))(Il2CppBase() + 0x14299B0))(this, aSize);
	}
	template <typename T = void> T Step_1(float aX, float aY) {
		return ((T (*)(LayoutAdvancer*, float, float))(Il2CppBase() + 0x14299F4))(this, aX, aY);
	}
	template <typename T = Il2CppRect> T GetRect() {
		return ((T (*)(LayoutAdvancer*))(Il2CppBase() + 0x1429A38))(this);
	}
	template <typename T = Il2CppRect> T GetRect_1(float aOverrideDir) {
		return ((T (*)(LayoutAdvancer*, float))(Il2CppBase() + 0x1429A70))(this, aOverrideDir);
	}
	template <typename T = Il2CppRect> T GetRect_2(float aOverrideWidth, float aOverrideHeight) {
		return ((T (*)(LayoutAdvancer*, float, float))(Il2CppBase() + 0x1429AD4))(this, aOverrideWidth, aOverrideHeight);
	}
	template <typename T = Il2CppRect> T GetRectPad(float aPaddingX, float aPaddingY) {
		return ((T (*)(LayoutAdvancer*, float, float))(Il2CppBase() + 0x1429B10))(this, aPaddingX, aPaddingY);
	}
	template <typename T = Il2CppRect> T GetRectPad_1(float aPadding) {
		return ((T (*)(LayoutAdvancer*, float))(Il2CppBase() + 0x1429B60))(this, aPadding);
	}

};

}
