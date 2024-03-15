#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Reconnectd43
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Reconnect>d__43"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BaseLoaderStep*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Reconnectd43*))(Il2CppBase() + 0xEE83F8))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Reconnectd43*))(Il2CppBase() + 0xEE83FC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Reconnectd43*))(Il2CppBase() + 0xEE8574))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Reconnectd43*))(Il2CppBase() + 0xEE857C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Reconnectd43*))(Il2CppBase() + 0xEE85BC))(this);
	}

};

