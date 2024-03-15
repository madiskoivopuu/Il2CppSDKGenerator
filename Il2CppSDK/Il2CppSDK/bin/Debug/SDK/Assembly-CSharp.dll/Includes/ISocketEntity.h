#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISocketEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISocketEntity"));
	}


	template <typename R = SocketComponent*> R get_socket() {
		return ((R (*)(ISocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSocket() {
		return ((R (*)(ISocketEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((R (*)(ISocketEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newIgnoreRotation);
	}
	template <typename R = void> R ReplaceSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((R (*)(ISocketEntity*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newIgnoreRotation);
	}
	template <typename R = void> R RemoveSocket() {
		return ((R (*)(ISocketEntity*))(Il2CppBase() + 0x0))(this);
	}

};

