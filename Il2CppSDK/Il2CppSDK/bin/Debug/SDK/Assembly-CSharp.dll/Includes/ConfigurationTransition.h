#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition.h" 

class ConfigurationTransition : public Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationTransition"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& TokenKey() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& MainAddress() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& CoordAddress() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& NewWorldId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 IEnumerable1<ConfigurationVersion*>*& Versions() {
		return *(IEnumerable1<ConfigurationVersion*>**)((uintptr_t)this + 0x50);
	}

	template <typename R = int64_t> R get_PlayerId() {
		return ((R (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E7724))(this);
	}
	template <typename R = Il2CppArray<uint8_t>*> R get_TokenKey() {
		return ((R (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E772C))(this);
	}
	template <typename R = Il2CppString*> R get_MainAddress() {
		return ((R (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E7734))(this);
	}
	template <typename R = Il2CppString*> R get_CoordAddress() {
		return ((R (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E773C))(this);
	}
	template <typename R = int64_t> R get_NewWorldId() {
		return ((R (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E7744))(this);
	}
	 IEnumerable1<ConfigurationVersion*>* get_Versions() {
		return ((IEnumerable1<ConfigurationVersion*>* (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E774C))(this);
	}

};

