#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoroutineTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CoroutineTools"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& index() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& notUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& coroutines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<float, uintptr_t>*> static T& yields() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x133DAF8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CoroutineTools*))(Il2CppBase() + 0x133DC34))(this);
	}
	template <typename T = uintptr_t> static T GetWaitForSeconds(float delay) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x133DD20))(0, delay);
	}
	template <typename T = uintptr_t> static T GetWaitForSecondsInRandomRange(float min, float max) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x133DE84))(0, min, max);
	}
	template <typename T = uintptr_t> T WaitAndInvoke(float delay, uintptr_t action, bool needAdditiveControl) {
		return ((T (*)(CoroutineTools*, float, uintptr_t, bool))(Il2CppBase() + 0x133E044))(this, delay, action, needAdditiveControl);
	}
	template <typename T = uintptr_t> T WaitAndInvoke_1(float delay, void* function, bool needAdditiveControl) {
		return ((T (*)(CoroutineTools*, float, void*, bool))(Il2CppBase() + 0x0))(this, delay, function, needAdditiveControl);
	}
	template <typename T = bool> T StopWaitCoroutine(uintptr_t coroutineObject) {
		return ((T (*)(CoroutineTools*, uintptr_t))(Il2CppBase() + 0x133E350))(this, coroutineObject);
	}
	template <typename T = uintptr_t> T WaitAndInvokeCoroutine(float delay, uintptr_t action, uintptr_t coroutineObject) {
		return ((T (*)(CoroutineTools*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x133E2AC))(this, delay, action, coroutineObject);
	}
	template <typename T = uintptr_t> T WaitAndInvokeCoroutine_1(float delay, void* function, uintptr_t coroutineObject) {
		return ((T (*)(CoroutineTools*, float, void*, uintptr_t))(Il2CppBase() + 0x0))(this, delay, function, coroutineObject);
	}
	template <typename T = int32_t> T GetNextIndex() {
		return ((T (*)(CoroutineTools*))(Il2CppBase() + 0x133E524))(this);
	}
	template <typename T = uintptr_t> T PopCoroutineObject() {
		return ((T (*)(CoroutineTools*))(Il2CppBase() + 0x133E148))(this);
	}
	template <typename T = void> T PushCoroutineObject(uintptr_t cObject) {
		return ((T (*)(CoroutineTools*, uintptr_t))(Il2CppBase() + 0x133E5BC))(this, cObject);
	}

};

}
