#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowNewRecipesCoroutined75
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowNewRecipesCoroutine>d__75"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& recipes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& showAll() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& recipesCount5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& leftNotificationCount5__3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& startIndex5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& maxViewCount5__5() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& maxCount5__6() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& i5__7() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10ACDEC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10ACDF0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10AD374))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10AD37C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10AD3BC))(this);
	}

};

}
