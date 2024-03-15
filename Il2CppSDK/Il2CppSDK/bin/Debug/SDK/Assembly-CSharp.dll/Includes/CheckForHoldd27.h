#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckForHoldd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckForHold>d__27"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ButtonWithSliderOnHold*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& minValue5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& maxValue5__3() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& deltaValue5__4() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& position5__5() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117958))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(CheckForHoldd27*))(Il2CppBase() + 0x111795C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117BF4))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117BFC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(CheckForHoldd27*))(Il2CppBase() + 0x1117C3C))(this);
	}

};

