#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class Juice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "Juice"));
	}

	template <typename R = Ferr::Juice*> static R& instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Il2CppList<Ferr::JuiceData*>*& list() {
		return *(Il2CppList<Ferr::JuiceData*>**)((uintptr_t)this + 0x18);
	}
	 Il2CppList<Ferr::JuiceDataColor*>*& listColor() {
		return *(Il2CppList<Ferr::JuiceDataColor*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& savedTimescale() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& sleepTimer() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& sleep() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = Ferr::Juice*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E6ACC))(0);
	}
	template <typename R = Ferr::Juice*> static R Create() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E6BCC))(0);
	}
	template <typename R = uintptr_t> static R get_SproingIn() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E6D2C))(0);
	}
	template <typename R = uintptr_t> static R get_FastFalloff() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E6F10))(0);
	}
	template <typename R = uintptr_t> static R get_LateFalloff() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E70A4))(0);
	}
	template <typename R = uintptr_t> static R get_Wobble() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E7224))(0);
	}
	template <typename R = uintptr_t> static R get_Linear() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E73F8))(0);
	}
	template <typename R = uintptr_t> static R get_Hop() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E7538))(0);
	}
	template <typename R = uintptr_t> static R get_SharpHop() {
		return ((R (*)(void *))(Il2CppBase() + 0x14E76B8))(0);
	}
	template <typename R = void> R Update() {
		return ((R (*)(Juice*))(Il2CppBase() + 0x14E77E8))(this);
	}
	template <typename R = void> static R Add(uintptr_t aTransform, Ferr::JuiceType* aType, uintptr_t aCurve, float aStart, float aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((R (*)(void *, uintptr_t, Ferr::JuiceType*, uintptr_t, float, float, float, bool, uintptr_t))(Il2CppBase() + 0x14E7F0C))(0, aTransform, aType, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename R = void> static R Scale(uintptr_t aTransform, uintptr_t aCurve, float aStart, float aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((R (*)(void *, uintptr_t, uintptr_t, float, float, float, bool, uintptr_t))(Il2CppBase() + 0x14E8064))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename R = void> static R Scale_1(uintptr_t aTransform, uintptr_t aCurve, uintptr_t aStart, uintptr_t aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((R (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x14E8118))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename R = void> static R Rotate(uintptr_t aTransform, uintptr_t aCurve, uintptr_t aStart, uintptr_t aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((R (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x14E8238))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename R = void> static R Translate(uintptr_t aTransform, uintptr_t aCurve, uintptr_t aStart, uintptr_t aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((R (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x14E8358))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename R = void> static R TranslateLocal(uintptr_t aTransform, uintptr_t aCurve, uintptr_t aStart, uintptr_t aEnd, float aDuration, bool aRelative, uintptr_t aCallback) {
		return ((R (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x14E850C))(0, aTransform, aCurve, aStart, aEnd, aDuration, aRelative, aCallback);
	}
	template <typename R = void> static R Color(uintptr_t aRenderer, uintptr_t aCurve, uintptr_t aStart, uintptr_t aEnd, float aDuration, uintptr_t aCallback) {
		return ((R (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x14E862C))(0, aRenderer, aCurve, aStart, aEnd, aDuration, aCallback);
	}
	template <typename R = void> static R Cancel(uintptr_t aTransform, bool aFinishEffect) {
		return ((R (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x14E87A4))(0, aTransform, aFinishEffect);
	}
	template <typename R = void> static R Cancel_1(uintptr_t aRenderer, bool aFinishEffect) {
		return ((R (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x14E89B8))(0, aRenderer, aFinishEffect);
	}
	template <typename R = void> static R SlowMo(float aSpeed) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x14E8BCC))(0, aSpeed);
	}
	template <typename R = void> static R Sleep(float aDuration) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x14E8BFC))(0, aDuration);
	}
	template <typename R = void> static R SleepMS(int32_t aMilliseconds) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x14E8D08))(0, aMilliseconds);
	}

};

}
