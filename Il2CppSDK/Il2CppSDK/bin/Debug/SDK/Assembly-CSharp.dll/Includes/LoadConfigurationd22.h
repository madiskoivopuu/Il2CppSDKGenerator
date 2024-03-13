#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadConfigurationd22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadConfiguration>d__22"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ConfigurationState*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = IEnumerable1ConfigurationVersion*>*> T& configs() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112A46C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112A470))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112AA7C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112AA84))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadConfigurationd22*))(Il2CppBase() + 0x112AAC4))(this);
	}

};

