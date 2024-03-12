#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition" 

class ConfigurationTransition: Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationTransition"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TokenKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& MainAddress() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& CoordAddress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& NewWorldId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& Versions() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = int64_t> T get_PlayerId() {
		return ((T (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E7724))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TokenKey() {
		return ((T (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E772C))(this);
	}
	template <typename T = Il2CppString*> T get_MainAddress() {
		return ((T (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E7734))(this);
	}
	template <typename T = Il2CppString*> T get_CoordAddress() {
		return ((T (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E773C))(this);
	}
	template <typename T = int64_t> T get_NewWorldId() {
		return ((T (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E7744))(this);
	}
	template <typename T = void*> T get_Versions() {
		return ((T (*)(ConfigurationTransition*))(Il2CppBase() + 0x15E774C))(this);
	}

};

}
