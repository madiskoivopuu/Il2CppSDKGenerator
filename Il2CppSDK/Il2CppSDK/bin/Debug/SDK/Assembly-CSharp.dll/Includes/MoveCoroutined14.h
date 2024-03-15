#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveCoroutined14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveCoroutine>d__14"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RuneBuffInfoItem*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& leftTime5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& revertMoveDuration5__3() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C7748))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C774C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C78FC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C7904))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C7944))(this);
	}

};

