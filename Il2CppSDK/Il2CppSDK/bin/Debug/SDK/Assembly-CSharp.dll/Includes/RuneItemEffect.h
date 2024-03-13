#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneItemEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemEffect"));
	}

	template <typename T = RuneItemState*> T& _runeItemState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Transform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _params() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Action1RuneItemEffect*>*> T& OnDeactivated() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isInited() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _animation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _waitCoroutine() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _previouseDistance() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = RuneItemState*> T get_RuneItemState() {
		return ((T (*)(RuneItemEffect*))(Il2CppBase() + 0x1353510))(this);
	}
	template <typename T = uintptr_t> T get_Transform() {
		return ((T (*)(RuneItemEffect*))(Il2CppBase() + 0x1353518))(this);
	}
	template <typename T = void> T set_Transform(uintptr_t value) {
		return ((T (*)(RuneItemEffect*, uintptr_t))(Il2CppBase() + 0x1353520))(this, value);
	}
	template <typename T = void> T add_OnDeactivated(Action1RuneItemEffect*>* value) {
		return ((T (*)(RuneItemEffect*, Action1RuneItemEffect*>*))(Il2CppBase() + 0x1353528))(this, value);
	}
	template <typename T = void> T remove_OnDeactivated(Action1RuneItemEffect*>* value) {
		return ((T (*)(RuneItemEffect*, Action1RuneItemEffect*>*))(Il2CppBase() + 0x13535C8))(this, value);
	}
	template <typename T = void> T Show(uintptr_t parent) {
		return ((T (*)(RuneItemEffect*, uintptr_t))(Il2CppBase() + 0x1353668))(this, parent);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RuneItemEffect*))(Il2CppBase() + 0x1353810))(this);
	}
	template <typename T = uintptr_t> T WaitAndDisable() {
		return ((T (*)(RuneItemEffect*))(Il2CppBase() + 0x1353798))(this);
	}
	template <typename T = void> T ChangeKEmissive(float normalizedDistance) {
		return ((T (*)(RuneItemEffect*, float))(Il2CppBase() + 0x13527CC))(this, normalizedDistance);
	}

};

