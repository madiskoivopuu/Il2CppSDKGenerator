#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITransportEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITransportEntity"));
	}


	template <typename R = TransportComponent*> R get_transport() {
		return ((R (*)(ITransportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTransport() {
		return ((R (*)(ITransportEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ITransportEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ITransportEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveTransport() {
		return ((R (*)(ITransportEntity*))(Il2CppBase() + 0x0))(this);
	}

};

