#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneItemEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemEffect"));
	}

	template <typename R = RuneItemState> R& _runeItemState() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Transform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<CanvasMeshRendererExposedParams*>*> R& _params() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Action1<RuneItemEffect*>*& OnDeactivated() {
		return *(Action1<RuneItemEffect*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _isInited() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _animation() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _waitCoroutine() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _previouseDistance() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = RuneItemState> R get_RuneItemState() {
		return ((R (*)(RuneItemEffect*))(Il2CppBase() + 0x1353510))(this);
	}
	template <typename R = uintptr_t> R get_Transform() {
		return ((R (*)(RuneItemEffect*))(Il2CppBase() + 0x1353518))(this);
	}
	template <typename R = void> R set_Transform(uintptr_t value) {
		return ((R (*)(RuneItemEffect*, uintptr_t))(Il2CppBase() + 0x1353520))(this, value);
	}
	template <typename R = void> R add_OnDeactivated(Action1<RuneItemEffect*>* value) {
		return ((R (*)(RuneItemEffect*, Action1<RuneItemEffect*>*))(Il2CppBase() + 0x1353528))(this, value);
	}
	template <typename R = void> R remove_OnDeactivated(Action1<RuneItemEffect*>* value) {
		return ((R (*)(RuneItemEffect*, Action1<RuneItemEffect*>*))(Il2CppBase() + 0x13535C8))(this, value);
	}
	template <typename R = void> R Show(uintptr_t parent) {
		return ((R (*)(RuneItemEffect*, uintptr_t))(Il2CppBase() + 0x1353668))(this, parent);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(RuneItemEffect*))(Il2CppBase() + 0x1353810))(this);
	}
	template <typename R = uintptr_t> R WaitAndDisable() {
		return ((R (*)(RuneItemEffect*))(Il2CppBase() + 0x1353798))(this);
	}
	template <typename R = void> R ChangeKEmissive(float normalizedDistance) {
		return ((R (*)(RuneItemEffect*, float))(Il2CppBase() + 0x13527CC))(this, normalizedDistance);
	}

};

