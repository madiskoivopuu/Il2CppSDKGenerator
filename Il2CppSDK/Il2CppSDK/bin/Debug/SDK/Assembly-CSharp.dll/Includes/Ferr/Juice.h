#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class Juice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "Juice"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& savedTimescale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& sleepTimer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& sleep() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E6ACC))(0);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E6BCC))(0);
	}
	template <typename T = uintptr_t> static T get_SproingIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E6D2C))(0);
	}
	template <typename T = uintptr_t> static T get_FastFalloff() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E6F10))(0);
	}
	template <typename T = uintptr_t> static T get_LateFalloff() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E70A4))(0);
	}
	template <typename T = uintptr_t> static T get_Wobble() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E7224))(0);
	}
	template <typename T = uintptr_t> static T get_Linear() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E73F8))(0);
	}
	template <typename T = uintptr_t> static T get_Hop() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E7538))(0);
	}
	template <typename T = uintptr_t> static T get_SharpHop() {
		return ((T (*)(void *))(Il2CppBase() + 0x14E76B8))(0);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Juice*))(Il2CppBase() + 0x14E77E8))(this);
	}
	template <typename T = void> static T Add(uintptr_t aTransform, uintptr_t aType, uintptr_t aCurve, float aStart, float aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float, float, float, bool, uintptr_t))(Il2CppBase() + 0x14E7F0C))(0, aTransform, aType, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename T = void> static T Scale(uintptr_t aTransform, uintptr_t aCurve, float aStart, float aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, float, bool, uintptr_t))(Il2CppBase() + 0x14E8064))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename T = void> static T Scale_1(uintptr_t aTransform, uintptr_t aCurve, Il2CppVector3 aStart, Il2CppVector3 aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, float, bool, uintptr_t))(Il2CppBase() + 0x14E8118))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename T = void> static T Rotate(uintptr_t aTransform, uintptr_t aCurve, Il2CppVector3 aStart, Il2CppVector3 aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, float, bool, uintptr_t))(Il2CppBase() + 0x14E8238))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename T = void> static T Translate(uintptr_t aTransform, uintptr_t aCurve, Il2CppVector3 aStart, Il2CppVector3 aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, float, bool, uintptr_t))(Il2CppBase() + 0x14E8358))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename T = void> static T TranslateLocal(uintptr_t aTransform, uintptr_t aCurve, Il2CppVector3 aStart, Il2CppVector3 aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, float, bool, uintptr_t))(Il2CppBase() + 0x14E850C))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename T = void> static T Color(uintptr_t aRenderer, uintptr_t aCurve, uintptr_t aStart, uintptr_t aEnd, float aDuration, uintptr_t aCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x14E862C))(0, aRenderer, aCurve, aStart, aEnd, aDuration, aCallback);
	}
	template <typename T = void> static T Cancel(uintptr_t aTransform, bool aFinishEffect) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x14E87A4))(0, aTransform, aFinishEffect);
	}
	template <typename T = void> static T Cancel_1(uintptr_t aRenderer, bool aFinishEffect) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x14E89B8))(0, aRenderer, aFinishEffect);
	}
	template <typename T = void> static T SlowMo(float aSpeed) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x14E8BCC))(0, aSpeed);
	}
	template <typename T = void> static T Sleep(float aDuration) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x14E8BFC))(0, aDuration);
	}
	template <typename T = void> static T SleepMS(int32_t aMilliseconds) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x14E8D08))(0, aMilliseconds);
	}

};

}
