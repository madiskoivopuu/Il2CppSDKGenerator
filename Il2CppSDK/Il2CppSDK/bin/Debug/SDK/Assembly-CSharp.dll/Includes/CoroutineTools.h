#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoroutineTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoroutineTools"));
	}

	template <typename R = CoroutineTools*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& index() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static Il2CppList<CoroutineWithIndex*>*& notUsed() {
		return *(Il2CppList<CoroutineWithIndex*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static Il2CppDictionary<int32_t, CoroutineWithIndex*>*& coroutines() {
		return *(Il2CppDictionary<int32_t, CoroutineWithIndex*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static Il2CppDictionary<float, uintptr_t>*& yields() {
		return *(Il2CppDictionary<float, uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename R = CoroutineTools*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x133DAF8))(0);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(CoroutineTools*))(Il2CppBase() + 0x133DC34))(this);
	}
	template <typename R = uintptr_t> static R GetWaitForSeconds(float delay) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x133DD20))(0, delay);
	}
	template <typename R = uintptr_t> static R GetWaitForSecondsInRandomRange(float min, float max) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x133DE84))(0, min, max);
	}
	template <typename R = CoroutineWithIndex*> R WaitAndInvoke(float delay, uintptr_t action, bool needAdditiveControl) {
		return ((R (*)(CoroutineTools*, float, uintptr_t, bool))(Il2CppBase() + 0x133E044))(this, delay, action, needAdditiveControl);
	}
	template <typename R = CoroutineWithIndex*> R WaitAndInvoke_1(float delay, Func1<uintptr_t>* function, bool needAdditiveControl) {
		return ((R (*)(CoroutineTools*, float, Func1<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, delay, function, needAdditiveControl);
	}
	template <typename R = bool> R StopWaitCoroutine(CoroutineWithIndex* coroutineObject) {
		return ((R (*)(CoroutineTools*, CoroutineWithIndex*))(Il2CppBase() + 0x133E350))(this, coroutineObject);
	}
	template <typename R = uintptr_t> R WaitAndInvokeCoroutine(float delay, uintptr_t action, CoroutineWithIndex* coroutineObject) {
		return ((R (*)(CoroutineTools*, float, uintptr_t, CoroutineWithIndex*))(Il2CppBase() + 0x133E2AC))(this, delay, action, coroutineObject);
	}
	template <typename R = uintptr_t> R WaitAndInvokeCoroutine_1(float delay, Func1<uintptr_t>* function, CoroutineWithIndex* coroutineObject) {
		return ((R (*)(CoroutineTools*, float, Func1<uintptr_t>*, CoroutineWithIndex*))(Il2CppBase() + 0x0))(this, delay, function, coroutineObject);
	}
	template <typename R = int32_t> R GetNextIndex() {
		return ((R (*)(CoroutineTools*))(Il2CppBase() + 0x133E524))(this);
	}
	template <typename R = CoroutineWithIndex*> R PopCoroutineObject() {
		return ((R (*)(CoroutineTools*))(Il2CppBase() + 0x133E148))(this);
	}
	template <typename R = void> R PushCoroutineObject(CoroutineWithIndex* cObject) {
		return ((R (*)(CoroutineTools*, CoroutineWithIndex*))(Il2CppBase() + 0x133E5BC))(this, cObject);
	}

};

