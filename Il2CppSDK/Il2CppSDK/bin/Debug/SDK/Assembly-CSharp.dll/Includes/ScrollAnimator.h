#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScrollAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScrollAnimator"));
	}

	template <typename R = UnityEngineUIExtensions::UIInfiniteScroll*> R& InfiniteScroll() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ScrollRect() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& PageIndications() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& LeftButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& RightButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& Animate() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& Speed() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& Period() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& LerpH() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = float> R& targetH() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = float> R& timer() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = int32_t> R& pageCount() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = uintptr_t> R Start() {
		return ((R (*)(ScrollAnimator*))(Il2CppBase() + 0x135B730))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ScrollAnimator*))(Il2CppBase() + 0x135B7A8))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135B9A0))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135BACC))(this, eventData);
	}
	template <typename R = void> R Startb__12_0(uintptr_t data) {
		return ((R (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135BAF8))(this, data);
	}
	template <typename R = void> R Startb__12_1(uintptr_t data) {
		return ((R (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135BB8C))(this, data);
	}
	template <typename R = void> R Startb__12_2() {
		return ((R (*)(ScrollAnimator*))(Il2CppBase() + 0x135BC1C))(this);
	}
	template <typename R = void> R Startb__12_3() {
		return ((R (*)(ScrollAnimator*))(Il2CppBase() + 0x135BCB0))(this);
	}

};

