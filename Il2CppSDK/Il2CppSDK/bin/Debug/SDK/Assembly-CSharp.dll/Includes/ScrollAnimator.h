#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScrollAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScrollAnimator"));
	}

	template <typename T = UIInfiniteScroll*> T& InfiniteScroll() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ScrollRect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PageIndications() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LeftButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RightButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& Animate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& Period() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& LerpH() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& targetH() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& pageCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T Start() {
		return ((T (*)(ScrollAnimator*))(Il2CppBase() + 0x135B730))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScrollAnimator*))(Il2CppBase() + 0x135B7A8))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135B9A0))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135BACC))(this, eventData);
	}
	template <typename T = void> T Startb__12_0(uintptr_t data) {
		return ((T (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135BAF8))(this, data);
	}
	template <typename T = void> T Startb__12_1(uintptr_t data) {
		return ((T (*)(ScrollAnimator*, uintptr_t))(Il2CppBase() + 0x135BB8C))(this, data);
	}
	template <typename T = void> T Startb__12_2() {
		return ((T (*)(ScrollAnimator*))(Il2CppBase() + 0x135BC1C))(this);
	}
	template <typename T = void> T Startb__12_3() {
		return ((T (*)(ScrollAnimator*))(Il2CppBase() + 0x135BCB0))(this);
	}

};

