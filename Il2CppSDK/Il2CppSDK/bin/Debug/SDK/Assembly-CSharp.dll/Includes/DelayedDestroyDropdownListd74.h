#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedDestroyDropdownListd74
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayedDestroyDropdownList>d__74"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& delay() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = UnityEngineUI::ExtendedDropdown*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(DelayedDestroyDropdownListd74*))(Il2CppBase() + 0xE9DA38))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(DelayedDestroyDropdownListd74*))(Il2CppBase() + 0xE9DA3C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(DelayedDestroyDropdownListd74*))(Il2CppBase() + 0xE9DAF8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(DelayedDestroyDropdownListd74*))(Il2CppBase() + 0xE9DB00))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(DelayedDestroyDropdownListd74*))(Il2CppBase() + 0xE9DB40))(this);
	}

};

