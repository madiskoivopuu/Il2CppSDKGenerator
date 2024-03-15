#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdatePositiond33
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdatePosition>d__33"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TooltipView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& screenPos() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F20C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F210))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F2D8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F2E0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(UpdatePositiond33*))(Il2CppBase() + 0x229F320))(this);
	}

};

