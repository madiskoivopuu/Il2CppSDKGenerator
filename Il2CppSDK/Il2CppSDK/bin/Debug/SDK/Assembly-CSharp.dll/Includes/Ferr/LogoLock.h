#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class LogoLock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "LogoLock"));
	}

	template <typename R = uintptr_t> R& mCamera() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = LockPosition> R& mLockHorizontal() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = LockPosition> R& mLockVertical() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& mPadding() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& mScale() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LogoLock*))(Il2CppBase() + 0x1731C78))(this);
	}
	template <typename R = float> static R GetPixelScale(uintptr_t aCam, uintptr_t aSprite) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1731F18))(0, aCam, aSprite);
	}
	template <typename R = uintptr_t> static R GetLockPosition(uintptr_t aCam, LockPosition aHLock, LockPosition aVLock, float aPadding) {
		return ((R (*)(void *, uintptr_t, LockPosition, LockPosition, float))(Il2CppBase() + 0x1731E14))(0, aCam, aHLock, aVLock, aPadding);
	}
	template <typename R = uintptr_t> static R GetViewSizeAtDistance(float aDist, uintptr_t aCamera) {
		return ((R (*)(void *, float, uintptr_t))(Il2CppBase() + 0x1731FD0))(0, aDist, aCamera);
	}

};

}
