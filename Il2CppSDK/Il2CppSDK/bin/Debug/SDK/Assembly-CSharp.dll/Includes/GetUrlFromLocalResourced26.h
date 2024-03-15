#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUrlFromLocalResourced26
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetUrlFromLocalResource>d__26"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BugReportWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(GetUrlFromLocalResourced26*))(Il2CppBase() + 0xEECC08))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(GetUrlFromLocalResourced26*))(Il2CppBase() + 0xEECC0C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(GetUrlFromLocalResourced26*))(Il2CppBase() + 0xEECD18))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(GetUrlFromLocalResourced26*))(Il2CppBase() + 0xEECD20))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(GetUrlFromLocalResourced26*))(Il2CppBase() + 0xEECD60))(this);
	}

};

