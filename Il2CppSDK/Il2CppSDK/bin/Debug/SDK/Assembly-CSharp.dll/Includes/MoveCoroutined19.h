#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveCoroutined19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveCoroutine>d__19"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = DungeonGradeButton*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& onFinish() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& leftTime5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& rect5__3() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& startPosition5__4() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B3D4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B3D8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B5E4))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B5EC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B62C))(this);
	}

};

