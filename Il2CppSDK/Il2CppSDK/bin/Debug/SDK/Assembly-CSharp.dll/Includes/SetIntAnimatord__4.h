#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetIntAnimatord4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetIntAnimator>d__4"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SetIntAnimatord4*))(Il2CppBase() + 0x1148284))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SetIntAnimatord4*))(Il2CppBase() + 0x1148288))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SetIntAnimatord4*))(Il2CppBase() + 0x1148388))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SetIntAnimatord4*))(Il2CppBase() + 0x1148390))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SetIntAnimatord4*))(Il2CppBase() + 0x11483D0))(this);
	}

};

}
