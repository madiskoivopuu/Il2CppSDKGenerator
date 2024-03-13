#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeFamilyCoefsd56
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeFamilyCoefs>d__56"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = PortalsLobbyWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& newHpValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& instant() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& newDmgValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& endTime5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BAED0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BAED4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BB7B0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BB7B8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ChangeFamilyCoefsd56*))(Il2CppBase() + 0x10BB7F8))(this);
	}

};

