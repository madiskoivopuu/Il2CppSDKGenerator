#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveCoroutined14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveCoroutine>d__14"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RuneBuffInfoItem*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& leftTime5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& revertMoveDuration5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C7748))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C774C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C78FC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C7904))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveCoroutined14*))(Il2CppBase() + 0x10C7944))(this);
	}

};

