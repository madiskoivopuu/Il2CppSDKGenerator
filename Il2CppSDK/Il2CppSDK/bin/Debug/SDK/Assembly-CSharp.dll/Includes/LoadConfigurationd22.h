#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadConfigurationd22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadConfiguration>d__22"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ConfigurationState*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 IEnumerable1ConfigurationVersion*>*& configs() {
		return *(IEnumerable1ConfigurationVersion*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112A46C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112A470))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112AA7C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112AA84))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112AAC4))(this);
	}

};

