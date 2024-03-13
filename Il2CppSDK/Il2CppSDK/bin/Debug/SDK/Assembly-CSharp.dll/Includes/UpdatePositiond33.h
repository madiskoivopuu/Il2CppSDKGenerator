#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdatePositiond33
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdatePosition>d__33"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TooltipView*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& screenPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F20C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F210))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F2D8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F2E0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F320))(this);
	}

};

