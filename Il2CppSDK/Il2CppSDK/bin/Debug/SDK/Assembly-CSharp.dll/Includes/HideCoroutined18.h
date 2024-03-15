#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideCoroutined18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HideCoroutine>d__18"));
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
	template <typename R = float> R& leftTime5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& startAlpha5__3() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(HideCoroutined18*))(Il2CppBase() + 0xE9B228))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(HideCoroutined18*))(Il2CppBase() + 0xE9B22C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(HideCoroutined18*))(Il2CppBase() + 0xE9B358))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(HideCoroutined18*))(Il2CppBase() + 0xE9B360))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(HideCoroutined18*))(Il2CppBase() + 0xE9B3A0))(this);
	}

};

