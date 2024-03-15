#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeFamilyCoefsd56
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeFamilyCoefs>d__56"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = PortalsLobbyWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& newHpValue() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& instant() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& newDmgValue() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& endTime5__2() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BAED0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BAED4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BB7B0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BB7B8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BB7F8))(this);
	}

};

