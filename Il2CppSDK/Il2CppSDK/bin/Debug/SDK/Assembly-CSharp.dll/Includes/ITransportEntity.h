#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITransportEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITransportEntity"));
	}


	template <typename T = TransportComponent*> T get_transport() {
		return ((T (*)(ITransportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTransport() {
		return ((T (*)(ITransportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ITransportEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ITransportEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveTransport() {
		return ((T (*)(ITransportEntity*))(Il2CppBase() + 0x0))(this);
	}

};

