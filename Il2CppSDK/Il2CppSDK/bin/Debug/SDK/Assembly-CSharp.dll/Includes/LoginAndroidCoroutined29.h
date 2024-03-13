#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginAndroidCoroutined29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoginAndroidCoroutine>d__29"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = LoginWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& maxWait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoginAndroidCoroutined29*))(Il2CppBase() + 0x1162070))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoginAndroidCoroutined29*))(Il2CppBase() + 0x1162074))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoginAndroidCoroutined29*))(Il2CppBase() + 0x1162420))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoginAndroidCoroutined29*))(Il2CppBase() + 0x1162428))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoginAndroidCoroutined29*))(Il2CppBase() + 0x1162468))(this);
	}

};

