#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveCoroutined19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveCoroutine>d__19"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = DungeonGradeButton*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onFinish() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& leftTime5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rect5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& startPosition5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B3D4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B3D8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B5E4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B5EC))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveCoroutined19*))(Il2CppBase() + 0xE9B62C))(this);
	}

};

