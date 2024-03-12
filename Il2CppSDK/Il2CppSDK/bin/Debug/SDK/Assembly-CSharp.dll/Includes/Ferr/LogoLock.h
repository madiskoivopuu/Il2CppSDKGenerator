#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class LogoLock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "LogoLock"));
	}

	template <typename T = uintptr_t> T& mCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mLockHorizontal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mLockVertical() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mPadding() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LogoLock*))(Il2CppBase() + 0x1731C78))(this);
	}
	template <typename T = float> static T GetPixelScale(uintptr_t aCam, uintptr_t aSprite) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1731F18))(0, aCam, aSprite);
	}
	template <typename T = Il2CppVector3> static T GetLockPosition(uintptr_t aCam, uintptr_t aHLock, uintptr_t aVLock, float aPadding) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1731E14))(0, aCam, aHLock, aVLock, aPadding);
	}
	template <typename T = Il2CppVector2> static T GetViewSizeAtDistance(float aDist, uintptr_t aCamera) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x1731FD0))(0, aDist, aCamera);
	}

};

}
