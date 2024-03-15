#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadConfigurationd30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadConfiguration>d__30"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ConfigurationLS*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 IEnumerable1ConfigurationVersion*>*& configs() {
		return *(IEnumerable1ConfigurationVersion*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(LoadConfigurationd30*))(Il2CppBase() + 0x1129048))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(LoadConfigurationd30*))(Il2CppBase() + 0x112904C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(LoadConfigurationd30*))(Il2CppBase() + 0x1129808))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(LoadConfigurationd30*))(Il2CppBase() + 0x1129810))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(LoadConfigurationd30*))(Il2CppBase() + 0x1129850))(this);
	}

};

