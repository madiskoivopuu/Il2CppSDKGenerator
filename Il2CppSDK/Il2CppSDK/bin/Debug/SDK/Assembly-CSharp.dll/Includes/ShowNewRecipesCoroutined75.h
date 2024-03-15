#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowNewRecipesCoroutined75
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowNewRecipesCoroutine>d__75"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<Il2CppString*>*& recipes() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = NotificationsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& delay() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& showAll() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> R& recipesCount5__2() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& leftNotificationCount5__3() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> R& startIndex5__4() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& maxViewCount5__5() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> R& maxCount5__6() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& i5__7() {
		return *(R*)((uintptr_t)this + 0x4C);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10ACDEC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10ACDF0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10AD374))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10AD37C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ShowNewRecipesCoroutined75*))(Il2CppBase() + 0x10AD3BC))(this);
	}

};

