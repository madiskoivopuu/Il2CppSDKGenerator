#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckForHoldd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckForHold>d__27"));
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
	template <typename T = float> T& minValue5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& maxValue5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& deltaValue5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& position5__5() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117958))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CheckForHoldd27*))(Il2CppBase() + 0x111795C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117BF4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117BFC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117C3C))(this);
	}

};

}
